#include <stdio.h>
#include <stdlib.h>
int main()
{
    float massa, altura, imc;
    scanf("%f %f", &massa, &altura);
    imc= massa/(altura * altura);
    printf("%f\n", imc);
    return 0;
}
