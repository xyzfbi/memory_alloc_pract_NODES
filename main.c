#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buffer[100];
    char *str = NULL;

    printf("Enter string: ");
    gets(buffer);
    str = strdup(buffer);
    if (str == NULL) {
        printf("Memory allocation failed\n");
    }
    else {
        printf("Memory allocated successfully\n");
        printf("%s\n", str);
    }
    free(str);
    return 0;
}
