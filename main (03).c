#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("É múltiplo de 3\n");
    } else {
        printf("Não é múltiplo de 3\n");
    }

    return 0;
}