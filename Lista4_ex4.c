// 4.c

#include <stdio.h>

double foo(int *data, char type) {
    if (type == 'A') {
        double sum = 0;
        
        for (int i = 0; i < 3; i++) {
            sum += data[i];
        }
        return sum / 3.0;
    }

    return data[0] * .5 + data[1] * .3 + data[2] * .2;
}

int main() {
    int data[3];
    char type;

    for (int i = 0; i < 3; i++) {
        printf("Digite um numero: ");
        scanf("%d", &data[i]);
    }
    
    getchar();
    while (1) {
        printf("Digite o tipo de media (A ou P): ");
        scanf("%c", &type);
        
        if (type == 'A' || type == 'P') break;
        
        printf("Valor invalido. Tente novamente.\n");
    }
    
    printf("Media calculada: %.2f\n", foo(&data[0], type));
    return 0;
} 
