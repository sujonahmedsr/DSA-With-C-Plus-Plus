#include <iostream>
using namespace std;

// Calculate sum of numbers from 1 to using function

int sumOfM(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

// Calculate N factorial
int factorialOFN(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

// sum of digits 
int sumOfDigits(int num){
    int digSum = 0;
    
    while (num > 0){
        int lastDigit = num % 10;
        num = num / 10;
        
        digSum += lastDigit;
    }
    
    return digSum;
}

int main(){
    int n;
    cout << "Your your number: ";
    cin >> n;
    // cout << "Sum of your number is : " << sumOfM(n) << endl;
    // cout << "And the factorial of " << n << " : " << factorialOFN(n) << endl;
    
    cout << "The sum of digit is: " << sumOfDigits(n) << endl;
    
    return 0;
}