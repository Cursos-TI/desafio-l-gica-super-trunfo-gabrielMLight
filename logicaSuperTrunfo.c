#include <stdio.h>

char estado, estado2;
char cod[3], cod2[3];
char nome[20], nome2[20];
int população, população2;
int  pontos_turisticos, pontos_turisticos2;
float area, area2;
float pib, pib2;
float popDensity, popDensity2;
float ppc, ppc2;
float power, power2;

float GetPopDensity(int population, float area) {
    return (float)population / area;
}

float GetPPC(float pib, int population) {
    return pib / (float)population;
}

void SetCards() {
    printf("Preencha as informações de duas cartas.\n");
    
    printf("Carta 1 :.\n\n");
    
    printf("Estado: ");
    scanf(" %c", &estado);
    
    printf("Código da Carta: ");
    scanf(" %s", &cod);

    printf("Nome da Cidade: ");
    scanf(" %s", &nome);

    printf("População: ");
    scanf(" %i", &população);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &pontos_turisticos);

    printf("_________________________________\n\n");

    printf("Carta 2 :.\n\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", &cod2);

    printf("Nome da Cidade: ");
    scanf(" %s", &nome2);

    printf("População: ");
    scanf(" %i", &população2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &pontos_turisticos2);
}

void CalculateProperties() {
    popDensity = GetPopDensity(população, area);
    popDensity2 = GetPopDensity(população2, area2);
    ppc = GetPPC(pib, população);
    ppc2 = GetPPC(pib2, população2);

    power = (float)(população + pontos_turisticos) + area + pib + ppc - popDensity;
    power2 = (float)(população2 + pontos_turisticos2) + area2 + pib2 + ppc2 - popDensity2;
}

void DisplayCards() {
    printf("Carta 1 :.\n\n");
    
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", cod);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %i\n", população);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", popDensity);
    printf("PIB per Capita: %.2f\n", ppc);
    printf("Super Poder: %.2f\n", power);

    printf("_________________________________\n\n");
    printf("Carta 2 :.\n\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %i\n", população2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", popDensity2);
    printf("PIB per Capita: %.2f\n", ppc2);
    printf("Super Poder: %.2f\n", power2);
}

void CompareCards() {
    
    if (população > população2)
        printf("População: Carta %i vence.\n", 1);
    else if (população == população2)
        printf("População: Empate.\n");
    else
        printf("População: Carta %i vence.\n", 2);

    if (area > area2)
        printf("Área: Carta %i vence.\n", 1);
    else if (area == area2)
        printf("Area: Empate.\n");
    else
        printf("Área: Carta %i vence.\n", 2);
        
    if (pib > pib2)
        printf("PIB: Carta %i vence.\n", 1);
    else if (pib == pib2)
        printf("PIB: Empate.\n");
    else
        printf("PIB: Carta %i vence.\n", 2);
        
    if (pontos_turisticos > pontos_turisticos2)
        printf("Pontos Turísticos: Carta %i vence.\n", 1);
    else if (pontos_turisticos == pontos_turisticos2)
        printf("Pontos Turísticos: Empate.\n");
    else
        printf("Pontos Turísticos: Carta %i vence.\n", 2);
        
    if (popDensity < popDensity2)
        printf("Densidade Populacional: Carta %i vence.\n", 1);
    else if (popDensity == popDensity2)
        printf("Densidade Populacional: Empate.\n");
    else
        printf("Densidade Populacional: Carta %i vence.\n", 2);
        
    if (ppc > ppc2)
        printf("PIB per Capita: Carta %i vence.\n", 1);
    else if (ppc == ppc2)
        printf("PIB per Capita: Empate.\n");
    else
        printf("PIB per Capita: Carta %i vence.\n", 2);
        
    if (power > power2)
        printf("Super Poder: Carta %i vence.\n", 1);
    else if (power == power2)
        printf("Super Poder: Empate.\n");
    else
        printf("Super Poder: Carta %i vence.\n", 2);

}

int main() {
    SetCards();
    CalculateProperties();

    printf("_________________________________\n\n");
    printf(".: Registro Concluído. Confira o resultado abaixo :.\n");
    printf("_________________________________\n\n");
    
    DisplayCards();

    printf("_________________________________\n\n");
    printf(".: Hora de Comparar as Cartas :.\n");
    printf("_________________________________\n\n");

    CompareCards();

    return 0;
}
