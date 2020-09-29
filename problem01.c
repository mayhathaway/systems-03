#include <stdio.h>
#include <stdlib.h>

int main() {

  int i;
  int total = 0;
  int repeats = 0;

  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      total += i;
    }
    if (i % 5 == 0) {
      total += i;
    }
    if (i % 15 == 0) {
      repeats += i;
    }
  }

  int result = total - repeats;
  printf("result: %d\n", result);

  return 0;
}
