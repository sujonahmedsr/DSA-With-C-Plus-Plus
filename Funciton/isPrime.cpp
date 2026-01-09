// WAF to check if a number is prime or not.

#include <iostream>
using namespace std;

// Function to check prime

bool isPrime (int n){
    
    if(n <= 1) return false;
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Function to print all primes from 2 to N
void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Your your number: ";
    cin >> n;
    
    if(isPrime(n)){
        cout << "It's a prime number 😍" << endl;
    }else{
        cout << "It's not a prime number 😥" << endl;
    }

    cout << "All prime numbers from 2 to " << n << " are: ";
    printPrimes(n);
    
    return 0;
}