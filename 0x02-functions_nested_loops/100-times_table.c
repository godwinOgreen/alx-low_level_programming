#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int k = i * j;
            if (j != 0) {
                printf(", ");
            }
            if (k < 10) {
                printf("  %d", k);
            } else if (k < 100) {
                printf(" %d", k);
            } else {
                printf("%d", k);
            }
        }
        printf("\n");
    }
}
