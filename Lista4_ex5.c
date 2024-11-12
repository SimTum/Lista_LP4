#include <stdio.h>

float smallest_number(float *mat[5][4])
{
    float min = *mat[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*mat[i][j] < min)
                min = *mat[i][j];
        }
    }
    return min;
}
float max_3c(float *mat[5][4])
{
    float max3 = *mat[0][3];
    for (int i = 0; i < 5; i++)
    {
        if (*mat[i][3] > max3)
            max3 = *mat[i][3];
    }
    return max3;
}

float av_counter(float grades[4])
{
    float av = 0;
    for (int j = 0; j < 4; j++)
    {
        av += grades[j];
    }
    return av / 4;
}

int main()
{
    char names[5][20];
    float grades[5][4];
    for (int i = 0; i < 5; i++)
    {
        printf("digite o nome de aluno\n");
        scanf("%s", &names[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("digite a nota de aluno [%d][%d]\n", i, j);
            scanf("%f", &grades[i][j]);
        }
    }
    printf("O relatorio das notas de alunos:\n");
    printf("Nome                Nota 1   Nota 2   Nota 3   Nota 4   Media \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%*s          ", 10, names[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%*.2f   ", 6, grades[i][j]);
        }
        printf("%*.2f\n", 6, av_counter(grades[i]));
    }
    float min = smallest_number(&grades[5][4]);
    printf("\n\n a menor nota da turma foi %.2f\n", min);
    float max3 = max_3c(&grades[5][4]);
    printf("\n\n a menor nota da materia 3 foi %.2f\n", max3);
    return 0;
}