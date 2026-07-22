#include <stdio.h>

int main() {
    int rows, cols;
    int a[10][10], b[10][10], c[10][10];
    int i, j;

    // Step 2: Read rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Step 3: Read elements of Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read elements of Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 4: Find Sum and store in Matrix C
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Step 5: Print Matrix C
    printf("\nSum of Matrices (Matrix C):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n"); // Adutha row new line-il kaanikkaan
    }

    return 0;
}