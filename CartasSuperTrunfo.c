#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Observação: o código foi elaborado para usar apenas scanf e printf, atendendo ao que foi descrito no GitHub.
  //Para adequação ao que está no material do curso, é necessário usar fgets e alterar o código para digitar nomes de cidades.

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  int numCidade1, numCidade2;
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontoTur1, pontoTur2;

  // Área para entrada de dados
  printf("Carta 1: digite a letra do Estado (de A a H): ");
  scanf("%c", &estado1);
  printf("Carta 1: digite o número da cidade (de 1 a 4): ");
  scanf("%d", &numCidade1);
  printf("Carta 1: digite o número de habitantes: ");
  scanf("%d", &populacao1);
  printf("Carta 1: Digite a área da cidade em km²: ");
  scanf("%f", &area1);
  printf("Carta 1: digite o PIB da cidade: ");
  scanf("%f", &pib1);
  printf("Carta 1: digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontoTur1);

  printf("\n");

  printf("Carta 2: digite a letra do Estado (de A a H): ");
  scanf(" %c", &estado2);
  printf("Carta 2: digite o número da cidade (de 1 a 4): ");
  scanf("%d", &numCidade2);
  printf("Carta 2: digite o número de habitantes: ");
  scanf("%d", &populacao2);
  printf("Carta 2: Digite a área da cidade em km²: ");
  scanf("%f", &area2);
  printf("Carta 2: digite o PIB da cidade: ");
  scanf("%f", &pib2);
  printf("Carta 2: digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontoTur2);
  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c0%d\n", estado1, numCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pontoTur1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c0%d\n", estado2, numCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontoTur2);

  printf("\n");

return 0;
}
