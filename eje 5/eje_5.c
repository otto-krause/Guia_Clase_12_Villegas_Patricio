#include <stdlib.h>
#include <stdio.h>
int restotal();

int main()
{
int rt;
    rt = restotal(rt);
    printf("El valor de total de la resistencia es: %d\n", rt);
    return 0;
}

int restotal(int rt)
{
    int r1, r2, r3, r4, r5;
    printf("Ingrese el valor de las cinco resistencias: \n");
    scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5 );
    rt=r1+r2+r3+r4+r5;
    return rt;
}
