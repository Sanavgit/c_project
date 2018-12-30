/* Simple C Program to add Two numbers */

#include <stdio.h>
void add()
{
  int number1, number2, sum;
 
  printf(" \n Enter two integer values \n ");
  scanf("%d %d", &number1, &number2);
  
  sum = number1 + number2;
 
  printf(" Sum of the two integer values is %d", sum);
  //return 0;
}
