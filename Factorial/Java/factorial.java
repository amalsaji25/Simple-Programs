package Factorial.Java;

import java.util.Scanner;

class factorial{

    static int fact(int n){
        if(n >= 1){
            return n * fact(n - 1);
        }
        else{
            return 1;
        }
    }

    public static void main(String args[]){
        int fact, num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        fact = fact(num);
        System.out.println("Factorial of "+ num + " is: "+fact);
        sc.close();
    }
}