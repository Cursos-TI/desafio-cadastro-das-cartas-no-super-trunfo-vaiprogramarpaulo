#include <stdio.h>

// A ideia é criar uma simulação de um jogo entre 2 jogadores, onde cada jogador terá uma carta representando diferentes cidades com diferentes atributos.
// Esse codigo baseia-se no nivel novato do desafio.

int main() {

    char resposta; 

    // Jogador 1
    char nomeEstado1[3]; //Sigla do Estado (2 letras + '\0')
    char codigoCarta1[4]; //Codigo da Carta (3 numeros + '\0')                  
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    float densidadepopulacional1 = populacao1 / area1; //Densidade Populacional = Populacao / Area
    float pibpercapita1 = pib1 / populacao1; //PIB per capita = PIB / Populacao

    // Jogador 2
     char nomeEstado2[3]; //Sigla do Estado (2 letras + '\0')
    char codigodacarta2[4]; //Codigo da Carta (3 numeros + '\0')                  
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    float densidadepopulacional2 = populacao2 / area2; //Densidade Populacional = Populacao / Area
    float pibpercapita2 = pib2 / populacao2; //PIB per capita = PIB / Populacao
    
// Por motivos de erros e mais erros, optei por definir duas versoes diferentes de variaveis para cada jogador e foi dessa forma que consegui fazer o programa funcionar. :)

    // = Jogador 1 =
    printf("= Seja bem-vindo ao Super Trunfo Paises! = \n\n");

    printf("Para iniciar, vamos criar a sua carta! \n\n");
    printf("- Voce selecionou o Jogador 1. \n");

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
    printf("Codigo da Carta: 101\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Estado: %s\n", siglaEstado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n\nGostaria de avancar? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 'n') {
        printf("O jogo foi encerrado. Ate a proxima! \n");
        return 0;
    } else {resposta == 's') {
        printf("Vamos la! \n");
    }

    // = Jogador 2 =
    printf("\nAgora e a vez do Jogador 2! \n\n");
    printf("\n- Voce selecionou o Jogador 2. \n");
    printf("O codigo da sua carta e 202!\n\n"); //Esse codigo sera ficticio, pois nao sera utilizado no jogo.
    
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglaEstado2);

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
    printf("Codigo da Carta: 202\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Estado: %s\n", siglaEstado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    
    printf("\n\nAgora vamos aos resultados! \n\n");

    if(pib1 > pib2) {
        printf("O Jogador 1 venceu! \n");
    } else if (pib2 > pib1) {
        printf("O Jogador 2 venceu! \n");
    } else 
    }
    }

    return 0;
}
