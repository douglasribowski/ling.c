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
        default:
        printf("opção inválida");
    }
}
