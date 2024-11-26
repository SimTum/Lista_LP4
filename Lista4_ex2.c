// 2.c
#include <stdio.h>

int min(int *matrix, int rows, int columns) {
    int min = matrix[0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i * columns + j] < min) {
                min = matrix[i * columns + j];
            }
        }
    }

    return min;
}

int threesum(int *matrix, int rows, int columns) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i * columns + j] % 3 == 0) {
                sum += matrix[i * columns + j];
            }
        }
    }

    return sum;
}

int maxThirdRow(int *matrix, int rows, int columns) {
    int max = matrix[0];

    for (int j = 0; j < columns; j++) {
        if (matrix[2 * columns + j] > max) {
            max = matrix[2 * columns + j];
        }
    }

    return max;
}

int main() {
    int data[3][5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%d][%d] Digite um numero: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    printf("Menor numero na matriz: %d\n", min(&data[0][0], 3, 5));
    printf("Soma dos numeros multiplos de tres na matriz: %d\n", threesum(&data[0][0], 3, 5));
    printf("Maior numero da terceira coluna da matriz: %d\n", maxThirdRow(&data[0][0], 3, 5));

    return 0;
}