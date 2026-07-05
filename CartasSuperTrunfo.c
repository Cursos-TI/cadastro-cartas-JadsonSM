#include <stdio.h>

// Desafio Super Trunfo - Estados do Brasil
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   char estado01[10], estado02[10]; //Estados de escolha dos usuários
   char codcart1[4], codcart2[4]; //Códigos das cartas  
   char cidade1[20], cidade2[20]; //nomes das cidades
   int popula1, popula2; //Populações das cidades
   float area1, area2; //Áreas das cidades
   float Pib1, Pib2; //PIB das cidades
   int Ptur1, Ptur2; //Pontos turísticos das cidades
 
   // Área para entrada de dados
 printf("Bem-vindo ao jogo Super Trunfo Brasil!\n"); //pequena introdução do jogo
     printf("Insira uma letra para cada País entre A e H\n");
        printf("Digite a letra da primeira País ");
             scanf("%s", estado01);
        printf("Digite a letra da segunda letra par o País: ");
             scanf("%s", estado02);
        printf("Digite o código da primeira carta, inserindo a letra escolhida e um número de 1 a 4 (exemplo: A1, B2, C3, D4): ");
             scanf("%s", codcart1);
        printf("Digite o código da segunda carta, inserindo a letra escolhida e um número de 1 a 4 (exemplo: A1, B2, C3, D4): ");
             scanf("%s", codcart2);
        printf("Digite o nome do Primeiro País: ");
             scanf("%s", cidade1);
        printf("Digite o nome do segundo País: ");
             scanf("%s", cidade2);
        printf("Digite a população do Primeiro País: ");
             scanf("%d", &popula1);
        printf("Digite a população do Segundo País: ");
             scanf("%d", &popula2);
        printf("Digite a área do Primeiro País: ");
             scanf("%f", &area1);
        printf("Digite a área do Segundo País: ");
             scanf("%f", &area2);
        printf("Digite o PIB do Primeiro País: ");
             scanf("%f", &Pib1);
        printf("Digite o PIB do Segundo País: ");
             scanf("%f", &Pib2);
        printf("Digite o número de pontos turísticos do Primeiro País: ");
             scanf("%d", &Ptur1);
        printf("Digite o número de pontos turísticos do Segundo País: ");
             scanf("%d", &Ptur2);

  // Área para exibição dos dados da cidade
 printf("Essas são as informações de suas cartas\n");
        printf("Carta 1:\n");
        printf("País: %s\n", estado01);
        printf("Código: %s\n", codcart1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", popula1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", Pib1);
        printf("Pontos Turísticos: %d\n", Ptur1);
        printf("\n");
        printf("Carta 2:\n");
        printf("Estado: %s\n", estado02);
        printf("Código: %s\n", codcart2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", popula2);
        printf("Área: %f\n", area2);
        printf("PIB: %f\n", Pib2);
        printf("Pontos Turísticos: %d\n", Ptur2);
return 0;
} 
