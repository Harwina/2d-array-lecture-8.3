#include <stdio.h>

    float average_2d_array(int arr[][100], int rows, int cols) {
    float total = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += arr[i][j];
            count++;
        }
    }
    return total / count;
}

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[100][100];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    float avg = average_2d_array(arr, rows, cols);
    printf("\nAverage of an Array: %.2f\n", avg);
}
