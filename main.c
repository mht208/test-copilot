#include <stdlib.h>
#include <stdio.h>

int abs(int x) {
  return x < 0 ? -x : x;
}

int main(void) {
  int x = -12345;
  x = abs(x);
  printf("%d\n", x);
  return 0;
}
