#include <stdio.h>
int main() {
  int a = 5;
  int *p;
  p = &a;
  printf("%p\n", &a);
  printf("%p\n", p);

  int b;
  int *k;
  k = &b;
  *k = 5;
  printf("%i\n", &k);

  return 0;
}
