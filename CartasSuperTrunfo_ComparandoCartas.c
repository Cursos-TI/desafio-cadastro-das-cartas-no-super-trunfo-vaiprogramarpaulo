#include <stdio.h>

// A ideia é criar uma simulação de um jogo entre 2 jogadores, onde cada jogador terá uma carta representando diferentes cidades com diferentes atributos.
// Esse codigo baseia-se no nivel novato do desafio.

int main() {

    char resposta; 

    // Variaveis Jogador 1
    char nomeEstado1[50], nomeCidade1[50]; //Nome do Estado e da Cidade
    char codigoCarta1[4]; //Codigo da Carta (3 numeros + '\0')                  
    int populacao1, pontosturisticos1;
   float area1, pib1, densidadepopulacional1, pibpercapita1;

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1; 

    // Variaveis Jogador 2
    char nomeEstado2[50], nomeCidade2[50]; //Nome do Estado e da Cidade
    char codigoCarta2[4]; //Codigo da Carta (3 numeros + '\0')                  
    int populacao2, pontosturisticos2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;

    densidadepopulacional2 = populacao2 / area2; 
    pibpercapita2 = pib2 / populacao2; 
    
// Definidas as variaveis, vamos iniciar o código do jogo:

    printf("= Seja bem-vindo ao Super Trunfo Paises! = \n\n");
    
    printf("Para iniciar, vamos criar a sua carta! \n\n");
    printf("- Voce selecionou o Jogador 1. \n"); // Criacao da carta do Jogador 1

    printf("Digite o código da sua carta (3 numeros): ");
    scanf("%i", &codigoCarta1);
    
    printf("Digite o nome do Estado (sem espacos): ");
    scanf("%s", nomeEstado1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao da sua cidade (mil): ");
    scanf("%d", &populacao1);

    printf("Digite a area da sua cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &pontosturisticos1);

    //Carta do Jogador 1
    printf("\n > Muito bem Jogador 1, esta e a sua carta:\n");
    printf("Codigo da Carta: %i\n", codigoCarta1);
    printf("Nome do Estado: %s\n", nomeEstado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d mil habitantes\n", populacao1);
    printf("Area: %.2f\n km²", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("\nDensidade Populacional: %d\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    printf("\n\nGostaria de avancar? (s/n): ");
    scanf(" %c", &resposta);
        if(resposta == 'n') {
        printf("O jogo foi encerrado. Ate a proxima! \n");
        return 0;
        } else {
        printf("Vamos la! \n");
    }

    printf("\nAgora e a vez do Jogador 2! \n\n");
    printf("\n- Voce selecionou o Jogador 2. \n"); // Criacao da carta do Jogador 2

    printf("Digite o código da sua carta (3 numeros): ");
    scanf("%i", &codigoCarta2);
    
    printf("Digite o nome do Estado (sem espacos): ");
    scanf("%s", nomeEstado2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao da sua cidade (mil): ");
    scanf("%d", &populacao2);

    printf("Digite a area da sua cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &pontosturisticos2);

    //Carta do Jogador 2
    printf("\n > Muito bem Jogador 2, esta e a sua carta:\n");
    printf("Codigo da Carta: %i\n", codigoCarta2);
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d mil habitantes\n", populacao2);
    printf("Area: %.2f\n km²", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("\nDensidade Populacional: %d\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    
    printf("\n\nAgora vamos aos resultados! \n\n");

    if(pib1 > pib2) {
        printf("O Jogador 1 venceu! \n");
    } else if (pib2 > pib1) {
        printf("O Jogador 2 venceu! \n");
    } else 
    

    return 0;
}
