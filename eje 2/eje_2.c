#include <stdlib.h>
#include <stdio.h>
int peri();
int area();
//Idem ejercicio anterior.
int main()
{
int a, b, P, A;
    printf("ingrese la altura y la base: ");
    scanf("%d \n%d", &a, &b);
    system ("cls");
    P = peri(a, b, P);
    A = area(a, b, A);
    printf("EL perimetro es igual a %d y el area es igual a %d.", P, A);
    return 0;
}

int peri(int a, int b, int P)
{
    P= 2*a+2*b;
    return P;
}

int area(int a, int b, int A)
{
    A = a*b;
    return A;
}
