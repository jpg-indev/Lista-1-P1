#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,ant,suc;
    printf("Digite um numero para obter seu antecessor e seu sucessor:");
    scanf("%d", &n1);
    ant = n1-1;
    suc = n1+1;

    printf("Seu antecessor e:%d \nSeu sucessor e:%d \n", ant,suc);
    return 0;

}