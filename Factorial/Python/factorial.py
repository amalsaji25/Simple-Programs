#FUNCTION DEFINITION
def fact(n) :
    if n >= 1 :
        return n * fact(n - 1)
    else :
        return 1

num = input("Enter a number: ")
i_num = int(num)
factorial = fact(i_num) #FUNCTION CALL
print("Factorial of",num,"is :",factorial)