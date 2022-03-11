/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  float avg;
//getting inputs for the calculation
  printf("Enter the mark 1: ");
  scanf("%d", &m1);
  
  printf("Enter the mark 2: ");
  scanf("%d", &m2);
//calculating the average
  avg=(m1+m2)/2.0;
  printf("The average is:%.2f",avg);
  
  return 0;
}//end of the function main

