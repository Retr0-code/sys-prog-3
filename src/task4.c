#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int qsort_less_then(const void *a, const void *b) {
    return (*(float *)a - *(float *)b);
}

int main() {
    int *arr = NULL;
    float *arr_sqrt = NULL;
    size_t arr_size = 0;
    scanf("%lu", &arr_size);

    if (arr_size == 0) {
        fputs("Error: null size entered", stderr);
        return -1;
    }

    arr = malloc(sizeof(int) * arr_size);
    arr_sqrt = malloc(sizeof(int) * arr_size);
    if (arr == NULL) {
        perror("Error: ");
        return -1;
    }

    for (size_t i = 0; i < arr_size; ++i)
        scanf("%i", &arr[i]);

    size_t sqrt_size = 0;
    for (size_t i = 0; i < arr_size; ++i) {
        if (arr[i] > 0) {
            arr_sqrt[sqrt_size] = sqrtf(arr[i]) / 5;
            ++sqrt_size;
        }
    }
    
    if (sqrt_size != arr_size)
        arr_sqrt = realloc(arr_sqrt, sqrt_size);
    
    qsort(arr_sqrt, sqrt_size, sizeof(float), &qsort_less_then);

    for (size_t i = 0; i < sqrt_size; ++i)
        printf("%f ", arr_sqrt[i]);
    putchar(0x0a);

    free(arr);
    free(arr_sqrt);

    return 0;
}
