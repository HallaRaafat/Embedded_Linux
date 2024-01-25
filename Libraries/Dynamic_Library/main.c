#include <stdio.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplaction.h"
#include "devision.h"
#include "modulus.h"

int main ()
{
double num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /,%%): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any whitespace

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = add(num1 , num2);
            break;
        case '-':
            result =sub (num1 , num2);
            break;
        case '*':
            result = mult(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                result = dev(num1, num2);
            } else {
                printf("Error: Division by zero.\n");
                return 1;  // Exit with an error code
            }
            break;
        case '%':
             result=mod(num1,num2);
                 break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit with an error code
    }

    // Output
printf("Result: %.2f\n", result);

return 0;
}
