#include <stdio.h>

int cuadrado(int num);
void cuadradonum(int *num);
void mostrarDir(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int num, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    printf("Numero a: %d", num);
    printf("\nNumero b: %d", num2);
    orden(&num, &num2);
    printf("\nNumero a: %d", num);
    printf("\nNumero b: %d", num2);
    return 0;
}

int cuadrado(int num){
    return num*num;
}

void cuadradonum(int *num){
    *num = *num * *num;
}

void mostrarDir(int num){
    printf("Direccion de memoria de la variable: %p", &num);
    printf("\nContenido de la variable: %p", num);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    if (*a>*b)
    {
        invertir(a, b);
    }
}