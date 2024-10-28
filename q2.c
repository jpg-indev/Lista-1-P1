#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Seja muito bem-vindo: %s", nome);

    return 0;
}