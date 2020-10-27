#include <stdlib.h>
#include <stdio.h>

int mayor();

int main()
{
int num, num1;
    printf("Ingrese dos numeros:\n");
    scanf("%d\n %d", &num, &num1);
    system ("cls");
    if (num == num1)
        {
        printf("Los numeros son iguales");
        }
    else
        {
        printf("el numero mayor es %d", mayor(num, num1));
        }
    return 0;
}

int mayor(int num, int num1)
{
int numM;
    if (num>num1)
        {
        numM=num;
        }
    else
        {
        numM=num1;
        }
    return numM;
}
