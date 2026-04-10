# include <stdio.h>

int main(){

    printf("Hola mundo\n");

    int numero = 100;
    int *p_numero = &numero;

    printf("1) Contenido del puntero: %d\n", *p_numero);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", (void*)p_numero);
    printf("3) Direccion de memoria de la variable: %p\n", (void*)&numero);
    printf("4) Direccion de memoria del puntero: %p\n", (void*)&p_numero);
    printf("5) Tamanio de memoria de la variable: %zu bytes\n", sizeof(numero));

    return 0;
}