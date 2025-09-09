#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Muito utilizada para gerenciar memória, controlar processos, conversão de tipos e nesse exercício estarei utilizando para fazer funções aleatórias.
#include <time.h> // Utilizado para Data e Hora. Estarei utilizando para gerar números aleatórios.

// Nesta atividade será feita a criação do menu interativo, onde o usuário podera escolher o que deseja comparar
// dessa forma será exibido o resultadona tela.
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char estado1[30], codigocarta1[4], nomecidade1[30], estado2[30], codigocarta2[4], nomecidade2[30]; 
    unsigned int populacao1, pontostu1, populacao2, pontostu2;
    float areakm1, pib1, areakm2, pib2;
    float densidade1, Pibper1, power1, densidade2, Pibper2, power2;
    
    printf("\n -------Carta 1------- \n");
    printf("\n"); // Utilizei o conceito aprendido em um curso de python, para gerar um espaçamento e tornar a saída no terminal mais organizada.                 
    printf("Digite o código da carta: \n");
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
    printf("\n"); 
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
    printf("\n");

    densidade1 = populacao1 / areakm1;
    Pibper1 = pib1 / populacao1;
    densidade2 = populacao2 / areakm2;
    Pibper2 = pib2 / populacao2;
    power1 = populacao1 + pontostu1 + areakm1 + Pibper1 + (1 / densidade1);
    power2 = populacao2 + pontostu2 + areakm2 + Pibper2 + (1 / densidade2);
    // carta1
    printf("\n-----carta 1-----\n");
    printf("\n");
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
    printf("\n");
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
    printf("\n");
    ////////////// Comparação //////////////////

    int opcoesMenu, regras;
    int opcaoEscolhida;

    // Menu !
    printf("-----Menu de combate por comparação-----\n");
    printf("\n");
    printf("1. Iniciar combate!\n");
    printf("2. Regras do jogo(2 opções)!\n");
    printf("3. Sair do jogo!\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcoesMenu); // Primeiro fiz o menu para gerar a escolha do usuário !
    printf("\n");
    switch(opcoesMenu)
    {
        case 1: 
        printf("-----%s VS %s-----\n", nomecidade1, nomecidade2);
        printf("\n");
        printf("1. População\n");
        printf("2. Pontos Turísticos\n");
        printf("3. Área por KM)\n");
        printf("4. Pib\n");
        printf("5. Densidade Demográfica/populacional\n");
        printf("Digite aqui: ");
        scanf("%d", &opcaoEscolhida);
        
        switch(opcaoEscolhida){  // Neste switch, chamei o resultado da "opcaoEscolhida" e utilizei a lógica para gerar o resultado de acordo com o que foi escolhido.
            case 1:
            printf("%s(%u) VS %s(%u)\n", nomecidade1, populacao1, nomecidade2, populacao2); // Dessa forma sai o nome da cidade e o valor que vai ser calculado no terminal.
            printf("\n");
                if(populacao1 > populacao2){
                    printf("Carta %s venceu\n", nomecidade1);
                }else if(populacao1 == populacao2){
                    printf("Houve um empate\n");
                }else{
                printf("Carta %s venceu\n", nomecidade2);
            }break;
            case 2:
            printf("%s(%u) VS %s(%u)\n", nomecidade1, pontostu1, nomecidade2, pontostu2);
            printf("\n");
                if(pontostu1 > pontostu2){
                    printf("Carta %s venceu\n", nomecidade1);
                }else if(pontostu1 == pontostu2){
                    printf("Houve um empate\n");  
                }else{
                printf("Carta %s venceu\n", nomecidade2);
                
            }break;
            case 3:
            printf("%s(%.2f) VS %s(%.2f)\n", nomecidade1, areakm1, nomecidade2, areakm2);
            printf("\n");
                if(areakm1 > areakm2){
                    printf("Carta %s venceu\n", nomecidade1);
                }else if(areakm1 == areakm2){   
                    printf("Houve um empate\n");
                }else{
                printf("Carta %s venceu\n", nomecidade2);
            }break;

            case 4:
            printf("%s(%.2f) VS %s(%.2f)\n", nomecidade1, pib1, nomecidade2, pib2);
            printf("\n");
                if(pib1 > pib2){
                    printf("Carta %s venceu\n", nomecidade1);
                }else if(pib1 == pib2){
                    printf("Houve um empate\n");
                }else{
                printf("Carta %s venceu\n", nomecidade2);
            }break;

            case 5:
            printf("%s(%.2f) VS %s(%.2f)\n", nomecidade1, densidade1, nomecidade2, densidade2);
            printf("\n");
                if(densidade1 < densidade2){
                    printf("Carta %s venceu\n", nomecidade1);
                }else if(densidade1 == densidade2){
                    printf("Houve um empate\n");
                }else{
                printf("Carta %s venceu\n", nomecidade2);
            }break;
               default:
                printf("Opção Inválida!\n");
        }break;

        case 2:
            printf("Temos 2 regras. Digite 1 ou 2 para a descrição da regra: \n");
            scanf("%d", &regras);
            printf("\n");
            switch(regras)
            {
                case 1: 
                    printf("1 - Vence a carta com o maior valor no atributo escolhido !!");
                break;
                case 2:
                    printf("2 - No caso da Densidade demográfica, vence o quem tiver o menor valor");
                break;
                default:
                    printf("Opção Inválida!\n");
                break;
            }break;
        case 3:
            printf("Saindo do jogo...");

    break;
    }



return 0;
}