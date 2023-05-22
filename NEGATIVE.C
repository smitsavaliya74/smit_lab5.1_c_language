#include<stdio.h>
#include<conio.h>

void main ()
{
   float a;
   clrscr();

   printf("enter any number: ");
   scanf("%f",a);

   if(a<0)
   {
   printf("given number is negative");
   }
   else if(a==0)
   {
   printf("given number is neutral");
   }
   else
   {
   printf("given number is positive");
   }
   getch();
}