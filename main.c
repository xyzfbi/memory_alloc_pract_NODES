#include <stdio.h>
#include <stdlib.h>

int* Dynamic2D(int* size) {
    int capacity = 5;
    int *p = (int*)malloc(sizeof(int) * capacity);
    if (p == NULL) {
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter elements (0 to stop):\n");
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (*size >= capacity) {
            capacity *= 2;
            p = (int*)realloc(p, capacity * sizeof(int));
            if (p == NULL) {
                printf("Memory allocation error\n");
                exit(EXIT_FAILURE);
            }
        }
        p[(*size)++] = num;
    }
    return p;
}

int main(void) {
    int size = 0;
    int *p = Dynamic2D(&size);

    printf("Elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);
    return 0;
}