// 6.c

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* sieve(int max) {
    max += 1;
    int* data = malloc(sizeof(int) * max);

    data[0] = 0;
    data[1] = 0;

    for (int i = 2; i < max; i++) data[i] = 1;

    for (int i = 2; i < max; i++) {
        if (data[i]) {
            for (int j = i * i; j < max; j += i) {
                data[j] = 0;
            }
        }
    }

    return data;
}

int main() {
    int data[10];
    int max = INT_MIN;

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &data[i]);

        if (data[i] > max) max = data[i];
    }

    int *primes = sieve(max);

    for (int i = 0; i < 10; i++) {
        printf("primo(%d) -> %c\n", data[i], primes[data[i]] ? 'S' : 'N');
    }

    return 0;
}
