#include <stdio.h>

/**
 * simple_calculator - C program for a simple maths calculation
 * scanf - function to take input from user
 * switch - evaluates input operator value against list of values,
 * and return the results of corresponding to the first matched value.
 * printf - output the result to the console.
 * Return - 0
*/


int main()
{
    int a,b, sum, sub, div, mul;
    char operator;

    printf("Enter operator: ");
    scanf("%c", &operator);
    //User is required to input operator either of the following operators ( sum: +, sub: -, div: /, mul: *)
  
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    // User is required to input two integers to be assigned to a & b
  
    // Switch function is itterated after the above inputs had been taken
    switch (operator)
    {
        case '+': sum = a+b;
            printf("Sum: %d\n", sum);
            break;

        case '-': sub = a-b;
            printf("Subtract: %d\n", sub);
            break;

        case '*': mul = a*b;
            printf("Multiply: %d\n", mul);
            break;

        case '/': sub = a/b;
            printf("Divide: %d\n", div);
            break;

        default:
            printf("Error: Please check again to ensure you enter the right operator!\n");
            break;

    }

    return 0;
}
    
