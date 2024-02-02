#include <stdio.h>

int main() {
  int height;
  int length;
  printf("what is the height?");
  scanf("%d", &height);
  printf("what is the length?");
  scanf("%d", &length);
  printf("The area is: %d", height * length);
  return 0;
}
