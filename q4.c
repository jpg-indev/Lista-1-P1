#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,nv;
    printf("Digite um numero de dois algarismos para inverter: ");
    scanf("%d", &n1);
    nv= (n1%10) * 10 + (n1/10);
    printf("O numero invertido e: %d", nv);

    return 0;
}
