#include<stdio.h>

/* FUNCTION DEFINITION*/
int fact(int n){
    if(n >= 1){
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main(){
    int num, factorial;
    printf("Enter a number: ");
    scanf("%d",&num);
    factorial = fact(num); /*FUNCTION CALL*/
    printf("Factorial of %d is: %d",num,factorial);
    return 0;
}