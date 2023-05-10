#include <stdio.h>
int main(){
    char letra;
    printf("digite uma letra:");
    scanf ("%s",&letra);
    switch(letra){
        case 'a':
        printf("domingo");
        break;
        case 'b':
        printf("segunda");
        break;
        case 'c':
        printf("terça");
        break;
        case 'd':
        printf("quarta");
        break;
        case'e':
        printf("quinta");
        break;
        case'f':
        printf("sexta");
        break;
        case 'g':
        printf("sabado");
        break;
        default:
        printf("opção inválida");
    }
}
