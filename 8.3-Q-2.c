#include <stdio.h>

void add_2d_arrays(int arr1[][100], int arr2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr1[100][100], arr2[100][100], result[100][100];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter array B's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    add_2d_arrays(arr1, arr2, result, rows, cols);

    printf("\nArray C is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
