#include <stdio.h>

int main() {
  int year;
  int age;
  printf("what is your age?");
  scanf("%d", &age);
  printf("what year is it?");
  scanf("%d", &year);
  printf("your birth year is: %d", (year - age));
  return 0;
}
