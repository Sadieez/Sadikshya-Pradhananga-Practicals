#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool valid(int *arr, int size) {
    return (arr != NULL && size > 0 && size <= MAX);
}

bool calculateAvg(int *arr, int size, float *avg) {
    if (avg == NULL || !valid(arr, size)) return false;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] > 100) {
            printf("Invalid score\n");
            return false;
        }
        sum += arr[i];
    }

    *avg = (float)sum / size;
    return true;
}

int main() {
    int scores[5];
    float avg;

    printf("Enter 5 scores:\n");

    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &scores[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    if (calculateAvg(scores, 5, &avg)) {
        printf("Average = %.2f\n", avg);
    }

    return 0;
}