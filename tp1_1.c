#include <stdio.h>

int main(){
    int num = 3, *pnum;
    pnum = &num;
    printf("Hola mundo\n");
    printf("Contenido del puntero: %d\n", *pnum);
    printf("Direccion de memoria almacenada por el puntero: %d", pnum);
    printf("\nDireccion de memoria de la variable: %d", &num);
    printf("\nDireccion de memoria del puntero: %d", &pnum);
    printf("\nTamanio de la memoria utilizada por la variable: %d", sizeof(num));
    return 0;
}