#include "modulus.h"

double mod (double num1 , double num2)
{
    double quotient = (int)(num1 / num2);

    // Calculate the remainder
    double remainder = num1 - quotient * num2;

    return remainder;
}
