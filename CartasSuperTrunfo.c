#include <stdio.h>

int main (){

    //Variáveis da Primeira carta 

    char estado1;  
    char codigo1[4];  
    char cidade1[50];  
    int populacao1;  
    double area1;  
    float pib1;  
    int pontos1; 
    float densidadepopulacional1;
    float PibPerCapita1;
    


    // Variáveis da Segunda carta 

    char estado2;  
    char codigo2[4];  
    char cidade2[50];  
    int populacao2;  
    float area2;  
    float pib2;  
    int pontos2;  
    float densidadepopulacional2;
    float PibPerCapita2;

    // Entrada de dados para a Primeira carta

    printf("Digite a letra do estado da primeira carta (A-H):");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01):");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area1);

    // Limpar o buffer
    getchar();  // Limpa o \n após a leitura de um número


    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidadepopulacional1 = populacao1 / area1;
    printf ("O valor da densidade populacional é: %f\n", densidadepopulacional1);

    PibPerCapita1 = pib1 / populacao1;
    printf (" O valor do Pib per capita é: %f", PibPerCapita1);


        
    
        // Entrada de dados para a Segunda carta

    printf("Digite a letra do estado da segunda carta (A-H):");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: A01):");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    // Limpar o buffer
    getchar();  // Limpa o \n após a leitura de um número


    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidadepopulacional2 = populacao2 / area2;
    printf ("O valor da densidade populacional é: %f\n", densidadepopulacional2);

    PibPerCapita2 = pib2 / populacao2;
    printf (" O valor do Pib per capita é: %f", PibPerCapita2);


    
    
    
    // Exibindo os dados das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade populacional: %f\n", densidadepopulacional1);
    printf("O pib per capta é: %f\n", PibPerCapita1);


    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade populacional: %f\n", densidadepopulacional2);
    printf("O pib per capta é: %f\n", PibPerCapita2);



    return 0;


}