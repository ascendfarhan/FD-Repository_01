#include <stdio.h>
int main()
{
    float c;
    printf("Enter Temprature in Celcius ");
    scanf("%f", &c);
    float k;
    k = c + 273 ;
    printf("Temperature In Kelvin = %f", k);
    return 0;
};
