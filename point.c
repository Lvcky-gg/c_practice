#include <stdio.h>
int main() {
  int a = 5;
  int *p;
  p = &a;
  printf("%p", &a);
  printf("p", p);

  return 0;
}
