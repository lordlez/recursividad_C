#include <stdio.h>

int factorial(int numero);

int main(){
    int numero, i, resultado;
    printf("Ingresa un numero para sacar el factorial: ");
    scanf("%d", &numero);
    resultado = factorial(numero);
    printf("%d", resultado);
    return 0;
}

int factorial(int numero){
    if(numero <= 1){
        return 1;
    }else{
        return numero * factorial(numero-1);
    }
}
