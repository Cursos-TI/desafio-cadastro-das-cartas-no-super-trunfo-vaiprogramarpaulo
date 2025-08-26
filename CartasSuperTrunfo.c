#include <stdio.h>

// A ideia é criar uma simulação de um jogo entre 2 jogadores, onde cada jogador terá uma carta representando diferentes cidades com diferentes atributos.
// Esse codigo baseia-se no nivel novato do desafio.

int main() {

    char resposta; 

    // Jogador 1
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    char nomeCidade1[50];

    // Jogador 2
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
    printf("O codigo da sua carta sera F01!\n\n"); //Esse codigo sera ficticio, pois nao sera utilizado no jogo.
    
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
    printf("Codigo da Carta: F01 - Nome da Cidade: %s\n", nomeCidade1);
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
    printf("O codigo da sua carta sera S02!\n\n"); //Esse codigo sera ficticio, pois nao sera utilizado no jogo.
    
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
    printf("Codigo da Carta: S02 - Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    
    printf("\nEsse foi o jogo. Muito obrigado por jogarem! \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
