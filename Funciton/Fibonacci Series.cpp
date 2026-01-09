#include <iostream>
using namespace std;

// WAF to print nth Fibonacci.
void printFibonacci(int n){
    int a = 0, b = 1, next;
    
    if(n >= 1) cout << a << " ";
    if(n >= 2) cout << b << " ";
    
    for(int i = 3; i <= n; i++){
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}

int main() {
    
    int n;
    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> n;
    
    cout << "Your fibonacci series is : ";
    printFibonacci(n);
    
    return 0;
}