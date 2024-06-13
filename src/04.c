#include <stdio.h>
void main()
{
  int emp_id;
  char name[20];
  float sal;
  printf("Enter employee id, name and salary:");
  scanf("%d %s %f", &emp_id, name, &sal);
  printf("\n Name is %s", name);
  printf("\nemployee id is %d", emp_id);
  printf("\n Salary is %.2f", sal);
}