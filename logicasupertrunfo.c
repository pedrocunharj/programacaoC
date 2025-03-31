#include <stdio.h>

int main(){

    // Criação das variáveis para as cartas
    char estado1; // variável para os estados
    char codigo1[5]; // variável para o código da carta A01, A02...
    char cidade1[20]; // variável para as cidades
    unsigned long int populacao1; // variável para população
    float area1; // variável área em km²
    float pib1; // variável PIB em milhões de reais
    int pontos1; // número de pontos turísticos
    float densidadepop1;
    float pibpercapta1;
    float superpoder1;

    char estado2;
    char codigo2[5];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadepop2;
    float pibpercapta2;
    float superpoder2; 

    // Entrada dos dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Selecionar o estado

    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    //Cálculos primeira carta
    densidadepop1 = populacao1 / area1;
    pibpercapta1 = pib1 * 1000000000 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapta1 + (1 / densidadepop1);  // Inverso da densidade populacional

    getchar();  // Limpar o buffer de entrada antes de ler o próximo estado

    // Entrada dos dados da carta 2
    printf("Digite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  // Selecionar o estado

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]", cidade2); // %[^] para conseguir escrever o nome completo da cidade

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    // Cálculos segunda carta
    densidadepop2 = populacao2 / area2;
    pibpercapta2 = pib2 * 1000000000 /  populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapta2 + (1 / densidadepop2);  // Inverso da densidade populacional 

    // Exibição de dados da carta 1
    printf("\n Carta 1:\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("Pib per Capita: %.2f Reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);
    
    // Exibição de dados da carta 2
    printf("\n Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("Pib per Capita: %.2f Reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação de atributos entre as cartas feitas com if e else para saber quem ganha a rodada
    printf("\n Comparação de Atributos \n");

    // Comparação de população
    if(populacao1 > populacao2){
        printf("População: Carta 1! venceu (%lu vs %lu)\n", populacao1, populacao2);
    }
    else{
        printf("População: Carta 2! venceu (%lu vs %lu)\n", populacao1, populacao2);
    }
    
    if(area1 > area2){
        printf("Área: Carta 1 venceu! (%.2f vs %.2f)\n",area1, area2);
    }
    else{
        printf("Área: Carta 2 venceu! (%.2f vs %.2f)\n", area1, area2);
    }

    if(pib1 > pib2){
        printf("Pib: Carta 1 venceu! (%.2f vs %.2f)\n", pib1, pib2);
    }
    else{
        printf("Pib: Carta 2 Venceu (%.2f vs %.2f)\n", pib1, pib2);
    }

    if(pontos1 > pontos2){
        printf("Pontos turísticos: Carta 1 venceu! (%d vs %d)\n", pontos1, pontos2);
    }
    else{
        printf("Pontos turísticos: Carta 2 venceu! (%d vs %d)\n", pontos1, pontos2);
    }
    
    if(densidadepop1 < densidadepop2){ //O menor vence
        printf("Densidade Populacional: Carta 1 venceu! (%.2f vs %.2f)\n", densidadepop1, densidadepop2);
    }
    else{
        printf("Densidade Populacional: Carta 2 venceu! (%.2f vs %.2f)\n", densidadepop1, densidadepop2);
    }
    
    if(pibpercapta1 > pibpercapta2){
        printf("Pib per capita: Carta 1 venceu! (%.2f vs %.2f)\n",pibpercapta1, pibpercapta2);
    }
    else{
        printf("Pib per capita: Carta 2 venceu! (%.2f vs %.2f)\n", pibpercapta1, pibpercapta2);
    }

    if(superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu! (%.2f vs %.2f)\n", superpoder1, superpoder2);
    }
    else{
        printf("Super Poder: Carta 2 venceu! (%.2f vs %.2f)\n", superpoder1, superpoder2);
    }
    return 0;
}