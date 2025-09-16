#include <stdio.h>

int main()
{
       // variáveis das cartas//
       char estado1[2], estado2[2];
       char codigo1[4], codigo2[4];
       char nome1[20], nome2[20];
       int populaçao1, populaçao2;
       float área1, área2;
       float pib1, pib2;
       int turistico1, turistico2;
       // mensagem inicial//
       printf("Bem vindo ao super trunfo!\n digite à seguir, os dados das cartas na ordem solicitada!\n");
       printf("----------------------carta 1----------------------\n");
       // cadastro da primeira carta//
       printf("Estado (utilize um caractere de A à H):\n");
       scanf("%s", estado1);
       printf("Código da carta(somente numeros):\n");
       scanf("%4s", codigo1);
       printf("Nome da cidade:\n");
       scanf(" %[^\n]", nome1);
       printf("Área (km²):\n");
       scanf("%f", &área1);
       printf("PIB (em bilhões):\n");
       scanf("%f", &pib1);
       printf("Quantidade de pontos turísticos\n");
       scanf("%d", &turistico1);
       // mensagem da segunda  carta//
       printf("----------------------carta 2----------------------\n");
       // cadastro da segunda carta//
       printf("Estado (utilize um caractere de A à H):\n");
       scanf("%s", estado2);
       printf("Código da carta(somente numeros):\n");
       scanf("%4s", codigo2);
       printf("Nome da cidade:\n");
       scanf(" %[^\n]", nome2);
       printf("Área (km²):\n");
       scanf("%f", &área2);
       printf("PIB (em bilhões):\n");
       scanf("%f", &pib2);
       printf("Quantidade de pontos turísticos\n");
       scanf("%d", &turistico2);
       // exibição das cartas//
       printf("----------------------carta 1----------------------\n");
       printf("estado:%s \ncódigo: %s%s \nNome da cidade: %s \nárea %g KM² \nPib: %g Bilhões de reais \nNumero de pontos turísticos: %d \n",
              estado1, estado1, codigo1, nome1, área1, pib1, turistico1);
       printf("----------------------carta 2----------------------\n");
       printf("estado: %s \ncódigo: %s%s \nNome da cidade: %s\n área: %g KM²\n Pib: %g Bilhões de reais \nNumero de pontos turísticos: %d \n",
              estado2, estado2, codigo2, nome2, área2, pib2, turistico2);
       return 0;
};