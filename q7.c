#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valor;
    int n50,n20,n10,n5,n1;
    printf("Digite um valor para ser sacado: ");
    scanf("%d", &valor);
    n50 = valor/50;
    valor = valor%50;

    n20 = valor/20;
    valor= valor%20;

    n10 = valor/10;
    valor = valor%10;

    n5 = valor/5;
    valor= valor%5;


    n1= valor;

    printf("Distribuicao de notas:\n");
    printf("R$50: %d\n", n50);
    printf("R$20: %d\n", n20);
    printf("R$10: %d\n", n10);
    printf("R$5:  %d\n", n5);
    printf("R$1:  %d\n", n1);


    return 0;
}