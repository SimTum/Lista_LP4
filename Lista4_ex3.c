#include <stdio.h>

char grade_translator(float grade)
{
    if(grade > 9) return 'A';
    if(grade > 7) return 'B';
    if(grade > 5) return 'C';
    if(grade > 3) return 'D';
    else return 'E';
}

int main()
{
    float grade;
    printf("Digite a nota do estudante (de 1 a 10):\n");
    scanf("%f", &grade);
    printf("\nA nota de estudante traduzida pelo padrao de EUA e %c\n", grade_translator(grade));
    return 0;
}