#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao_1, populacao_2, numero_pontos_turisticos_1, numero_pontos_turisticos_2;
  float area_1, area_2, pib_1, pib_2;
  char estado_1, estado_2;
  char codigo_1[3], codigo_2[3], nome_cidade_1[20], nome_cidade_2[20];

  // Área para entrada de dados
  printf("Digite a população da primeira carta:\n");
  scanf("%d", &populacao_1);

  printf("Digite a área da primeira carta:\n");
  scanf("%f", &area_1);

  printf("Digite o pib da primeira carta:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da primeira carta:\n");
  scanf("%d", &numero_pontos_turisticos_1);

  printf("Digite a população da segunda carta:\n");
  scanf("%d", &populacao_1);

  printf("Digite a área da segunda carta:\n");
  scanf("%f", &area_1);

  printf("Digite o pib da segunda carta:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da segunda carta:\n");
  scanf("%d", &numero_pontos_turisticos_1);

  // Área para exibição dos dados da cidade
  printf("CARTA 1\n");
  printf("População: %d \n", populacao_2);
  printf("Área: %f \n", area_2);
  printf("PIB: %f \n", pib_2);
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_2);

  printf("CARTA 2\n");
  printf("População: %d \n", populacao_2);
  printf("Área: %f \n", area_2);
  printf("PIB: %f \n", pib_2);
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_2);

return 0;
} 
