#include<stdio.h>

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
    printf("Enter a number: ");
    scanf("%d",&num);
    Fibonacci = fib(num);
    printf("Fibinocci of %d is %d",num,Fibonacci);
    return 0;
}