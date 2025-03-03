#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float dens_populacional1;
    float per_capita1;
    float superpoder1;
    
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float dens_populacional2;
    float per_capita2;
    float superpoder2;

    printf("*** DIGITE OS DADOS DA CARTA 1 ***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
        
    printf("Código da Carta (A01, B02): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    
    dens_populacional1 = populacao1 / area1;
    per_capita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + per_capita1 - dens_populacional1;
    

    dens_populacional2 = populacao2 / area2;
    per_capita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + per_capita2 - dens_populacional2;

    

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
    printf("SuperPoder: %.2f", superpoder1);
    
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
    printf("SuperPoder: %.2f", superpoder2);

    printf("\n***Comparação de carta***: \n");
    //populaçao//
    if(populacao1 > populacao2) {
        printf("População: Carta 1 Venceu\n");
    }
    else if(populacao2 > populacao1){
        printf("População: Carta 2 Venceu\n");
    }
    else if(populacao1 == populacao2){
        printf("População: Empate\n");
    }
    //area//
    if(area1 > area2) {
        printf("Área: Carta 1 Venceu\n");
    }
    else if(area2 > area1){
        printf("Área: Carta 2 Venceu\n");
    }
    else if(area1 == area2){
        printf("Área: Empate\n");
    }
    //PIB//
    if(pib1 > pib2) {
        printf("PIB: Carta 1 Venceu\n");
    }
    else if(pib2 > pib1){
        printf("PIB: Carta 2 Venceu\n");
    }
    else if(pib1 == pib2){
        printf("PIB: Empate\n");
    }
    //Pontos Turísticos// 
    if(pontosturisticos1 > pontosturisticos2) {
        printf("Pontos Turísticos: Carta 1 Venceu\n");
    }
    else if(pontosturisticos2 > pontosturisticos1){
        printf("Pontos Turísticos: Carta 2 Venceu\n");
    }
    else if(pontosturisticos1 == pontosturisticos2){
        printf("Pontos Turísticos: Empate\n");
    }
    //Densidade Populacional//
    if(dens_populacional1 < dens_populacional2) {
        printf("Densidade Populacional: Carta 1 Venceu\n");
    }
    else if(dens_populacional2 < dens_populacional1){
        printf("Densidade Populacional: Carta 2 Venceu\n");
    }
    else if(dens_populacional1 == dens_populacional2){
        printf("Densidade Populacional: Empate\n");
    }
    //PIB per capita//
    if(per_capita1 > per_capita2){
        printf("PIB per Capita: Carta 1 Venceu\n");
    }
    else if(per_capita2 > per_capita1){
        printf("PIB per Capita: Carta 2 Venceu\n");
    }
    else if(per_capita1 == per_capita2){
        printf("PIB per Capita: Empate\n");
    }
    //SuperPoder//
    if(superpoder1 > superpoder2){
        printf("SuperPoder: Carta 1 Venceu\n");
    }
    else if(superpoder2 > superpoder1){
        printf("SuperPoder: Carta 2 Venceu\n");
    }
    else if (superpoder1 == superpoder2){
        printf("SuperPoder: Empate\n");
    }
        
    return 0;
}