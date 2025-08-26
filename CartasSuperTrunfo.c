#include <stdio.h>

// A ideia é criar uma simulação de um jogo entre 2 jogadores, onde cada jogador terá uma carta representando diferentes cidades com diferentes atributos.
// Esse codigo baseia-se no nivel novato do desafio.

int main() {

    char resposta; 

    // Jogador 1
    char siglaEstado1[3]; //Sigla do Estado (2 letras + '\0')
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    char nomeCidade1[50];

    // Jogador 2
    char siglaEstado2[3]; //Sigla do Estado (2 letras + '\0')
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    char nomeCidade2[50];
    
// Por motivos de erros e mais erros, optei por definir duas versoes diferentes de variaveis para cada jogador e foi dessa forma que consegui fazer o programa funcionar. :)

    // = Jogador 1 =
    printf("Seja bem-vindo ao Super Trunfo Paises! \n\n");

    printf("Para iniciarmos, vamos criar a sua carta! \n\n");
    printf("- Voce selecionou o Jogador 1. \n");
    printf("- Voce selecionou o Estado FORTALEZA.\n");
    printf("O codigo da sua carta sera 101!\n\n"); //Esse codigo sera ficticio, pois nao sera utilizado no jogo.
    
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglaEstado1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao da sua cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &pontosturisticos1);

    printf("\nMuito bem Jogador 1, esta e a sua carta:\n");
    printf("Codigo da Carta: 101 - Nome da Cidade: %s - Estado: %s\n", nomeCidade1, siglaEstado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n\nGostaria de avancar? (s/n): ");
    scanf(" %c", &resposta);

    // = Jogador 2 =
    printf("\nAgora e a vez do Jogador 2! \n");

    printf("- Voce selecionou o Jogador 2. \n");
    printf("- Voce selecionou o Estado SERGIPE.\n");
    printf("O codigo da sua carta sera 202!\n\n"); //Esse codigo sera ficticio, pois nao sera utilizado no jogo.
    
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglaEstado2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao da sua cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &pontosturisticos2);

    printf("\nMuito bem Jogador 2, esta e a sua carta:\n");
    printf("Codigo da Carta: 202 - Nome da Cidade: %s - Estado: %s\n", nomeCidade2, siglaEstado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    
    printf("\n\nEsse foi o jogo. Muito obrigado por jogar! :) \n");

    return 0;
}
