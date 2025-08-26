#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2; //operacao soma
    subtracao = numero1 - numero2; //operacao subtracao
    multiplicacao = numero1 * numero2; //operacao multiplicacao
    divisao = numero1 / numero2; //operacao divisao

    printf("A Soma e: %d\n", soma);
    printf("A Subtracao e: %d\n", subtracao);
    printf("A Multiplicacao e: %d\n", multiplicacao);   
    printf("A Divisao e: %d\n", divisao);

    return 0;
}