#include <stdio.h>
#define MAX_NOME_CIDADE 50
#define MAX_CODIGO 5
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
struct Carta {
    // estrutura para armazenar
    char estado;
    char codigo[5];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};

void lerCarta(struct Carta *carta) {
    // receber as informaçoes da carta
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
        
    printf("Código da Carta (A01, B03): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomecidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área em km²: ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta->pontosturisticos);
}

void imprimirCarta(struct Carta carta, int numero) {
    // mostrar os dados da carta
    printf("\nCarta %d: \n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomecidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f Bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosturisticos);

}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    struct Carta carta1, carta2;

    printf("Insira os dados da primeira carta: \n");
    lerCarta(&carta1);

    printf("Insira os dados da segunda carta: \n");
    lerCarta(&carta2);

    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    return 0;
}
