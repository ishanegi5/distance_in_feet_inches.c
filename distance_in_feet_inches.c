#include<stdio.h>
struct feet_inches
{
    int feet;
    int inches;
};
struct feet_inches f_I;
struct feet_inches input()
{  printf("Enter feet: ");
  scanf("%d",&f_I.feet);
  printf("Enter inches: ");
  scanf("%d",&f_I.inches);
}
struct feet_inches print()
{
    float inch_to_feet =(float)f_I.inches/12;
    float sum=f_I.feet+inch_to_feet;
    printf("addition of %d feet and %d inches: %f",f_I.feet,f_I.inches,sum);
}
int main()
{ 
  input();
  print();
    return 0;
}
