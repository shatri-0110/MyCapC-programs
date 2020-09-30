// C program to swap two numbers

#include<stdio.h>  // Header file

void main()        // Creating a void fuction 
{
 
int x, y, temp;    // Declaring variables
  
printf("Enter two numbers to be swapped:") ;
  
scanf("%d %d", &x, &y) ;     // Taking input
  
temp=x;       // swap started
  
x=y;
  
y=temp;      // swap finished
  
printf("The swapped numbers are: %d %d",x,y) ;   // Printing out swaped numbers
  
}
