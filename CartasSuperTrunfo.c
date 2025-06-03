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
    float SuperPoder1;

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
    float SuperPoder2;

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

    getchar();  // Limpa o \n após a leitura de um número

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidadepopulacional1 = populacao1 / area1;
    printf ("O valor da densidade populacional é: %f\n", densidadepopulacional1);

    PibPerCapita1 = pib1 / populacao1;
    printf (" O valor do Pib per capita é: %f", PibPerCapita1);

    SuperPoder1 = populacao1 + area1 + pib1 + pontos1 + densidadepopulacional1 + PibPerCapita1;
    printf(" Super Poder = %f\n", SuperPoder1);

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

    getchar();  // Limpa o \n após a leitura de um número

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidadepopulacional2 = populacao2 / area2;
    printf ("O valor da densidade populacional é: %f\n", densidadepopulacional2);

    PibPerCapita2 = pib2 / populacao2;
    printf (" O valor do Pib per capita é: %f", PibPerCapita2);

    SuperPoder2 = populacao2 + area2 + pib2 + pontos2 + densidadepopulacional2 + PibPerCapita2;
    printf(" Super Poder = %f\n", SuperPoder2);

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

    // Menu interativo de comparação
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("8 - Comparar dois atributos ao mesmo tempo\n");
    printf("Digite a opção (1 a 8): ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidadepopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.6f\n", cidade1, PibPerCapita1);
            printf("%s: %.6f\n", cidade2, PibPerCapita2);
            if (PibPerCapita1 > PibPerCapita2)
                printf("Vencedor: %s\n", cidade1);
            else if (PibPerCapita2 > PibPerCapita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, SuperPoder1);
            printf("%s: %.2f\n", cidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2)
                printf("Vencedor: %s\n", cidade1);
            else if (SuperPoder2 > SuperPoder1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 8:
            printf("Comparação por dois atributos (soma dos dois valores)\n");
            printf("Atributos disponíveis:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Super Poder\n");

            int atributo1, atributo2;
            printf("Digite o número do primeiro atributo (1 a 7): ");
            scanf("%d", &atributo1);

            printf("Digite o número do segundo atributo (1 a 7): ");
            scanf("%d", &atributo2);

            float valor1_1, valor1_2, valor2_1, valor2_2;

            switch (atributo1) {
                case 1: valor1_1 = populacao1; valor2_1 = populacao2; break;
                case 2: valor1_1 = area1; valor2_1 = area2; break;
                case 3: valor1_1 = pib1; valor2_1 = pib2; break;
                case 4: valor1_1 = pontos1; valor2_1 = pontos2; break;
                case 5: valor1_1 = densidadepopulacional1; valor2_1 = densidadepopulacional2; break;
                case 6: valor1_1 = PibPerCapita1; valor2_1 = PibPerCapita2; break;
                case 7: valor1_1 = SuperPoder1; valor2_1 = SuperPoder2; break;
                default: printf("Atributo 1 inválido!\n"); return 1;
            }

            switch (atributo2) {
                case 1: valor1_2 = populacao1; valor2_2 = populacao2; break;
                case 2: valor1_2 = area1; valor2_2 = area2; break;
                case 3: valor1_2 = pib1; valor2_2 = pib2; break;
                case 4: valor1_2 = pontos1; valor2_2 = pontos2; break;
                case 5: valor1_2 = densidadepopulacional1; valor2_2 = densidadepopulacional2; break;
                case 6: valor1_2 = PibPerCapita1; valor2_2 = PibPerCapita2; break;
                case 7: valor1_2 = SuperPoder1; valor2_2 = SuperPoder2; break;
                default: printf("Atributo 2 inválido!\n"); return 1;
            }

            float soma1 = valor1_1 + valor1_2;
            float soma2 = valor2_1 + valor2_2;

            printf("\nSoma dos atributos para %s: %.2f\n", cidade1, soma1);
            printf("Soma dos atributos para %s: %.2f\n", cidade2, soma2);

            if (soma1 > soma2)
                printf("Vencedor: %s\n", cidade1);
            else if (soma2 > soma1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
