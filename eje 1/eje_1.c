#include <stdlib.h>
#include <stdio.h>
int numero1();
int numero2();
int main()
{
    int a=0, b=0;
    a = numero1(a);
    b = numero2(b);
    printf("Ingreso los numero:\n");
    printf("%d \n%d\n", a, b);
    return 0;
}

int  numero1(a)
{
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    system ("cls");
    return a;
}

int numero2(b)
{
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    system ("cls");
    return b;
}
