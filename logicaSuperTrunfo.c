#include <stdio.h>

int main(){                             
    
//Acrescentando as variáveis

    char estado[10], codigo[10], nome_cidade[20], estado2[10], codigo2[10], nome_cidade2[20], Y[10];
    float populacao, area, PIB, populacao2, area2, PIB2, valor1 = 0, valor1_2 = 0, valor2 = 0, valor2_2 = 0;
    int pontos_turisticos, pontos_turisticos2, atributo1, atributo1_2, atributo2, atributo2_2;

//Início dos comandos e das entradas de dados.

    printf("Olá, Bem-Vindo(a) ao jogo Cartas Super Trunfo!\n");
    printf("Podemos começar com o estado, você podera escolher de A à H.\n");
    printf(" Qual deseja escolher? ");                                              scanf("%s", &estado);
    printf("Agora, escolha um código da carta, que pode ser de 'A01' à 'A04': ");   scanf("%s", &codigo);
    printf("O nome da cidade: ");                                                   scanf("%s", &nome_cidade);
    printf("A quantidade de cidadãos: ");                                           scanf("%f", &populacao);
    printf("Quantos km² tem: ");                                                    scanf("%f", &area);
    printf("Quanto é o PIB (Produto Interno Bruto): ");                             scanf("%f", &PIB);
    printf("Por ultimo, a quantidade de pontos turísticos: ");                      scanf("%d", &pontos_turisticos);
    printf("\n");
    
//Acrecentando mais atributos

    float densidade_p = populacao / area, pib_per_cap = PIB / populacao;
    float super_poder = populacao + area + PIB + pontos_turisticos + (1.0 / densidade_p) + pib_per_cap;

//Aqui vai ser aonde vai começar a ser exibido os dados que foram determinados.
    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %.0f pessoas.\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB);
    printf("Quantidade de pontos turísticos: %1d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f Hab/Km²\n", 1 / densidade_p);
    printf("PIB per capita: R$%.2f\n", pib_per_cap);
    printf("Super Poder: %.2f de poder!\n", super_poder);
    printf("\n");
    printf("\n");

//Recomeçaando o registramento de outra carta para a comparação.

    printf("Hora de registramos a segunda carta\n");
    printf("\n");    
    printf("Escolha o estado (A à H): ");                           scanf("%s", &estado2);
    printf("Escolha um código da carta (A01 à A04): ");             scanf("%s", &codigo2);
    printf("O nome da cidade: ");                                   scanf("%s", &nome_cidade2);
    printf("A quantidade de cidadãos: ");                           scanf("%f", &populacao2);
    printf("Quantos km² tem: ");                                    scanf("%f", &area2);
    printf("Quanto é o PIB (Produto Interno Bruto): ");             scanf("%f", &PIB2);
    printf("Por ultimo, a quantidade de pontos turísticos: ");      scanf("%d", &pontos_turisticos2);
    printf("\n");

    float densidade_p2 = populacao2 / area2, pib_per_cap2 = PIB2 / populacao2;
    float super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + (1.0 / densidade_p2) + pib_per_cap2;


    printf("Agora vamos para Carta 2\n");
    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %.0f pessoas.\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB2);
    printf("Quantidade de pontos turísticos: %1d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", 1 / densidade_p2);
    printf("PIB per capita: R$%.2f\n", pib_per_cap2);
    printf("Super Poder: %.2f de poder!\n", super_poder2);    
    printf("\n");
    printf("\n");

//Comparação das cartas.

    printf("Prosseguir para a comparação?\n");
    scanf("%s", &Y);
    printf("\n");
    printf("\n");

    printf("Comparação das cartas.\n");
    printf("\n");

//Primeiro Atributo da carta 1

    printf("Escolha o primeiro atributo para comparar (1 a 7):\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per capita.\n");
    printf("7. Super Poder.\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
    case 1:
        if ( populacao > populacao2 ) {
        printf("População: Carta 1 ganhou com %d de cidadãos!\n", populacao);
        printf("Enquanto a Carta 2 perdeu com %d de cidadãos!\n", populacao2);
        }   else if ( populacao < populacao2 ) {
        printf("População: Carta 2 ganhou com %d de cidadãos!\n", populacao2);
        printf("Enquanto a Carta 1 perdeu com %d de cidadãos!\n", populacao);
        }    else if ( populacao = populacao2 ) {
        printf("População: Ambas as cartas empataram com %d de cidadões!\n", populacao);
        }
    break;
    case 2:
        if ( area > area2 ) {
        printf("Área: Carta 1 ganhou com %.2f Km²!\n", area);
        printf("Enquanto a Carta 2 perdeu com %.2f Km²!\n", area2);
        }   else if ( area < area2 ) {
        printf("Área: Carta 2 ganhou com %.2f Km²!\n", area2);
        printf("Enquanto a Carta 1 perdeu com %.2f Km²!\n", area);
        }   else if ( area = area2 ) {
        printf("Área: Ambas as cartas empataram com %.2fKm²!\n", area);
        }
    break;
    case 3:
        if ( PIB > PIB2 ) {
        printf("PIB: Carta 1 ganhou com R$%.2f de PIB!\n", PIB);
        printf("Enquanto a Carta 2 perdeu com R$%.2f de PIB!\n", PIB2);
        }   else if ( PIB < PIB2 ) {
        printf("PIB: Carta 2 ganhou com R$%.2f de PIB!\n", PIB2);
        printf("Enquanto a Carta 1 perdeu com R$%.2f de PIB!\n", PIB);
        }    else if ( PIB = PIB2 ) {
        printf("PIB: Ambas as cartas empataram com R$%.2f de PIB!\n", PIB);
        }
    break;
    case 4:
        if ( pontos_turisticos > pontos_turisticos2 ) {
        printf("Pontos turísticos: Carta 1 ganhou com %d pontos turísticos!\n", pontos_turisticos);
        printf("Enquanto a Carta 2 perdeu com %d pontos turísticos!\n", pontos_turisticos2);
        }   else if ( pontos_turisticos < pontos_turisticos2 ) {
        printf("Pontos turísticos: Carta 2 ganhou com %d pontos turísticos!\n", pontos_turisticos2);
        printf("Enquanto a Carta 1 perdeu com %d pontos turísticos!\n", pontos_turisticos);
        }   else if ( pontos_turisticos = pontos_turisticos2 ) {
        printf("Pontos turísticos: Ambas as cartas empataram com %d de cidadões!\n", pontos_turisticos);
        }
    break;
    case 5:
        if ( densidade_p < densidade_p2 ) {
        printf("Densidade populacional: Carta 1 ganhou com %.2f Hab/Km²\n", 1 / densidade_p);
        printf("Enquanto a Carta 2 perdeu com %.2fHab/Km²\n", densidade_p2);
        }   else if ( densidade_p > densidade_p2 ) {
        printf("Densidade populacional: Carta 2 ganhou com %.2f Hab/Km²\n", 1 / densidade_p2);
        printf("Enquanto a Carta 1 perdeu com %.2fHab/Km²\n", densidade_p);
        }   else if ( densidade_p = densidade_p2 ) {
        printf("Densidade populacional: Ambas as cartas empataram com %.2f de cidadões!\n", 1 / densidade_p);
        }
    break;
    case 6:
        if ( pib_per_cap > pib_per_cap2 ) {
        printf("PIB per capita: Carta 1 ganhou com R$%.2f\n", pib_per_cap);
        printf("Enquanto a Carta 2 perdeu com R$%.2f\n", pib_per_cap2);
        }   else if ( pib_per_cap < pib_per_cap2 ) {
        printf("PIB per capita: Carta 2 ganhou com R$%.2f\n", pib_per_cap2);
        printf("Enquanto a Carta 1 perdeu com R$%.2f\n", pib_per_cap);
        }   else if ( pib_per_cap = pib_per_cap2 ) {
        printf("PIB per capita: Ambas as cartas empataram com R$%.2f\n", pib_per_cap);
        }
    break;
    case 7:
        if ( super_poder > super_poder2 ) {
        printf("Super Poder: Carta 1 ganhou com %.2f de poder!\n", super_poder);
        printf("Enquanto a Carta 2 perdeu com %.2f de poder!\n", super_poder2);
        }   else if ( super_poder < super_poder2 ) {
        printf("Super Poder: Carta 2 ganhou com %.2f de poder!\n", super_poder2);
        printf("Enquanto a Carta 1 perdeu com %.2f de poder!\n", super_poder);
        }   else if ( super_poder = super_poder2 ) {
        printf("Super Poder: Ambas as cartas empataram com %.2f de poder!\n", super_poder);
        }
    break;
    default:
        printf("Atributo Não-existente!\n");
    }

    switch(atributo1){
        case 1:
        printf("Escolha o segundo atributo para comparar (2 a 7), diferente do primeiro:\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 2:
        printf("Escolha o segundo atributo para comparar (1, 3, 4, 5, 6 e 7), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 3:
        printf("Escolha o segundo atributo para comparar (1, 2, 4, 5, 6 e 7), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("4. Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 4:
        printf("Escolha o segundo atributo para comparar (1, 2, 3, 5, 6 e 7), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 5:
        printf("Escolha o segundo atributo para comparar (1, 2, 3, 4, 6 e 7), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turísticos.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 6:
        printf("Escolha o segundo atributo para comparar (1, 2, 3, 4, 5 e 7), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributo2);
        break;
        case 7:
        printf("Escolha o segundo atributo para comparar (1, 2, 3, 4, 5 e 6), diferente do primeiro:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per capita.\n");
        scanf("%d", &atributo2);
        break;
        default:
        printf("Atributo não existente!\n");
    }
    
    switch (atributo2) {
        case 1:
            if ( populacao > populacao2 ) {
            printf("População: Carta 1 ganhou com %d de cidadãos!\n", populacao);
            printf("Enquanto a Carta 2 perdeu com %d de cidadãos!\n", populacao2);
            }   else if ( populacao < populacao2 ) {
            printf("População: Carta 2 ganhou com %d de cidadãos!\n", populacao2);
            printf("Enquanto a Carta 1 perdeu com %d de cidadãos!\n", populacao);
            }    else if ( populacao = populacao2 ) {
            printf("População: Ambas as cartas empataram com %d de cidadões!\n", populacao);
            }
        break;
        case 2:
            if ( area > area2 ) {
            printf("Área: Carta 1 ganhou com %.2f Km²!\n", area);
            printf("Enquanto a Carta 2 perdeu com %.2f Km²!\n", area2);
            }   else if ( area < area2 ) {
            printf("Área: Carta 2 ganhou com %.2f Km²!\n", area2);
            printf("Enquanto a Carta 1 perdeu com %.2f Km²!\n", area);
            }   else if ( area = area2 ) {
            printf("Área: Ambas as cartas empataram com %.2fKm²!\n", area);
            }
        break;
        case 3:
            if ( PIB > PIB2 ) {
            printf("PIB: Carta 1 ganhou com R$%.2f de PIB!\n", PIB);
            printf("Enquanto a Carta 2 perdeu com R$%.2f de PIB!\n", PIB2);
            }   else if ( PIB < PIB2 ) {
            printf("PIB: Carta 2 ganhou com R$%.2f de PIB!\n", PIB2);
            printf("Enquanto a Carta 1 perdeu com R$%.2f de PIB!\n", PIB);
            }    else if ( PIB = PIB2 ) {
            printf("PIB: Ambas as cartas empataram com R$%.2f de PIB!\n", PIB);
            }
        break;
        case 4:
            if ( pontos_turisticos > pontos_turisticos2 ) {
            printf("Pontos turísticos: Carta 1 ganhou com %d pontos turísticos!\n", pontos_turisticos);
            printf("Enquanto a Carta 2 perdeu com %d pontos turísticos!\n", pontos_turisticos2);
            }   else if ( pontos_turisticos < pontos_turisticos2 ) {
            printf("Pontos turísticos: Carta 2 ganhou com %d pontos turísticos!\n", pontos_turisticos2);
            printf("Enquanto a Carta 1 perdeu com %d pontos turísticos!\n", pontos_turisticos);
            }   else if ( pontos_turisticos = pontos_turisticos2 ) {
            printf("Pontos turísticos: Ambas as cartas empataram com %d de cidadões!\n", pontos_turisticos);
            }
        break;
        case 5:
            if ( densidade_p < densidade_p2 ) {
            printf("Densidade populacional: Carta 1 ganhou com %.2f Hab/Km²\n", 1 / densidade_p);
            printf("Enquanto a Carta 2 perdeu com %.2fHab/Km²\n", densidade_p2);
            }   else if ( densidade_p > densidade_p2 ) {
            printf("Densidade populacional: Carta 2 ganhou com %.2f Hab/Km²\n", 1 / densidade_p2);
            printf("Enquanto a Carta 1 perdeu com %.2fHab/Km²\n", densidade_p);
            }   else if ( densidade_p = densidade_p2 ) {
            printf("Densidade populacional: Ambas as cartas empataram com %.2f de cidadões!\n", 1 / densidade_p);
            }
        break;
        case 6:
            if ( pib_per_cap > pib_per_cap2 ) {
            printf("PIB per capita: Carta 1 ganhou com R$%.2f\n", pib_per_cap);
            printf("Enquanto a Carta 2 perdeu com R$%.2f\n", pib_per_cap2);
            }   else if ( pib_per_cap < pib_per_cap2 ) {
            printf("PIB per capita: Carta 2 ganhou com R$%.2f\n", pib_per_cap2);
            printf("Enquanto a Carta 1 perdeu com R$%.2f\n", pib_per_cap);
            }   else if ( pib_per_cap = pib_per_cap2 ) {
            printf("PIB per capita: Ambas as cartas empataram com R$%.2f\n", pib_per_cap);
            }
        break;
        case 7:
            if ( super_poder > super_poder2 ) {
            printf("Super Poder: Carta 1 ganhou com %.2f de poder!\n", super_poder);
            printf("Enquanto a Carta 2 perdeu com %.2f de poder!\n", super_poder2);
            }   else if ( super_poder < super_poder2 ) {
            printf("Super Poder: Carta 2 ganhou com %.2f de poder!\n", super_poder2);
            printf("Enquanto a Carta 1 perdeu com %.2f de poder!\n", super_poder);
            }   else if ( super_poder = super_poder2 ) {
            printf("Super Poder: Ambas as cartas empataram com %.2f de poder!\n", super_poder);
            }
        break;
        default:
            printf("Atributo Não-existente!\n");
        }

        return 0;
        
}