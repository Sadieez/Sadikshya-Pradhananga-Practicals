#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int numbers[ARRAY_SIZE] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("Using array indexing:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("\nUsing pointer arithmetic:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", *(ptr + i));
    }

    printf("\nUsing pointer indexing:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}