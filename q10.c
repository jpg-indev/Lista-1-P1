#include <stdio.h>
#include <stdlib.h>
int main(){
    double ap,lp,aa,la;
    double parede,azulejo, qtd;
    printf("Digite a altura da parede e largura: ");
    scanf("%lf %lf",&ap,&lp);
    printf("Digite a altura e largura do azulejo: ");
    scanf("%lf %lf",&aa,&la);
    parede = ap*lp;
    azulejo = aa*la;
    qtd = parede/azulejo;

    printf("a quantidade de azulejo sera: %.2lf pecas", qtd);

    return 0;
}