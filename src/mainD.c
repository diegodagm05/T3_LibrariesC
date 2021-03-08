#include <stdio.h>
#include "../lib/src/distancias.h" // debes poner el path hacia donde se encuentran tus librerías...
int main(int argc, char *argv[]) {

    float directa;
    int dhoriz, dvert, x, y;

    directa = dlr( 3, 4, 10, 12 );
    printf("Distancia en línea recta: %f\n", directa);
    dhoriz = dh( 3, 4, 10, 12 );
    dvert = dv( 3, 4, 10, 12 );
    printf("Distancia horizontal: %d\n", dhoriz);
    printf("Distancia vertical: %d\n", dvert);
    x= xpm(3,4, 10,12);
    y= ypm(3,4, 10,12);
    printf("Punto medio: (%d, %d)\n", x,y);

    return 0;
}