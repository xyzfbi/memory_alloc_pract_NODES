#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;
    int n;
    printf("Hello, nigga!\n");
    printf("Please enter a length of array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
