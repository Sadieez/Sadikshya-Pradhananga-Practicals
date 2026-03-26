#include <stdio.h>

#define ARRAY_SIZE 5

int calculateSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int numbers[ARRAY_SIZE] = {10, 20, 30, 40, 50};

    int sum = calculateSum(numbers, ARRAY_SIZE);
    int max = findMax(numbers, ARRAY_SIZE);

    printf("Sum: %d\n", sum);
    printf("Max: %d\n", max);

    return 0;
}