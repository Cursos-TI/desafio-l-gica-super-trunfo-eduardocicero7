#include <stdio.h>

int main()
{

  // DECLARAÇÃO DE VARIÁVEIS
  // CARTA 1:

  char estado;
  char codigocarta[10];
  char cidade[50];
  unsigned long int populacao;
  int pontos_turisticos;
  float area, pib;
  float densidade, pibperc;

  // CARTA 2:

  char estado2;
  char codigocarta2[10];
  char cidade2[50];
  unsigned long int populacao2;
  int pontos_turisticos2;
  float area2, pib2;
  float densidade2, pibperc2;

  // superpoderes

  float superpoder1;
  float superpoder2;

  // ENTRADA DAS INFORMAÇÕES DAS CARTAS
  // CARTA 1

  printf("=====CARTA 1==== \n");

  printf("INFORME O ESTADO: (A-H ) \n");
  scanf(" %c", &estado);

  printf("INFORME O CODIGO DA CARTA (EX- A01): ");
  scanf(" %s", codigocarta);

  printf("INFORME O NOME DA CIDADE: ");
  scanf(" %49[^\n]", cidade); // scanf(" %[^\n]", cidade);

  printf("INFORME a populacao da cidade: ");
  scanf("%lu", &populacao); // alteração ok

  printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
  scanf("%d", &pontos_turisticos);

  printf("INFORME A AREA EM KM2 DA CIDADE: ");
  scanf("%f", &area);

  printf("INFORME O PIB DA CIDADE: ");
  scanf("%f", &pib);

  densidade = populacao / area;

  pibperc = pib / populacao;

  superpoder1 = populacao + area + pib + pontos_turisticos + pibperc + (1 / densidade);

  // CARTA 2:

  printf("===CARTA 2=== \n");

  printf("INFORME O ESTADO 2: (A-H ) ");
  scanf(" %c", &estado2);

  printf("INFORME O CODIGO DA CARTA 2: (EX- A01)");
  scanf(" %s", codigocarta2);

  printf("INFORME O NOME DA CIDADE 2: ");
  scanf(" %49[^\n]", cidade2);

  printf("INFORME A POPULACAO DA CIDADE 2: ");
  scanf("%lu", &populacao2); // alteração feita

  printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS 2: ");
  scanf("%d", &pontos_turisticos2);

  printf("INFORME A AREA EM KM2 DA CIDADE 2: ");
  scanf("%f", &area2);

  printf("INFORME O PIB DA CIDADE 2: ");
  scanf("%f", &pib2);

  densidade2 = populacao2 / area2;

  pibperc2 = pib2 / populacao2;

  superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibperc2 + (1 / densidade2);

  // print f com os dadod das cartas

  printf("===DADOS CARTA 1=== \n");

  printf("ESTADO: %c  \n", estado);
  printf("CODIGO DA CARTA: %s \n", codigocarta);
  printf("CIDADE: %s \n", cidade);
  printf("PONTOS TURISTICOS: %d \n", pontos_turisticos);
  printf("POPULACAO: %lu \n", populacao); // alteração feita
  printf("AREA: %.2f km2 \n", area);
  printf("PIB: %.2f \n", pib);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km2 \n", densidade);
  printf("PIB PER CAPTA: %.2f \n", pibperc);
  printf("PODERES CARTA 1 =  %f \n", superpoder1);

  printf("====DADOS CARTA 2====  \n");

  printf("ESTADO: %c  \n", estado2);
  printf("CODIGO DA CARTA: %s \n", codigocarta2);
  printf("CIDADE: %s \n", cidade2);
  printf("PONTOS TURISTICOS: %d \n", pontos_turisticos2);
  printf("POPULACAO: %lu \n", populacao2); // alteração feita
  printf("AREA: %.2f km2 \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km2 \n", densidade2);
  printf("PIB PER CAPTA: %.2f \n", pibperc2);
  printf("PODERES CARTA 2 =  %f \n", superpoder2);

  // comparação das cartas

  printf("====COMPARACAO DE CARTAS");

      if (populacao > populacao2)
  {
    printf(" Populacao: Carta 1 VENCEU \n");
  }
  else
  {
    printf("Populacao: Carta 2 VENCEU \n ");
  }

  if (pontos_turisticos > pontos_turisticos2)
  {
    printf(" Pontos Turisticos: Carta 1 VENCEU\n ");
  }
  else
  {
    printf(" Pontos Turisticos: Carta 2 VENCEU\n ");
  }
  if (area > area2)
  {
    printf("Area em km2: Carta 1 VENCEU \n");
  }
  else
  {
    printf("Area em km2: Carta 2 VENCEU\n ");
  }
  if (pib > pib2)
  {
    printf(" Pib: Carta 1 VENCEU \n");
  }
  else
  {
    printf(" Pib: Carta 2 VENCEU \n");
  }
  if (densidade < densidade2)
  {
    printf("Densidade: Carta 1 VENCEU\n ");
  }
  else
  {
    printf(" Densidade: Carta 2 VENCEU\n ");
  }
  if (pibperc > pibperc2)
  {
    printf(" Pib Per Capta: Carta 1 VENCEU \n");
  }
  else
  {
    printf(" Pib Per Capta: Carta 2 VENCEU\n ");
  }
  if (superpoder1 > superpoder2)
  {
    printf(" Superpoderes: Carta 1 VENCEU\n ");
  }
  else
  {
    printf(" Superpoderes: Carta 2 VENCEU \n");
  }
}
