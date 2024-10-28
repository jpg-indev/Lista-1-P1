#include <stdio.h>
#include <stdlib.h>
int main()
{
    float faren, celsius;
    printf("Digite uma medida em farenheight: ");
    scanf("%f", &faren);
    celsius = (faren - 32)*5/9;
    printf("Ela convertida para celsius e: %.2f", celsius);

    return 0;
}