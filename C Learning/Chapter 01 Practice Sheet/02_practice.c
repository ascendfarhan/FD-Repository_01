#include <stdio.h>
int main()
{
    float r;
    printf("Enter radious of circle");
    scanf("%f", &r);
    float a = 3.14159 * r * r;
    printf("area of the circle of radius %f is = %f", r , a);
    return 0;
};