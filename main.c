#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = (int*)malloc(10 * sizeof(int));
    int n;
    for (n = 1; n <= 10; n++) {
        *(a +n) = n;
    }
    for (n = 1; n <= 10; n++) {
        printf("%d ", *(a + n));
    }
    free(a);
    return 0;
}