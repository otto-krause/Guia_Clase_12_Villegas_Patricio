#include <stdlib.h>
#include <stdio.h>
int parte();

int main()
{
int num;
float p=0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    p = parte(num, p);
    printf("La 8va parte de %d es %.1f", num, p);
    return 0;
}

int parte(int num, int p)
{
    p=num/8;
    return p;
}
