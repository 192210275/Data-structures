#include <stdio.h>

int main() {

  int input[] = {12,12,12,13,14,11,11,11,15};

  if (sizeof(input) == 0) return 0;

  int prev = input[0];
  int count = 1;
  int i;
  int ARRAYSIZE = sizeof(input) / sizeof(int);

  for (i = 1; i < ARRAYSIZE; i++) {
    if (input[i] == prev) {
      count++;
    } else {
      printf("%d=%d ", prev, count);
      prev = input[i];
      count = 1;
    }

  }
  printf("%d=%d\n", prev, count);
  return 0;
}
