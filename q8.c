#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b,c,d;
   int produto;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   produto = (a*b)-(c*d);
   printf("A diferenca dos produtos sao: %d", produto);

    return 0;
}