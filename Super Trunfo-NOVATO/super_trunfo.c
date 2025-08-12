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

    // --- Variáveis para a CARTA 2 ---
    // terminando com '2'.
    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

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

    printf("\n--- DADOS DAS CARTAS CADASTRADAS ---\n"); // para melhor formatação da saída
    
    // Exibindo dados da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s \n", estado); 
    printf("Cidade: %s \n", cidade);
    printf("Código da carta: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f \n", pib);     
    printf("Pontos turísticos: %d \n", pontos);
    
    // Exibindo dados da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s \n", estado2); 
    printf("Cidade: %s \n", cidade2);
    printf("Código da carta: %s \n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    
    return 0;
}