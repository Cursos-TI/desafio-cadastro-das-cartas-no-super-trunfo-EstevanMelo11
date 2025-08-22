#include <stdio.h>
#include <string.h>

int main(){

//Carta A -------------------------------------------------------
    char estado_A [50], cidade_A [50], codigo_A [50];
    int pontos_turisticos_A;
    unsigned long int populacao_A;
    float area_A, pib_A;

    printf("* * * * * * * SUPER-TRUNFO * * * * * * *\n\n\n");

    printf("- _ - ' - _ - CARTA A - _ - ' - _ -\n\n");

    //Área de pedido e entrada de dados :
        //Char : 
    printf("Digite o Nome do Estado : ");
    fgets(estado_A, 50, stdin);
    estado_A[strcspn(estado_A,"\n")] = 0;

    printf("Digite o Código da Carta : ");
    fgets(codigo_A, 50, stdin);
    codigo_A[strcspn(codigo_A,"\n")] = 0;

    printf("Digite o Nome da Cidade : ");
    fgets(cidade_A, 50, stdin);
    cidade_A[strcspn(cidade_A,"\n")] = 0;
    
        //Int :
    printf("Digite a População : ");
    scanf("%lu", &populacao_A);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_A);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_A);

    printf("Digite o PIB : ");
    scanf("%f", &pib_A);


    //Carta B -------------------------------------------------------
    char estado_B [50], cidade_B [50], codigo_B [50];
    int pontos_turisticos_B;
    unsigned long int populacao_B;
    float area_B, pib_B;

    printf("\n- _ - ' - _ - CARTA B - _ - ' - _ -\n\n");

    //Área de pedido e entrada de dados :
        //Char : 
    printf("");
    fgets(estado_B, 50, stdin);
    estado_B[strcspn(estado_B,"\n")] = 0;

    printf("Digite o Nome do Estado : ");
    fgets(estado_B, 50, stdin);
    estado_B[strcspn(estado_B,"\n")] = 0;

    printf("Digite o Código da Carta : ");
    fgets(codigo_B, 50, stdin);
    codigo_B[strcspn(codigo_B,"\n")] = 0;

    printf("Digite o Nome da Cidade : ");
    fgets(cidade_B, 50, stdin);
    cidade_B[strcspn(cidade_B,"\n")] = 0;
    
        //Int :
    printf("Digite a População : ");
    scanf("%lu", &populacao_B);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_B);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_B);

    printf("Digite o PIB : ");
    scanf("%f", &pib_B);
    
    //Calculos:

        //Calculos de atributos :

            //Carta A :
            float densidade_populacional_A, pib_per_capita_A, super_poder_A;

            densidade_populacional_A = populacao_A / area_A;
            pib_per_capita_A = pib_A / populacao_A;

            super_poder_A = (float)(populacao_A + pontos_turisticos_A + area_A + pib_A + (1 / densidade_populacional_A) + pib_per_capita_A);

            //Carta B :
            float densidade_populacional_B, pib_per_capita_B, super_poder_B;

            densidade_populacional_B = populacao_B / area_B;
            pib_per_capita_B = pib_B / populacao_B;

            super_poder_B = (float)(populacao_B + pontos_turisticos_B + area_B + pib_B + (1 / densidade_populacional_B) + pib_per_capita_B);

        //Calculos de Resultados : 

            //Carta A :
            int R_pontos_turisticos_A, R_populacao_A, R_area_A, R_pib_A, R_super_poder_A, R_densidade_populacional_A, R_pib_per_capita_A;

            R_pontos_turisticos_A = pontos_turisticos_A > pontos_turisticos_B;
            R_populacao_A = populacao_A > populacao_B;
            R_area_A = area_A > area_B;
            R_pib_A = pib_A > pib_B;
            R_super_poder_A = super_poder_A > super_poder_B;
            R_densidade_populacional_A = (int) ((1 / densidade_populacional_A) > (1 / densidade_populacional_B));
            R_pib_per_capita_A = pib_per_capita_A > pib_per_capita_B;

            //Carta B : 
            int R_pontos_turisticos_B, R_populacao_B, R_area_B, R_pib_B, R_super_poder_B, R_densidade_populacional_B, R_pib_per_capita_B;

            R_pontos_turisticos_B = pontos_turisticos_B > pontos_turisticos_A;
            R_populacao_B = populacao_B > populacao_A;
            R_area_B = area_B > area_A;
            R_pib_B = pib_B > pib_A;
            R_super_poder_B = super_poder_B > super_poder_A;
            R_densidade_populacional_B = (int) ((1 / densidade_populacional_B) > (1 / densidade_populacional_A));
            R_pib_per_capita_B = pib_per_capita_B > pib_per_capita_A;

    //Área de apresentação de dados coletados :

        //Dados da Carta A :
    printf("\n------- Resultados do Combate entre as Cartas : %s [%s] VS %s [%s] -------\n[Vencedor = 1]\n[Perdedor = 0]\n\n", estado_A, cidade_A, estado_B, cidade_B);
    
    printf("- - - - - - - CARTA : %s - - - - - - -\n\n", estado_A);

    printf("Estado : %s \n", estado_A);
    printf("Código : %s\n", codigo_A);
    printf("Cidade : %s\n", cidade_A);
    printf("População : %d [%d]\n", populacao_A, R_populacao_A);
    printf("Pontos Turísticos : %d [%d]\n", pontos_turisticos_A, R_pontos_turisticos_A);
    printf("Área : %.2f Km² [%d]\n", area_A, R_area_A);
    printf("PIB : R$ %.2f [%d]\n", pib_A, R_pib_A);
    printf("Densidade Populacional : %.2f Hab/Km² [%d]\n", densidade_populacional_A, R_densidade_populacional_A);
    printf("PIB per Capita : R$ %.2f [%d]\n", pib_per_capita_A, R_pib_per_capita_A);
    printf("Super Poder : %.2f Pts. [%d]\n\n", super_poder_A, R_super_poder_A);

        //Dados da Carta B :
    printf("\n- - - - - - - CARTA : %s - - - - - - -\n\n", estado_B);

    printf("Estado : %s\n", estado_B);
    printf("Código : %s\n", codigo_B);
    printf("Cidade : %s\n", cidade_B);
    printf("População : %d [%d]\n", populacao_B, R_populacao_B);
    printf("Pontos Turísticos : %d [%d]\n", pontos_turisticos_B, R_pontos_turisticos_B);
    printf("Área : %.2f Km² [%d]\n", area_B, R_area_B);
    printf("PIB : R$ %.2f [%d]\n", pib_B, R_pib_B);
    printf("Densidade Populacional : %.2f Hab/Km² [%d]\n", densidade_populacional_B, R_densidade_populacional_B);
    printf("PIB per Capita : R$ %.2f [%d]\n", pib_per_capita_B, R_pib_per_capita_B);
    printf("Super Poder : %.2f Pts. [%d]\n\n", super_poder_B, R_super_poder_B);


    return 0;
}