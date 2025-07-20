#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // system("chcp 65001"); //UTF-8 no windows
    char estado[3];
    char cod_carta[5];
    char nome_cidade[100];
    int populacao_cidade;
    float area_cidade;
    float pib_cidade;
    int pontos_turisticos_cidade;
    float densidade_populacional;
    float pib_per_capita;

    printf("Inserir dados da primeira carta.\n\n");
    
    printf("Insira o Estado (Uma letra de A a H - representando 8 estados):\n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0'; //retira o \n e substitui por \0

    printf("Insira Código da Carta (A letra do estado escolhido seguido de 01 a 04, ex: A01):\n");
    fgets(cod_carta, sizeof(cod_carta), stdin);
    cod_carta[strcspn(cod_carta, "\n")] = '\0';

    printf("Insira o nome da cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';
    
    printf("Inserir o número de habitantes da cidade:\n");
    scanf("%d", &populacao_cidade);
    
    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib_cidade);
    
    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area_cidade);
    
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_cidade);

    densidade_populacional = (float) populacao_cidade / area_cidade;
    pib_per_capita = (float) pib_cidade / populacao_cidade;
    
    printf("\nCarta 1:");
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", cod_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao_cidade);
    printf("\nÁrea: %.2f km²", area_cidade);
    printf("\nPIB: %.2f bilhões de reais", pib_cidade);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos_cidade);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf("\nPIB per Capita: %f reais", pib_per_capita);
    
    printf("\n\nInserir dados da segunda carta.\n");
    
    getchar(); //limpar caraceteres do buffer

    printf("Insira o Estado (Uma letra de A a H - representando 8 estados):\n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Insira Código da Carta (A letra do estado escolhido seguido de 01 a 04, ex: A01):\n");
    fgets(cod_carta, sizeof(cod_carta), stdin);
    cod_carta[strcspn(cod_carta, "\n")] = '\0';

    printf("Insira o nome da cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';
    
    printf("Inserir o número de habitantes da cidade:\n");
    scanf("%d", &populacao_cidade);
    
    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib_cidade);
    
    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area_cidade);
    
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_cidade);

    densidade_populacional = (float) populacao_cidade / area_cidade;
    pib_per_capita = (float) pib_cidade / populacao_cidade;
    
    printf("\nCarta 2:");
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", cod_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao_cidade);
    printf("\nÁrea: %.2f km²", area_cidade);
    printf("\nPIB: %.2f bilhões de reais", pib_cidade);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos_cidade);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf("\nPIB per Capita: %f reais\n", pib_per_capita);
   
   // system("pause");
   return 0;
}
