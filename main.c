#include <stdio.h>

int main() {
    int num1, num2, num3, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    if (soma > 10) {
        printf("A soma dos números é %d\n", soma);
    }

    return 0;
}