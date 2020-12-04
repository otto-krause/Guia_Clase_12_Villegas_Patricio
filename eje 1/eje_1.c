#include <stdlib.h>
#include <stdio.h>
int numero1(int a);//Declaración y definición deben ser iguales...
int numero2(int b);
int main()
{
    int a=0, b=0;
    a = numero1(a);
    b = numero2(b);
    printf("Ingreso los numero:\n");
    printf("%d \n%d\n", a, b);
    return 0;
}

int  numero1(int a)
{
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    system ("cls");
    return a;
}

int numero2(int b)
{
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    system ("cls");
    return b;
}
