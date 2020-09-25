#include<stdio.h>
void main() 
{
int x, y, temp;
printf("Enter two numbers to be swapped:") ;
scanf("%d %d", &x, &y) ;
temp=x;
x=y;
y=temp;
printf("The swapped numbers are: %d %d",x,y) ;
}
