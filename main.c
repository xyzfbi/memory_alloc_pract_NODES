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
    return 0;
}
