#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *a_ptr = &a, *b_ptr = &b;
    *a_ptr *= 2;
    *b_ptr /= 2;

    printf("a: %i\nb: %i\n", a, b);
    return 0;
}
