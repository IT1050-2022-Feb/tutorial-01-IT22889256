/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int sub_1, sub_2, avg; // variables

  printf("Enter first number : "); // prompt
  scanf("%d", &sub_1);             // first input

  printf("Enter second number : "); // prompt
  scanf("%d", &sub_2);              // second input

  // calculaiton
  avg = (sub_1 + sub_2) / 2;

  printf("Average is : %d", avg); // display average

  return 0;
}
