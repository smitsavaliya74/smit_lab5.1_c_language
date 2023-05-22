#include<stdio.h>
#include<conio.h>

void main ()
{
  float a,b;
  clrscr();

  printf("Enter the first number: ");
  scanf("%f",&a);

  printf("Enter the second number: ");
  scanf("%f",&b);

  if (a<b)
  {
  printf("first number is minimum");
  }
  else
  {
  printf("second number is minimum");
  }
  getch();

}