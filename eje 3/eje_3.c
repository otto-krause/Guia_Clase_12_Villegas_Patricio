#include <stdlib.h>
#include <stdio.h>
int porce();
//Idem ejercicio anterior.
int main()
{
int h, m, porh=0;

    printf("Ingrese la cantidad de hombre: ");
    scanf("%d", &h);
    printf("Ingrese la cantidad de mujeres: ");
    scanf("%d", &m);
    porh = porce(h, m, porh);
    printf("El porcentaje de hombres es %d%c y el porcentaje de mujeres es %d%c\n", porh, 37 , 100-porh, 37 );
    return 0;
}

int porce(int h, int m, int porh)
{
        porh=h*100/(h+m);
        return porh;
}
