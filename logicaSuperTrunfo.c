#include <stdio.h>

int main(){

    //carta 1
    int numeros_pontos_turisticos = 0;
    char estado[20], cod_carta[4], nome_cidade[15];
    double area = 0, pib = 0, densidade_populacional = 0, pib_per_capita = 0, super_poder = 0;
    unsigned long int populacao = 0;

    //carta 2
    char estado1[20], cod_carta1[4], nome_cidade1[15];
    int numeros_pontos_turisticos1 = 0;
    double area1 = 0, pib1 = 0, densidade_populacional1 = 0, pib_per_capita1 = 0, super_poder1 = 0;
    unsigned long int populacao1 = 0;

    //Criando cartas
    //Carta 1
    printf("======== Carta 1 ========\n");
    printf("Escolha um estado: ");  //Estado
    scanf("%19s", estado);

    printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: ");  //Código da carta
    scanf("%s", cod_carta);

    printf("Escolha o nome da cidade: "); //Nome da cidade
    scanf("%s", nome_cidade);

    printf("Número de habitantes da cidade: "); //Numero de habitantes da cidade
    scanf("%u", &populacao);

    printf("A área da cidade: "); // Area da cidade
    scanf("%lf", &area);

    printf("O PIB (Produto Interno Bruto) da cidade: "); // PIB
    scanf("%lf", &pib);

    printf("Quantidade de pontos turísticos na cidade: "); // Numero de pontos turisticos
    scanf("%d", &numeros_pontos_turisticos);
    printf("\n\n");

    //Carta 2
    printf("======== Carta 2 ========\n");
    printf("Escolha um estado: "); //Estado
    scanf("%19s", estado1);

    printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: "); //Código da carta
    scanf("%s", cod_carta1);

    printf("Escolha o nome da cidade: "); //Nome da cidade
    scanf("%s", nome_cidade1);

    printf("Número de habitantes da cidade: "); //Numero de habitantes da cidade
    scanf("%u", &populacao1);

    printf("A área da cidade: "); // Area da cidade
    scanf("%lf", &area1);

    printf("O PIB (Produto Interno Bruto) da cidade: "); // PIB
    scanf("%lf", &pib1);

    printf("Quantidade de pontos turísticos na cidade: "); // Numero de pontos turisticos
    scanf("%d", &numeros_pontos_turisticos1);
    printf("\n\n");

    // Exibir cartas
    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %.u\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional = (double) populacao / area);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita = pib / (double) populacao);
    printf("Super poder: %.2f\n\n", super_poder = ((double) populacao + area + pib + (double) numeros_pontos_turisticos + pib_per_capita + densidade_populacional));


    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1 = (double) populacao1 / area1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1 = pib1 / (double) populacao1);
    printf("Super poder: %.2f\n\n", super_poder1 = ((double) populacao1 + area1 + pib1 + (double) numeros_pontos_turisticos1 + pib_per_capita1 + densidade_populacional1));


    //Comparação das cartas.
    printf("************************************************************\n");
    printf("********************Comparação de cartas********************\n");
    printf("************************************************************\n\n");

    printf("Atributo: População\n");
    printf("Carta 1 - %s (%s): %u\n", estado, nome_cidade, populacao);
    printf("Carta 2 - %s (%s): %u\n", estado1, nome_cidade1, populacao1);
    printf("Resultado: ");
    if (populacao > populacao1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (populacao == populacao1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: Área\n");
    printf("Carta 1 - %s (%s): %.2f Km²\n", estado, nome_cidade, area);
    printf("Carta 2 - %s (%s): %.2f Km²\n", estado1, nome_cidade1, area1);
    printf("Resultado: ");
    if (area > area1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (area == area1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: PIB\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", estado, nome_cidade, pib);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", estado1, nome_cidade1, pib1);
    printf("Resultado: ");
    if (pib > pib1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (pib == pib1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s (%s): %d\n", estado, nome_cidade, numeros_pontos_turisticos);
    printf("Carta 2 - %s (%s): %d\n", estado1, nome_cidade1, numeros_pontos_turisticos1);
    printf("Resultado: ");
    if (numeros_pontos_turisticos > numeros_pontos_turisticos1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (estado == estado1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: Desnsidade Populacional\n");
    printf("Carta 1 - %s (%s): %.2f hab/Km²\n", estado, nome_cidade, densidade_populacional);
    printf("Carta 2 - %s (%s): %.2f hab/Km²\n", estado1, nome_cidade1, densidade_populacional1);
    printf("Resultado: ");
    if (densidade_populacional < densidade_populacional1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (densidade_populacional == densidade_populacional1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: PIB per Capita\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", estado, nome_cidade, pib_per_capita);
    printf("Carta 2 - %s (%s): %.2f reais\n", estado1, nome_cidade1, pib_per_capita1);
    printf("Resultado: ");
    if (pib_per_capita > pib_per_capita1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (pib_per_capita == pib_per_capita1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }

    printf("************************************************************\n");
    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s (%s): %.2f\n", estado, nome_cidade, super_poder);
    printf("Carta 2 - %s (%s): %.2f\n", estado1, nome_cidade1, super_poder1);
    printf("Resultado: ");
    if (super_poder > super_poder1){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        if (super_poder == super_poder1){
            printf("Empate!\n");
        }else{
            printf("Carta 2 (%s) venceu!\n", estado1);
        }
    }



    return 0;
}