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

void CalculateAttributes() {
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
    int atributo, atributo2;
    int resultado, resultado2;
    printf("Escolha o primeiro atributo para a comparação :.\n");
    printf(" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Populacional\n 6 - PIB per Capita\n 7 - Super Poder\n");
    scanf("%i", &atributo);

    switch (atributo) {
        case 1:
            resultado = população > população2;
            if (resultado)
                printf("População: Carta %i vence. (%i > %i)\n", 1, população, população2);
            else if (população == população2)
                printf("População: Empate. (%i = %i)\n", população, população2);
            else
                printf("População: Carta %i vence. (%i < %i)\n", 2, população, população2);
            break;
            
        case 2:
            resultado = area > area2;
            if (resultado)
                printf("Área: Carta %i vence. (%.2f > %.2f)\n", 1, area, area2);
            else if (area == area2)
                printf("Area: Empate. (%.2f = %.2f)\n", area, area2);
            else
                printf("Área: Carta %i vence. (%.2f < %.2f)\n", 2, area, area2);
            break;
        
        case 3:
            resultado = pib > pib2;
            if (resultado)
                printf("PIB: Carta %i vence. (%.2f > %.2f)\n", 1, pib, pib2);
            else if (pib == pib2)
                printf("PIB: Empate. (%.2f = %.2f)\n", pib, pib2);
            else
                printf("PIB: Carta %i vence. (%.2f < %.2f)\n", 2, pib, pib2);
            break;

        case 4:
            resultado = pontos_turisticos > pontos_turisticos2;
            if (resultado)
                printf("Pontos Turísticos: Carta %i vence. (%i > %i)\n", 1, pontos_turisticos, pontos_turisticos2);
            else if (pontos_turisticos == pontos_turisticos2)
                printf("Pontos Turísticos: Empate. (%i = %i)\n", pontos_turisticos, pontos_turisticos2);
            else
                printf("Pontos Turísticos: Carta %i vence. (%i < %i)\n", 2, pontos_turisticos, pontos_turisticos2);
            break;

        case 5:
            resultado = popDensity < popDensity2;
            if (resultado)
                printf("Densidade Populacional: Carta %i vence. (%.2f < %.2f)\n", 1, popDensity, popDensity2);
            else if (popDensity == popDensity2)
                printf("Densidade Populacional: Empate. (%.2f = %.2f)\n", popDensity, popDensity2);
            else
                printf("Densidade Populacional: Carta %i vence. (%.2f > %.2f)\n", 2, popDensity, popDensity2);
            break;

        case 6:
            resultado = ppc > ppc2;
            if (resultado)
                printf("PIB per Capita: Carta %i vence. (%.2f > %.2f)\n", 1, ppc, ppc2);
            else if (ppc == ppc2)
                printf("PIB per Capita: Empate. (%.2f = %.2f)\n", ppc, ppc2);
            else
                printf("PIB per Capita: Carta %i vence. (%.2f < %.2f)\n", 2, ppc, ppc2);
            break;

        case 7:
            resultado = power > power2;
            if (resultado)
                printf("Super Poder: Carta %i vence. (%.2f > %.2f)\n", 1, power, power2);
            else if (power == power2)
                printf("Super Poder: Empate. (%.2f = %.2f)\n", power, power2);
            else
                printf("Super Poder: Carta %i vence. (%.2f < %.2f)\n", 2, power, power2);
            break;

        default:
            printf("Escolha inválida :/\n");
            break;
    }

    printf("\nEscolha o segundo atributo para a comparação :.\n");
    printf(" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Populacional\n 6 - PIB per Capita\n 7 - Super Poder\n");
    scanf("%i", &atributo2);

    if (atributo == atributo2) printf("Não pode escolher o mesmo atributo :/\n");
    else {
        switch (atributo2) {
            case 1:
                resultado2 = população > população2;
                if (resultado2)
                    printf("População: Carta %i vence. (%i > %i)\n", 1, população, população2);
                else if (população == população2)
                    printf("População: Empate. (%i = %i)\n", população, população2);
                else
                    printf("População: Carta %i vence. (%i < %i)\n", 2, população, população2);
                break;
                
            case 2:
                resultado2 = area > area2;
                if (resultado2)
                    printf("Área: Carta %i vence. (%.2f > %.2f)\n", 1, area, area2);
                else if (area == area2)
                    printf("Area: Empate. (%.2f = %.2f)\n", area, area2);
                else
                    printf("Área: Carta %i vence. (%.2f < %.2f)\n", 2, area, area2);
                break;
            
            case 3:
                resultado2 = pib > pib2;
                if (resultado2)
                    printf("PIB: Carta %i vence. (%.2f > %.2f)\n", 1, pib, pib2);
                else if (pib == pib2)
                    printf("PIB: Empate. (%.2f = %.2f)\n", pib, pib2);
                else
                    printf("PIB: Carta %i vence. (%.2f < %.2f)\n", 2, pib, pib2);
                break;
    
            case 4:
                resultado2 = pontos_turisticos > pontos_turisticos2;
                if (resultado2)
                    printf("Pontos Turísticos: Carta %i vence. (%i > %i)\n", 1, pontos_turisticos, pontos_turisticos2);
                else if (pontos_turisticos == pontos_turisticos2)
                    printf("Pontos Turísticos: Empate. (%i = %i)\n", pontos_turisticos, pontos_turisticos2);
                else
                    printf("Pontos Turísticos: Carta %i vence. (%i < %i)\n", 2, pontos_turisticos, pontos_turisticos2);
                break;
    
            case 5:
                resultado2 = popDensity < popDensity2;
                if (resultado2)
                    printf("Densidade Populacional: Carta %i vence. (%.2f < %.2f)\n", 1, popDensity, popDensity2);
                else if (popDensity == popDensity2)
                    printf("Densidade Populacional: Empate. (%.2f = %.2f)\n", popDensity, popDensity2);
                else
                    printf("Densidade Populacional: Carta %i vence. (%.2f > %.2f)\n", 2, popDensity, popDensity2);
                break;
    
            case 6:
                resultado2 = ppc > ppc2;
                if (resultado2)
                    printf("PIB per Capita: Carta %i vence. (%.2f > %.2f)\n", 1, ppc, ppc2);
                else if (ppc == ppc2)
                    printf("PIB per Capita: Empate. (%.2f = %.2f)\n", ppc, ppc2);
                else
                    printf("PIB per Capita: Carta %i vence. (%.2f < %.2f)\n", 2, ppc, ppc2);
                break;
    
            case 7:
                resultado2 = power > power2;
                if (resultado2)
                    printf("Super Poder: Carta %i vence. (%.2f > %.2f)\n", 1, power, power2);
                else if (power == power2)
                    printf("Super Poder: Empate. (%.2f = %.2f)\n", power, power2);
                else
                    printf("Super Poder: Carta %i vence. (%.2f < %.2f)\n", 2, power, power2);
                break;
    
            default:
                printf("Escolha inválida :/\n");
                break;
        }
    }

    if (resultado && resultado2) printf("\nCarta 1 venceu!\n");
    else if (resultado || resultado2) printf("\nEmpate!\n");
    else printf("\nCarta 2 venceu!\n");
}

int main() {
    SetCards();
    CalculateAttributes();

    printf("_________________________________\n\n");
    printf(".: Registro Concluído. Confira as cartas abaixo :.\n");
    printf("_________________________________\n\n");
    
    DisplayCards();

    printf("_________________________________\n\n");
    printf(".: Hora de Comparar as Cartas :.\n");
    printf("_________________________________\n\n");

    CompareCards();

    return 0;
}
