#include <stdio.h>

int main(){
    int num = 3, *pnum;
    pnum = &num;
    printf("Hola mundo\n");
    printf("Contenido del puntero: %p\n", pnum);
    printf("Direccion de memoria almacenada por el puntero: %p", pnum);
    printf("\nDireccion de memoria de la variable: %p", &num);
    printf("\nDireccion de memoria del puntero: %p", &pnum);
    printf("\nTamanio de la memoria utilizada por la variable: %d", sizeof(num));
    return 0;
}