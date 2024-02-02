#include <stdio.h>
int main() {
  int one = 1;
  int *val;
  val = &one;

  printf("%x\n", val);
  printf("%d\n", *val);
  return 0;
}
