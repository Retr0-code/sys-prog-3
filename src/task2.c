#include <stdio.h>
#include <stdlib.h>

int main() {
    float *a_ptr = NULL, *b_ptr = NULL, *c_ptr = NULL;
    a_ptr = malloc(sizeof(float));
    b_ptr = malloc(sizeof(float));
    c_ptr = malloc(sizeof(float));

    *a_ptr = 1.f;
    *b_ptr = 3.f;
    *c_ptr = 2.f;

    *c_ptr = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = *c_ptr;

    printf("a: %f\nb: %f\nc: %f\n", *a_ptr, *b_ptr, *c_ptr);
    free(a_ptr);
    free(b_ptr);
    free(c_ptr);
    return 0;
}
