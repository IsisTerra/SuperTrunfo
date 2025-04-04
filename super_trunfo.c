#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2, turismo, turismo2;
    float area, area2, pib, pib2;

    printf("Bem vindo ao Super Trunfo!\n");

    // Informações da primeira carta:
    printf("Por favor, insira os dados da sua primeira carta como solicitado\n");
    printf("Insira a letra, de 'A' a 'H': ");
    scanf(" %c", &estado); // Espaço para que o enter não seja lido como o caractere escolhido
    printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    scanf("%s", &codigo);
    printf("O nome da cidade: ");
    scanf("%s", &cidade);
    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo);

    // Informações da segunda carta:
    printf("Dados salvos. Agora, insira os dados da sua segunda carta\n");
    printf("Insira a letra, de 'A' a 'H': ");
    scanf(" %c", &estado2); // Espaço para que o enter não seja lido como o caractere escolhido
    printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    scanf("%s", &codigo2);
    printf("O nome da cidade: ");
    scanf("%s", &cidade2);
    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d \n", &turismo2); //Espaçar mais o conteúdo

    // Impressão de informações das duas cartas:

    //Carta 1:
    printf("\n Carta 1:\n"); //Mais uma linha para separar o conteúdo
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);

    //Carta 2:
    printf("\n Carta 2:\n"); //Mais uma linha para separar o conteúdo
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}
