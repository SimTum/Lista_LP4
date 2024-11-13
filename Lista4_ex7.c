#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int char_counter(char input[200], char search)
{
    int counter = 0;
    toupper(search);
    for (int i = 0; input[i] != 0 ; i++)
    {
        toupper(input[i]);
        if (input[i] == search)
            counter++;
    }
    return counter;
}

int main()
{
    char input[200], search;
    printf("Digite um frase: \n");
    fgets(input, 200, stdin);
    fflush(stdin);
    printf("Digite um caracter: \n");
    scanf("%c", &search);
    printf("A caracter %c foi encontrado no frase %d vezes. \n", search, char_counter(input, search));
    return 0;
}
