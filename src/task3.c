#include <stdio.h>
#include <stdlib.h>

// static int qsort_less_then(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }

int main() {
    int *arr = NULL;
    size_t arr_size = 0;
    scanf("%lu", &arr_size);

    if (arr_size == 0) {
        fputs("Error: null size entered", stderr);
        return -1;
    }

    arr = malloc(sizeof(int) * arr_size);
    if (arr == NULL) {
        perror("Error: ");
        return -1;
    }

    for (size_t i = 0; i < arr_size; ++i)
        scanf("%i", &arr[i]);

    // qsort(arr, arr_size, sizeof(int), &qsort_less_then);

    int sum = 0;
    int amount = 0;
    for (size_t i = 0; i < arr_size; ++i) {
        if (arr[i] < 0) {
            printf("%li ", i);
            sum += arr[i];
            ++amount;
        }
    }
    printf("\naverage: %i\n", amount == 0 ? 0 : sum / amount);

    free(arr);

    return 0;
}
