#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float dens_populacional1;
    float per_capita1;
    
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float dens_populacional2;
    float per_capita2;

    printf("*** DIGITE OS DADOS DA CARTA 1 ***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
        
    printf("Código da Carta (A01, B02): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    
    printf("*** DIGITE OS DADOS DA CARTA 2 ***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
        
    printf("Código da Carta (A01, B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    
    dens_populacional1 = populacao1 / area1;
    per_capita1 = (pib1 * 1000000000) / populacao1;
    
    dens_populacional2 = populacao2 / area2;
    per_capita2 = (pib2 * 1000000000) / populacao2;
    
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per Capita: %.2f reais\n", per_capita1);
    
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    return 0;
}
