//WAP to enter the radius of a circle and find its diameter,circumference and area
#include <stdio.h>
int main()
{
    float R, D = 0, C = 0, A = 0;
    printf("enter the radius of circle:");
    scanf("%f", &R);
    D = 2 * R;
    C = 2 * 3.14 * R;
    A = 3.14 * R * R;
    printf("the diameter of given circle is %f\n", D);
    printf("circumference:%f\n", C);
    printf("area:%f\n", A);
    return 0;
}