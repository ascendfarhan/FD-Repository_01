#include <stdio.h>
int main()
{
  float l, b;

  printf("Enter length of Rectangle");
  scanf("%f", &l);
  printf("Enter Breadth of Rectangle");
  scanf("%f", &b);
  float a = l * b;
  printf("Area of Rectangle Is = %f CM \n", a);

  return 0;
};