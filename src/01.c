#include <stdio.h>

void main() {
  int a = 0;
  int b = 0;
 
  printf("enter value of a = ");
  scanf("%d", &a);

  printf("enter value of b = ");
  scanf("%d",&b);

  int sum = a + b;
  int diff = a - b;
  int mult = a * b;
  float div = a / b;

  printf("sum = %d\n", sum);
  printf("difference = %d\n", diff);
  printf("multiply = %d\n",mult);
  printf("division = %f\n",div);
}
