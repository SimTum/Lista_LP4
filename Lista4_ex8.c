// 8.c

#include <stdio.h>

int min(int *arr, int size) {
    int result = arr[0]; // Assume que a array possui pelo menos um elemento

    for (int i = 1; i < size; i++) {
        if (arr[i] < result) result = arr[i];
    }

    return result;
}

int evenSum(int *arr, int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > 10) result += arr[i];
    }

    return result;
}

int odds(int *arr, int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) result += 1;
    }

    return result;
}

float average(int *arr, int size) {
    float result = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 20) {
            result += arr[i];
            count += 1;
        }
    }

    if (count > 0) result /= count;

    return result;
}



int main() {
    int data[10];

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &data[i]);
    }

    printf("Menor numero: %d\n", min(data, 10));
    printf("Soma dos pares maiores que dez: %d\n", evenSum(data, 10));
    printf("Quantidade de numeros impares: %d\n", odds(data, 10));
    printf("Media dos numeros maiores que 20: %.2f\n", average(data, 10));

    return 0;
}
