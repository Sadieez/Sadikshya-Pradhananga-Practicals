#include <stdio.h>

#define SUCCESS 0
#define ERROR 1

int secureSwap(int *a, int *b) {
    if (a == NULL || b == NULL) {
        printf("Error: NULL pointer\n");
        return ERROR;
    }

    int temp = *a;
    *a = *b;
    *b = temp;

    return SUCCESS;
}

int main() {
    int x = 5, y = 10;
    int *nullPtr = NULL;

    secureSwap(&x, &y);
    printf("x=%d y=%d\n", x, y);

    secureSwap(&x, nullPtr);

    return 0;
}