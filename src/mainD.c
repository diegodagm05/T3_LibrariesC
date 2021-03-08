#include <stdio.h>
#include "../lib/src/distancias.h" // debes poner el path hacia donde se encuentran tus librerías...
int main(int argc, char *argv[]) {

    float directa;
    int dhoriz, dvert;

    directa = dlr( 3, 4, 10, 12 );
    printf("Distancia en línea recta: %d\n", directa);
    dhoriz = dh( 3, 4, 10, 12 );
    dvert = dv( 3, 4, 10, 12 );
    printf("Distancia horizontal: %d\n", dhoriz);
    printf("Distancia vertical: %d\n", dvert);
    
    return 0;
}