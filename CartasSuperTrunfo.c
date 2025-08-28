#include <stdio.h>
#include <locale.h>

// Acabei fazendo novamente via VSCODE e depois passando apra cá. 
// Nos próximos trabalhos/exercícios, farei totalmente pelo github.
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char estado1[30], codigocarta1[4], nomecidade1[30], estado2[30], codigocarta2[4], nomecidade2[30];
    unsigned int populacao1, pontostu1, populacao2, pontostu2;
    float areakm1, pib1, areakm2, pib2;
    float densidade1, Pibper1, power1, densidade2, Pibper2, power2;

    printf("\n -------Carta 1------- \n");
    prinft("Digite o código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite o estado: \n");
    scanf("%s", estado1);
    
    printf("Digite a cidade: \n");
    scanf("%s", nomecidade1);

    printf("Digite o número populacional: \n");
    scanf("%u", &populacao1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%u", &pontostu1);

    printf("Digite a área por Km²: \n");
    scanf("%f", &areakm1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);

    printf("\n -------Carta 2------- \n");

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);
    
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite o número populacional: \n");
    scanf("%u", &populacao2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%u", &pontostu2);

    printf("Digite a área por Km²: \n");
    scanf("%f", &areakm2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    densidade1 = pib1 / areakm1;
    Pibper1 = pib1 / populacao1;
    densidade2 = pib2 / areakm2;
    Pibper2 = pib2 / populacao2;
    power1 = densidade1 + Pibper1;
    power2 = densidade2 + Pibper2;
    // carta1
    printf("\n-----carta 1-----\n");

    printf("Código da carta: %s\n", codigocarta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %u\n", populacao1);
    printf("Pontos Turísticos: %u\n", pontostu1);
    printf("Área por KM²: %.2f\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", Pibper1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("Super Poder: %.2f \n", power1);
    // carta 2
    printf("\n-----carta 2-----\n");
    
    printf("Código da carta: %s \n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %u\n", populacao2);
    printf("Pontos Turísticos: %u \n", pontostu2);
    printf("Área por KM²: %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", Pibper2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("Super Poder: %.2f\n ", power2);
    ////////////// Comparação //////////////////
    printf("\n-----Vamos comparar as cartas. 1 para positivo e 0 para negativo-----\n");
    
    printf("Estado: Carta 1 vence a carta 2: %d\n", estado1[0] > estado2[0]); // Utilizei o [0] para gerar o valor da inicial no ASCII
    printf("Estado: Carta 2 vence a carta 1: %d\n", estado1 [0] < estado2[0]); /*Como if e Else ainda não podem ser utilizados, decidi 
                                                                                  repetir essa parte, pois o usuário pode acabar digitando 
                                                                                  estados iguais*/
    printf("Cidade: Carta 1 vence a carta 2: %d\n", nomecidade1[0] > nomecidade2[0]);
    printf("População: Carta 1 vence a carta 2: %u\n", populacao1 > populacao2);
    printf("Pontos Turísticos: Carta 1 vence a carta 2: %u\n", pontostu1 > pontostu2);
    printf("Área por KM²: Carta 1 vence a carta 2: %.2f\n", areakm1 > areakm2);
    printf("PIB: Carta 1 vence a carta 2: %d\n", pib1 > pib2);
    printf("PIB per capita: Carta 1 vence a carta 2: %d\n", Pibper1 > Pibper2);
    printf("Densidade Populacional: Carta 1 vence a carta 2: %d \n", densidade1 > densidade2);
    printf("Super poder: Carta 1 vence a carta 2: %d\n", power1 > power2);
                                                                                /*Utilizei o D, para que fosse impresso um número inteiro
                                                                                  pois pensei que poderia ter alguma imprecisão na hora de 
                                                                                  imprimir o resultado do combate de cartas*/

    return 0;

    
}

