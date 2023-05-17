
int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("O número é divisível por 5\n");
    } else {
        printf("O número não é divisível por 5\n");
    }

    return 0;
}