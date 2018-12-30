#include<stdio.h>

void even()
{
  int number;

  printf(" \n Enter an int value to check Even or Odd \n");
  scanf("%d", &number);
  
  if ( number%2 == 0 ) //Check whether remainder is 0 or not
     printf("Given number %d is EVEN NUMBER \n", number);

  else
    printf("Given number %d is ODD NUMBER \n", number);

  //return 0;
}
