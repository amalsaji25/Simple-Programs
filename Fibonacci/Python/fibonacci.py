# FUNCTION DEFINITION
def fib(n) :
    if n >= 3 :
        return fib(n - 1) + fib(n - 2)
    else :
        return 1

num = input("Enter a number: ")
i_num = int(num)
Fibonacci = fib(i_num) #FUNCTION CALL
print("Fibonacci of",num,"is",Fibonacci)
