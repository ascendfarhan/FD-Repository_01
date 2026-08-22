#include <stdio.h>
int main()
{
    float p, roi, t;
    printf("Enter Pricipal Amount\n");
    scanf("%f", &p);
    printf("Enter Rate of Intrest\n");
    scanf("%f", &roi);
    printf("Enter Time In Years\n");
    scanf("%f", &t);
    double SI;
    SI = (p * roi * t)/100 ;
    printf("Simple Intrest of \n Principal Amount %f , Rate %f And Time of %F Years Is = %lf ", p , roi , t  ,SI);
    return 0;
};