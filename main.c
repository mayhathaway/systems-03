#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("problem one:\n");
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


  printf("problem six:\n");
  int sum_individual = 0;
  int sum_total = 0;

  for (i = 0; i <= 100; i++) {
    sum_individual += i * i;
  }

  for (i = 0; i <= 100; i++) {
    sum_total += i;
  }
  sum_total = sum_total * sum_total;

  result = sum_total - sum_individual;
  printf("result: %d\n", result);
  return 0;
}
