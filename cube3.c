/* C Program to Calculate Cube of a Number */
 
#include<stdio.h>
 
void cube()
{
  int number, cube;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  cube = number * number * number;
  
  printf("\n Cube of a given number %d is  =  %d", number, cube);
 
  //return 0;
}
