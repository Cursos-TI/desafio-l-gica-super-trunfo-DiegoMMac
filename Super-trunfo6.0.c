#include <stdio.h>
#include <ctype.h>

int main(){
    //Variaveis para o menu
    int opcao_menu;
    char desisao_jogador;

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

    //Calulos de atributos, densidade populacional, pib per capita e super poder
    densidade_populacional = (double) populacao / area;
    densidade_populacional1 = (double) populacao1 / area1;
    pib_per_capita = pib / (double) populacao;
    pib_per_capita1 = pib1 / (double) populacao1;
    super_poder = ((double) populacao + area + pib + (double) numeros_pontos_turisticos + pib_per_capita + densidade_populacional);
    super_poder1 = ((double) populacao1 + area1 + pib1 + (double) numeros_pontos_turisticos1 + pib_per_capita1 + densidade_populacional1);

    //Comparação das cartas.
    printf("Deseja comparar as cartas? S/N\n");
    scanf(" %c", &desisao_jogador);
    desisao_jogador = toupper(desisao_jogador); // Vai receber 's' ou 'n' e transformar em maiúsculo
    printf("\n");

    switch (desisao_jogador){
        case 'S':
            
            char comparar_novamete;
            int opcao_menu1;

            printf("************************************************************\n");
            printf("********************Comparação de cartas********************\n");
            printf("************************************************************\n\n");

            printf("Qual atributo deseja comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turisticos\n");
            printf("5. Densidade demográfica\n");
            printf("Escolha a opção: ");
            scanf("%d", &opcao_menu);
            printf("\n");

            if (opcao_menu > 0 && opcao_menu < 6){

                printf("Deseja comparar mais algum atributo? S/N\n");
                scanf(" %c", &comparar_novamete);
                comparar_novamete = toupper(comparar_novamete);

                if (comparar_novamete == 'S'){

                    printf("************************************************************\n");
                    printf("********************Comparação de cartas********************\n");
                    printf("************************************************************\n\n");

                    printf("Qual atributo deseja comparar?\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Número de pontos turisticos\n");
                    printf("5. Densidade demográfica\n");
                    printf("Escolha a opção: ");
                    scanf("%d", &opcao_menu1);
                    printf("\n");
                    
                    if (opcao_menu1 > 0 && opcao_menu1 < 6){

                        if (opcao_menu1 == opcao_menu){

                            printf("ERRO!!! Opção já escolhida...\n");

                        }else{

                            int pontos_carta1 = 0, pontos_carta2 = 0; 

                            printf("Comparando atributos: %d - %d\n\n", opcao_menu, opcao_menu1);

                            if((opcao_menu == 1 && opcao_menu1 == 2) || (opcao_menu == 2 && opcao_menu1 == 1)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: População e Área ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPopulação: %u \nÁrea: %.2f\n\n", nome_cidade, populacao, area);
                                    printf("--- Carta 2 (%s) ---\nPopulação: %u \nÁrea: %.2f\n\n", nome_cidade1, populacao1, area1);

                                    printf("=== POPULAÇÂO ===\n");
                                    printf("Carta 1: %u \n", populacao);
                                    printf("Carta 2: %u \n\n", populacao1);

                                    if (populacao > populacao1){
                                       pontos_carta1 += 1;
                                    }else if (populacao < populacao1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Área ===\n");
                                    printf("Carta 1: %.2f KM² \n", area);
                                    printf("Carta 2: %.2f KM² \n\n", area1);

                                    if (area > area1){
                                       pontos_carta1 += 1;
                                    }else if(area < area){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 1 && opcao_menu1 == 3) || (opcao_menu == 3 && opcao_menu1 == 1)){
                                
                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: População e PIB ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPopulação: %u \nPIB: %.2f\n\n", nome_cidade, populacao, pib);
                                    printf("--- Carta 2 (%s) ---\nPopulação: %u \nPIB: %.2f\n\n", nome_cidade1, populacao1, pib1);

                                    printf("=== POPULAÇÂO ===\n");
                                    printf("Carta 1: %u \n", populacao);
                                    printf("Carta 2: %u \n\n", populacao1);

                                    if (populacao > populacao1){
                                       pontos_carta1 += 1;
                                    }else if (populacao < populacao1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== PIB ===\n");
                                    printf("Carta 1: R$ %.2f\n", pib);
                                    printf("Carta 2: R$ %.2f\n\n", pib1);

                                    if (pib > pib1){
                                       pontos_carta1 += 1;
                                    }else if(pib < pib1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");
                            
                            }else if((opcao_menu == 1 && opcao_menu1 == 4) || (opcao_menu == 4 && opcao_menu1 == 1)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: População e Número de pontos turisticos ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPopulação: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade, populacao, numeros_pontos_turisticos);
                                    printf("--- Carta 2 (%s) ---\nPopulação: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade1, populacao1, numeros_pontos_turisticos1);

                                    printf("=== POPULAÇÂO ===\n");
                                    printf("Carta 1: %u \n", populacao);
                                    printf("Carta 2: %u \n\n", populacao1);

                                    if (populacao > populacao1){
                                       pontos_carta1 += 1;
                                    }else if (populacao < populacao1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Número de pontos turisticos ===\n");
                                    printf("Carta 1: %d \n", numeros_pontos_turisticos);
                                    printf("Carta 2: %d \n\n", numeros_pontos_turisticos1);

                                    if (numeros_pontos_turisticos > numeros_pontos_turisticos1){
                                       pontos_carta1 += 1;
                                    }else if(numeros_pontos_turisticos < numeros_pontos_turisticos1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 1 && opcao_menu1 == 5) || (opcao_menu == 5 && opcao_menu1 == 1)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: População e Densidade Populacional ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPopulação: %u \nDensidade Populacional: %.2f\n\n", nome_cidade, populacao, densidade_populacional);
                                    printf("--- Carta 2 (%s) ---\nPopulação: %u \nDensidade Populacional: %.2f\n\n", nome_cidade1, populacao1, densidade_populacional1);

                                    printf("=== POPULAÇÂO ===\n");
                                    printf("Carta 1: %u \n", populacao);
                                    printf("Carta 2: %u \n\n", populacao1);

                                    if (populacao > populacao1){
                                       pontos_carta1 += 1;
                                    }else if (populacao < populacao1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Densidade Populacional ===\n");
                                    printf("Carta 1: %.2f hab/Km² \n", densidade_populacional);
                                    printf("Carta 2: %.2f hab/Km² \n\n", densidade_populacional1);

                                    if (densidade_populacional < densidade_populacional1){
                                       pontos_carta1 += 1;
                                    }else if(densidade_populacional > densidade_populacional1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 2 && opcao_menu1 == 3) || (opcao_menu == 3 && opcao_menu1 == 2)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: Área e PIB ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nÁrea: %u \nPIB: %.2f\n\n", nome_cidade, area, pib);
                                    printf("--- Carta 2 (%s) ---\nÁrea: %u \nPIB: %.2f\n\n", nome_cidade1, area1, pib1);

                                    printf("=== Área ===\n");
                                    printf("Carta 1: %2.f Km²\n", area);
                                    printf("Carta 2: %2.f Km²\n\n", area1);

                                    if (area > area1){
                                       pontos_carta1 += 1;
                                    }else if (area < area1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== PIB ===\n");
                                    printf("Carta 1: R$ %.2f\n", pib);
                                    printf("Carta 2: R$ %.2f\n\n", pib1);

                                    if (pib > pib1){
                                       pontos_carta1 += 1;
                                    }else if(pib < pib1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 2 && opcao_menu1 == 4) || (opcao_menu == 4 && opcao_menu1 == 2)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: Área e Número de pontos turisticos ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nÁrea: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade, area, numeros_pontos_turisticos);
                                    printf("--- Carta 2 (%s) ---\nÁrea: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade1, area1, numeros_pontos_turisticos1);

                                    printf("=== Área ===\n");
                                    printf("Carta 1: %.2f Km²\n", area);
                                    printf("Carta 2: %.2f Km²\n\n", area1);

                                    if (area > area1){
                                       pontos_carta1 += 1;
                                    }else if (area < area1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Número de pontos turisticos ===\n");
                                    printf("Carta 1: %d\n", numeros_pontos_turisticos);
                                    printf("Carta 2: %d\n\n", numeros_pontos_turisticos1);

                                    if (numeros_pontos_turisticos > numeros_pontos_turisticos1){
                                       pontos_carta1 += 1;
                                    }else if(numeros_pontos_turisticos < numeros_pontos_turisticos1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 2 && opcao_menu1 == 5) || (opcao_menu == 5 && opcao_menu1 == 2)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: Área e Densidade demográfica ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nÁrea: %u \nDensidade demográfica: %.2f\n\n", nome_cidade, area, densidade_populacional);
                                    printf("--- Carta 2 (%s) ---\nÁrea: %u \nDensidade demográfica: %.2f\n\n", nome_cidade1, area1, densidade_populacional1);

                                    printf("=== Área ===\n");
                                    printf("Carta 1: %.2f Km²\n", area);
                                    printf("Carta 2: %.2f Km²\n\n", area1);

                                    if (area > area1){
                                       pontos_carta1 += 1;
                                    }else if (area < area1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Densidade demográfica ===\n");
                                    printf("Carta 1: %.2f hab/Km²\n", densidade_populacional);
                                    printf("Carta 2: %.2f hab/Km²\n\n", densidade_populacional1);

                                    if (densidade_populacional < densidade_populacional1){
                                       pontos_carta1 += 1;
                                    }else if(densidade_populacional > densidade_populacional1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 3 && opcao_menu1 == 4) || (opcao_menu == 4 && opcao_menu1 == 3)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: PIB e Número de pontos turisticos ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPIB: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade, pib, numeros_pontos_turisticos);
                                    printf("--- Carta 2 (%s) ---\nPIB: %u \nNúmero de pontos turisticos: %.2f\n\n", nome_cidade1, pib1, numeros_pontos_turisticos1);

                                    printf("=== PIB ===\n");
                                    printf("Carta 1: R$ %.2f\n", pib);
                                    printf("Carta 2: R$ %.2f\n\n", pib1);

                                    if (pib > pib1){
                                       pontos_carta1 += 1;
                                    }else if (pib < pib1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Número de pontos turisticos ===\n");
                                    printf("Carta 1: %d\n", numeros_pontos_turisticos);
                                    printf("Carta 2: %d\n\n", numeros_pontos_turisticos1);

                                    if (numeros_pontos_turisticos > numeros_pontos_turisticos1){
                                       pontos_carta1 += 1;
                                    }else if(numeros_pontos_turisticos < numeros_pontos_turisticos1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 3 && opcao_menu1 == 5) || (opcao_menu == 5 && opcao_menu1 == 3)){

                                    printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: PIB e Densidade demográfica ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nPIB: %u \nDensidade demográfica: %.2f\n\n", nome_cidade, pib, densidade_populacional);
                                    printf("--- Carta 2 (%s) ---\nPIB: %u \nDensidade demográfica: %.2f\n\n", nome_cidade1, pib1, densidade_populacional1);

                                    printf("=== PIB ===\n");
                                    printf("Carta 1: R$ %.2f\n", pib);
                                    printf("Carta 2: R$ %.2f\n\n", pib1);

                                    if (pib > pib1){
                                       pontos_carta1 += 1;
                                    }else if (pib < pib1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Densidade demográfica ===\n");
                                    printf("Carta 1: %.2f hab/Km²\n", densidade_populacional);
                                    printf("Carta 2: %.2f hab/Km²\n\n", densidade_populacional1);

                                    if (densidade_populacional < densidade_populacional1){
                                       pontos_carta1 += 1;
                                    }else if(densidade_populacional > densidade_populacional1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");

                            }else if((opcao_menu == 4 && opcao_menu1 == 5) || (opcao_menu == 5 && opcao_menu1 == 4)){

                                printf("************************************************************\n\n");
                                    printf("###### %s VS %s ######\n", estado, estado1);
                                    printf("=== Atributos: Número de pontos turisticos e Densidade demográfica ===\n\n");
                                    printf("--- Carta 1 (%s) ---\nNúmero de pontos turisticos: %u \nDensidade demográfica: %.2f\n\n", nome_cidade, numeros_pontos_turisticos, densidade_populacional);
                                    printf("--- Carta 2 (%s) ---\nNúmero de pontos turisticos: %u \nDensidade demográfica: %.2f\n\n", nome_cidade1, numeros_pontos_turisticos1, densidade_populacional1);

                                    printf("=== Número de pontos turisticos ===\n");
                                    printf("Carta 1: %.2f\n", numeros_pontos_turisticos);
                                    printf("Carta 2: %.2f\n\n", numeros_pontos_turisticos1);

                                    if (numeros_pontos_turisticos > numeros_pontos_turisticos1){
                                       pontos_carta1 += 1;
                                    }else if (numeros_pontos_turisticos < numeros_pontos_turisticos1){
                                        pontos_carta2 += 1;
                                    }
                               
                                    printf("=== Densidade demográfica ===\n");
                                    printf("Carta 1: %.2f hab/Km²\n", densidade_populacional);
                                    printf("Carta 2: %.2f hab/Km²\n\n", densidade_populacional1);

                                    if (densidade_populacional < densidade_populacional1){
                                       pontos_carta1 += 1;
                                    }else if(densidade_populacional > densidade_populacional1){
                                        pontos_carta2 += 1;
                                    }

                                    printf("Total: \n");
                                                                                                           
                                    printf("Carta 1 = %d pontos \nCarta 2 = %d pontos\n\n", pontos_carta1, pontos_carta2);
                                    if (pontos_carta1 > pontos_carta2){
                                        printf("--- Carta 1 (%s) venceu! ---\n", estado);
                                    }else{
                                        if (pontos_carta1 == pontos_carta2){
                                            printf("--- Empate! ---\n");
                                        }else{
                                            printf("--- Carta 2 (%s) venceu! ---\n", estado1);
                                        }
                                    }
                                    printf("************************************************************\n");
                            }                               
                        }

                    }
                } else if (comparar_novamete == 'N'){

                    printf("\nTudo bem... Comparando atributo (%d)\n\n", opcao_menu);

                    switch (opcao_menu){

                        case 1:
                            printf("************************************************************\n");
                            printf("###### %s VS %s ######\n", estado, estado1);
                            printf("Atributo: População\n");
                            printf("Carta 1 - %s: %u\n", nome_cidade, populacao);
                            printf("Carta 2 - %s: %u\n", nome_cidade1, populacao1);
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
                        break;
                        
                        case 2:
                            printf("************************************************************\n");
                            printf("###### %s VS %s ######\n", estado, estado1);
                            printf("Atributo: Área\n");
                            printf("Carta 1 - %s: %.2f Km²\n", nome_cidade, area);
                            printf("Carta 2 - %s: %.2f Km²\n", nome_cidade1, area1);
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
                        break;

                        case 3:
                            printf("************************************************************\n");
                            printf("###### %s VS %s ######\n", estado, estado1);
                            printf("Atributo: PIB\n");
                            printf("Carta 1 - %s: %.2f bilhões de reais\n", nome_cidade, pib);
                            printf("Carta 2 - %s: %.2f bilhões de reais\n", nome_cidade1, pib1);
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
                        break;

                        case 4:
                            printf("************************************************************\n");
                            printf("###### %s VS %s ######\n", estado, estado1);
                            printf("Atributo: Pontos Turísticos\n");
                            printf("Carta 1 - %s: %d\n",nome_cidade, numeros_pontos_turisticos);
                            printf("Carta 2 - %s: %d\n",nome_cidade1, numeros_pontos_turisticos1);
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
                        break;

                        case 5:
                            printf("************************************************************\n");
                            printf("###### %s VS %s ######\n", estado, estado1);
                            printf("Atributo: Desnsidade Populacional\n");
                            printf("Carta 1 - %s: %.2f hab/Km²\n", nome_cidade, densidade_populacional);
                            printf("Carta 2 - %s: %.2f hab/Km²\n", nome_cidade1, densidade_populacional1);
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
                        break;
                        
                        default:
                            printf("!!!Opção inválida!!!\n");
                        break;
                        }
                }else{
                    printf("Opção inválida!!!\n");
                }

            }  

        break;

        case 'N':

                printf("Tudo bem! Encerrrando...");
        break;

    
    }
            
    return 0;
}