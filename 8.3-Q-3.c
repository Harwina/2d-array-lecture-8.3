#include <stdio.h>

int diagonal_sum(int arr[][100], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i][i];
    }
    return sum;
}

int main() {
    int size;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int arr[100][100];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = diagonal_sum(arr, size);

    printf("\nThe sum of diagonal elements of an Array: %d\n", sum);
}
