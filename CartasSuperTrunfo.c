#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char nomeCidade1[30], nomeCidade2[30];
  int numCidade1, numCidade2;
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontoTur1, pontoTur2;
  float densPop1, densPop2;
  float pibCap1, pibCap2;
  float superPoder1, superPoder2;

  // Área para entrada de dados
  printf("Carta 1: digite a letra do Estado (de A a H): ");
  scanf(" %c", &estado1);
  printf("Carta 1: digite o número da cidade (de 1 a 4): ");
  scanf("%d", &numCidade1);
  printf("Carta 1: digite o nome da cidade: ");
  scanf(" %[^\n]", nomeCidade1);
  printf("Carta 1: digite o número de habitantes: ");
  scanf("%lu", &populacao1);
  printf("Carta 1: Digite a área da cidade em km²: ");
  scanf("%f", &area1);
  printf("Carta 1: digite o PIB da cidade: ");
  scanf("%f", &pib1);
  printf("Carta 1: digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontoTur1);

  printf("\n");

  printf("Carta 2: digite a letra do Estado (de A a H): ");
  scanf(" %c", &estado2);
  printf("Carta 2: digite o número da cidade (de 01 a 04): ");
  scanf("%d", &numCidade2);
  printf("Carta 2: digite o nome da cidade: ");
  scanf(" %[^\n]", nomeCidade2);
  printf("Carta 2: digite o número de habitantes: ");
  scanf("%lu", &populacao2);
  printf("Carta 2: Digite a área da cidade em km²: ");
  scanf("%f", &area2);
  printf("Carta 2: digite o PIB da cidade: ");
  scanf("%f", &pib2);
  printf("Carta 2: digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontoTur2);
  

  //Área dos cálculos de densidade e PIB
  densPop1 = populacao1 / area1;
  densPop2 = populacao2 / area2;
  pibCap1 =  pib1 * 1000000000 / populacao1;
  pibCap2 =  pib2 * 1000000000 / populacao2;

  //Área dos cálculos do super poder
  superPoder1 = (pib1 * 1000000000) + populacao1 + area1 + pontoTur1 + pibCap1 - densPop1;
  superPoder2 = (pib2 * 1000000000) + populacao2 + area2 + pontoTur2 + pibCap2 - densPop2;

  //Área para exibição dos dados das cidades

  printf("\n");
  
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c0%d\n", estado1, numCidade1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontoTur1);
  printf("Densidade Populacional: %.2f hab/km²\n", densPop1);
  printf("PIB per Capita: %.2f reais\n", pibCap1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c0%d\n", estado2, numCidade2);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontoTur2);
  printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
  printf("PIB per Capita: %.2f reais\n", pibCap2);
  printf("\n");

  //Área de infomrações de comparação das cartas
  
  printf("Comparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTur1 > pontoTur2);
  printf("Densidade Populacional: Carta 2 venceu (%d)\n", densPop1 < densPop2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCap1 > pibCap2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


return 0;
}
