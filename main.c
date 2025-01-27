#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* Dynamic2D(int n) {
    int *p = (int*)malloc(5 * sizeof(int));
    printf("Enter elemnts:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    return p;
}
int main(void) {
    int *p = NULL;
    p = Dynamic2D (5);
    for (int i = 0; i < 5; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);

    if (p == NULL) {
        printf("p is NULL\n");
        exit(1);
    }
    else {
        printf("p is valid\n");
    }
    return 0;
}
