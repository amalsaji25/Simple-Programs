#include <iostream>
using namespace std;

int fib(int);

int fib(int n){
    if(n >= 3){
        return fib(n - 1) + fib(n - 2);
    }
    else
    {
        return 1;
    }
}

int main(){
    int num, Fibonacci;
    cout<<"Enter a number: ";
    cin>>num;
    Fibonacci = fib(num);
    cout<<"Fibonacci of "<<num<<" is "<<Fibonacci;
    return 0;
}