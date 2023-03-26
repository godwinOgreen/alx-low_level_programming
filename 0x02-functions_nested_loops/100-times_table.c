#include <stdio.h>

void print_times_table(int n) {
  // check if n is in the valid range of [0, 15]
  if (n < 0 || n > 15) {
    return;
  }

  // print the times table
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      printf("%4d", i * j); // use %4d to align the numbers
    }
    printf("\n");
  }
}
