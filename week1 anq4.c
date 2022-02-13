//WAP to enter two numbers and performs all arithmetic operators using switch case 
#include <stdio.h>

int main()
{
    float a, b, c;
    int n;
    printf("press\n 1-addition\n 2-subtraction\n 3-multiplication\n 4-divide\n");
    printf("input two number:");
    scanf("%f%f", &a, &b);
    printf("enter the operator number above to perform\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:

        c = a + b;
        printf("addition of %f and %f is:%f", a, b, c);
        break;
    case 2:
        c = a - b;
        printf("subtraction of %f and %f is:%f", a, b, c);
        break;
    case 3:
        c = a * b;
        printf("multiplication of %f and %f is:%f", a, b, c);
        break;
    case 4:
        c = a / b;
        printf("division of %f and %f is:%f", a, b, c);
        break;

    default:
        break;
    }
    return 0;
}