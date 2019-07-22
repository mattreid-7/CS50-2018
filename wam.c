
#include <stdio.h>

int main (int argc, char *argv[]) {
int course1, course2, course3, course4;
double average;


  printf("Enter marks for 4 courses enrolled in past semester? \n");

  scanf("%d %d %d %d", &course1, &course2, &course3, &course4);

  average = (course1 + course2 + course3 + course4) /4;

  // %.2f -- the .2 makes sure only two decimal points are printed
  printf("Your WAM  is: %.2lf \n", average);

  if (average >= 85) 
  {
    printf("Your grade is HD \n");
  }

  if (average >= 75) 
  {
    print("Your grade is D \n");
  }

  if (average >= 65) 
  {
    printf("Your grade is CR \n");
  }

  if (average >= 50)
  {
    printf("Your grade is PS \n");
  }

  if (average < 50)
  {
    printf("Your grade is FL \n");
  }
  return 0;
}