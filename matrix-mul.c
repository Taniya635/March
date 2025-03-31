#include <stdio.h>

#define MAX 10  // Define maximum size of matrices

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;

    // Input first matrix dimensions
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Input second matrix dimensions
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible! Column of first matrix must be equal to row of second.\n");
        return 1;
    }

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &first[i][j]);

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &second[i][j]);

    // Multiply matrices
    multiplyMatrices(first, second, result, row1, col1, col2);

    // Display result
    printf("Resultant Matrix:\n");
    displayMatrix(result, row1, col2);

    return 0;
}
