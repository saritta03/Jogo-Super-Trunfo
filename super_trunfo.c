#include <stdio.h>
#include <string.h> 


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // --- Variáveis para a CARTA 1 ---
    char estado[20];    
    char codigo[4];   
    char cidade[20];
    int populacao;   
    float area;
    float pib;
    int pontos;
    float capita;
    float densidade;
    float super_poder;

    // --- Variáveis para a CARTA 2 ---
    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float capita2;
    float densidade2;
    float super_poder2;

    //CADASTRO DA CARTA 1
    printf("Dados da CARTA1 \nQual o nome do estado?\n");
    scanf("%s", estado); 
    
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade); 
    
    printf("Qual o código da carta? (Ex: SP1)\n");
    scanf("%s", codigo); 
    
    printf("População da cidade?\n");
    scanf("%d", &populacao);
    
    printf("Qual a área por km?\n");
    scanf("%f", &area);
    
    printf("Qual o PIB?\n");
    scanf("%f", &pib);
    
    printf("Qual o número de pontos turísticos?\n");
    scanf("%d", &pontos);

    // CADASTRO DA CARTA 2
    printf("\nDados da CARTA2 \nQual o nome do estado?\n");
    scanf("%s", estado2); 
    
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2); 
    
    printf("Qual o código da carta? (Ex: SP1)\n");
    scanf("%s", codigo2); 
    
    printf("População da cidade?\n");
    scanf("%d", &populacao2);
    
    printf("Qual a área por km?\n");
    scanf("%f", &area2);
    
    printf("Qual o PIB?\n");
    scanf("%f", &pib2);
    
    printf("Qual o número de pontos turísticos?\n");
    scanf("%d", &pontos2);

    // --- CÁLCULOS DOS ATRIBUTOS ---
    // Carta 1
    densidade = (float)populacao / area;
    capita = pib / (float)populacao;
    super_poder = populacao + area + pib + pontos + capita + (1/densidade);

    // Carta 2
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / (float)populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + capita2 + (1/densidade2);


    printf("\n--- DADOS DAS CARTAS CADASTRADAS ---\n"); // para melhor formatação da saída
    
    // Exibindo dados da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s \n", estado); 
    printf("Cidade: %s \n", cidade);
    printf("Código da carta: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f bilhões de reais \n", pib);     
    printf("Pontos turísticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", capita);
    printf("Super Poder: %.2f\n", super_poder);

    // Exibindo dados da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s \n", estado2); 
    printf("Cidade: %s \n", cidade2);
    printf("Código da carta: %s \n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // --- COMPARAÇÃO DAS CARTAS ---
   printf("\n--- RESULTADO DA COMPARAÇÃO (1 para Carta 1, 0 para Carta 2) ---\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", pontos > pontos2);
    printf("Densidade Populacional: %d\n", densidade < densidade2); // Regra invertida
    printf("PIB per Capita: %d\n", capita > capita2);
    printf("Super Poder: %d\n", super_poder > super_poder2);
    return 0;
}
