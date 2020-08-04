package Fibinocci.Java;
import java.util.Scanner;

class fibonacci{

    static int fib(int n){
        if(n >= 3){
            return fib(n - 1) + fib(n - 2);
        }
        else{
            return 1;
        }
    }

    public static void main(String arg[]){
        int num, Fibonacci;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        Fibonacci = fib(num);
        System.out.println("Fibonacci of "+num+" is "+Fibonacci);
        sc.close();

    }
}
