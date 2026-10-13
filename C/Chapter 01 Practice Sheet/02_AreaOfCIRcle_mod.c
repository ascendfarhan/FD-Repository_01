#include <stdio.h>
int main()
{
    float r;
    printf("Enter radious of circle");
    scanf("%f", &r);
    float a = 3.14159 * r * r;
    printf("area of the circle of radius %f is = %f \n ", r , a);
    float h;
    printf("Enter hieght of the cylinder");
    scanf("%f" , &h);
    double v = a * h ;
    printf("Volume of the cylinder of radius %f and hieght %f is = %lf", r , h , v);
    return 0;
};
 