#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1000;
    int *matrix = malloc(n * n * sizeof(int));
    if (matrix == NULL)
 {
    printf("Memory allocation failed.\n");
    return 1;
 }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i * n + j] = i * n + j + 1;
        }

    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%4d \n ", matrix[i * n + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
