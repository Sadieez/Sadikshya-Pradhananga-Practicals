#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

bool validate(int *arr, int size) {
    if (arr == NULL || size <= 0 || size > MAX) {
        printf("Invalid input\n");
        return false;
    }
    return true;
}

bool sum(int *arr, int size, int *result) {
    if (result == NULL || !validate(arr, size)) return false;

    *result = 0;
    for (int i = 0; i < size; i++) {
        *result += arr[i];
    }
    return true;
}

int main() {
    int arr[5] = {10,20,30,40,50};
    int result;

    if (sum(arr,5,&result)) {
        printf("Sum=%d\n", result);
    }

    return 0;
}