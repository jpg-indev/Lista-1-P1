#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,nv4;
    scanf("%d", &n1);
    nv4= (n1 % 10) * 1000 + ((n1 / 10) % 10) * 100 + ((n1 / 100) % 10) * 10 + (n1 / 1000);
    printf("%d", nv4);

    return 0;
}