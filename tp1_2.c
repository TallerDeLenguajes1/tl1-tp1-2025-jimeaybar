#include <stdio.h>

int calcular_cuadrado(int n) {
    return n * n;
}

void calcularCuadrado(int *n) {
    
    *n = (*n) * (*n);
}

void mostrar(int *n) {
    printf("Direccion de memoria: %p\n", (void*)n);
    printf("Contenido de la variable: %d\n", *n);
}
void Invertir(int *a, int *b) {
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}
void orden(int *a, int *b) {
    int auxiliar;
    if (*a > *b) {
        Invertir(a,b);
    }
}

int main(){
    int n, cuadrado, numero;
    n= 3;
    numero = 5;
    cuadrado= calcular_cuadrado(n);
    calcularCuadrado(&numero);

    printf("El cuadrado de 3 es: %d \n", cuadrado);
    printf("El cuadrado de 5 es: %d\n", numero);


    int num;
    fflush(stdin);
    printf("Escriba un numero\n");
    scanf("%d",&num);
    mostrar(&num);

    int a, b;
    printf("Ingrese el primer numero: \n");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &b);
    Invertir(&a,&b);
    printf("Los numeros invertidos son:\n a=%d\n b=%d\n", a, b);

    int c, d;
    printf("Ingrese el primer numero: \n");
    scanf("%d", &c);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &d);
    orden(&c,&d);
    printf("Los numeros en orden son: %d  %d \n", c,d);

    int n1, n2;
    printf("Ingrese primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &n2);

    orden(&n1, &n2);
    printf("Resultado ordenado: %d y %d\n", n1, n2);

    return 0;
}