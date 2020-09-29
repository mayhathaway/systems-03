#include <stdio.h>
#include <stdlib.h>

int main() {

  int sum_individual = 0;
  int sum_total = 0;

  int i;
  for (i = 0; i <= 100; i++) {
    sum_individual += i * i;
  }

  for (i = 0; i <= 100; i++) {
    sum_total += i;
  }
  sum_total = sum_total * sum_total;

  int result = sum_total - sum_individual;
  printf("result: %d\n", result);

  return 0;
}
