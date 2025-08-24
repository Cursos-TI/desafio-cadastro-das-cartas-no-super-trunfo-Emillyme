#include <stdio.h>

int main()
{
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Declarando aqui os valores pq os valores que eu utilizo para calculo já foram dados ao sistema.
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + pontosTuristicos1 - densidadePopulacional1;

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + pontosTuristicos2 - densidadePopulacional2;

    // Saída formatada - Carta 1

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Saída formatada - Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n--- Comparação de Cartas ---\n");
    (populacao1 > populacao2) && printf("População: Carta 1 venceu (%d)\n", 1);
    (populacao1 < populacao2) && printf("População: Carta 2 venceu (%d)\n", 0);
    (populacao1 == populacao2) && printf("População: Empate\n");

    (area1 > area2) && printf("Área: Carta 1 venceu (%d)\n", 1);
    (area1 < area2) && printf("Área: Carta 2 venceu (%d)\n", 0);
    (area1 == area2) && printf("Área: Empate\n");

    (pib1 > pib2) && printf("PIB: Carta 1 venceu (%d)\n", 1);
    (pib1 < pib2) && printf("PIB: Carta 2 venceu (%d)\n", 0);
    (pib1 == pib2) && printf("PIB: Empate\n");

    (densidadePopulacional1 < densidadePopulacional2) && printf("Densidade Populacional: Carta 1 venceu (%d)\n", 1);
    (densidadePopulacional1 > densidadePopulacional2) && printf("Densidade Populacional: Carta 2 venceu (%d)\n", 0);
    (densidadePopulacional1 == densidadePopulacional2) && printf("Densidade Populacional: Empate\n");

    (pibPerCapita1 > pibPerCapita2) && printf("PIB per Capita: Carta 1 venceu (%d)\n", 1);
    (pibPerCapita1 < pibPerCapita2) && printf("PIB per Capita: Carta 2 venceu (%d)\n", 0);
    (pibPerCapita1 == pibPerCapita2) && printf("PIB per Capita: Empate\n");

    (superPoder1 > superPoder2) && printf("Super Poder: Carta 1 venceu (%d)\n", 1);
    (superPoder1 < superPoder2) && printf("Super Poder: Carta 2 venceu (%d)\n", 0);
    (superPoder1 == superPoder2) && printf("Super Poder: Empate\n");

    // %d: Imprime um inteiro no formato decimal.
    // %i: Equivalente a %d.
    // %f: Imprime um número de ponto flutuante no formato padrão.
    // %e: Imprime um número de ponto flutuante na notação científica.
    // %c: Imprime um único caractere.
    // %s: Imprime uma cadeia (string) de caracteres.

    return 0;
}
