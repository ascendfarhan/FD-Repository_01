#include <stdio.h>
int main()
{
    float c;
    printf("Enter Temprature in Celcius ");
    scanf("%f", &c);
    float f;
    f = (c * 1.8) + 32;
    printf("Temperature In Faranhite = %f", f);
    return 0;
};
