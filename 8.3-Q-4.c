#include <stdio.h>

void print_boundary_elements(int arr[][5], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        printf("%d ", arr[0][i]);
        sum += arr[0][i];
    }
    printf("\n");

    for (int i = 1; i < rows - 1; i++) {
        printf("%d", arr[i][cols - 1]);
        sum += arr[i][cols - 1];
        for (int j = 1; j < cols - 1; j++) {
            printf("  ");
        }
        printf("%d\n", arr[i][0]);
        sum += arr[i][0];
    }

    for (int i = 0; i < cols; i++) {
        printf("%d ", arr[rows - 1][i]);
        sum += arr[rows - 1][i];
    }
    printf("\n");

    printf("\nThe sum of boundary elements of an Array: %d\n", sum);
}

int main() {
    int arr[5][5];

    printf("Enter array's elements:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    print_boundary_elements(arr, 5, 5);


}
