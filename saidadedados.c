#include <stdio.h>

int main(){

    int idade = 23;
    float altura = 1.71;
    char opcao = 'p';
    char nome[20] = "Pedro";

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Seu nome é: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Escolha sua opção: ");
    scanf(" %c", &opcao);
    printf("Sua opcao é: %c", opcao);
}