// c program to check odd or even

#include <stdio.h>
int main()
{
    int n, k;
    printf("input a number:");
    scanf("%d", &n);
    k = n % 2;
    switch (k == 0)
    {
    case 1:
        printf("%d is even number", n);
        break;
    case 0:
        printf("%d is odd number", n);
        break;
    }
    return 0;
}