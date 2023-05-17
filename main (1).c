#include <stdio.h>

int main() {
    int num1, num2,soma,resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 20) {
        resultado =soma+ 8;
          printf("O resultado é: %d\n", resultado);
    } else {
        resultado = soma -5;
          printf("O resultado é: %d\n", soma);
    }

    

    return 0;
}
