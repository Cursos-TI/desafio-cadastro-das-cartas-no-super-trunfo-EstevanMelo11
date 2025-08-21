#include <stdio.h>
#include <string.h>

int main(){

//Carta A -------------------------------------------------------
    char estado_A [50], cidade_A [50], codigo_A [50];
    int pontos_turisticos_A, populacao_A;
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
    scanf("%d", &populacao_A);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_A);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_A);

    printf("Digite o PIB : ");
    scanf("%f", &pib_A);


    //Carta B -------------------------------------------------------
    char estado_B [50], cidade_B [50], codigo_B [50];
    int pontos_turisticos_B, populacao_B;
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
    scanf("%d", &populacao_B);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_B);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_B);

    printf("Digite o PIB : ");
    scanf("%f", &pib_B);
    
    //Calculos:
        //Carta A :
    float densidade_populacional_A, pib_per_capita_A;

    densidade_populacional_A = populacao_A / area_A;
    pib_per_capita_A = pib_A / populacao_A;

        //Carta B :
    float densidade_populacional_B, pib_per_capita_B;

    densidade_populacional_B = populacao_B / area_B;
    pib_per_capita_B = pib_B / populacao_B;

    //Área de apresentação de dados coletados :

        //Dados da Carta A :
    printf("\n\n- - - - - - - CARTA : %s - - - - - - -\n\n", estado_A);

    printf("Estado : %s\n", estado_A);
    printf("Código : %s\n", codigo_A);
    printf("Cidade : %s\n", cidade_A);
    printf("População : %d\n", populacao_A);
    printf("Quantidade de Pontos Turísticos : %d\n", pontos_turisticos_A);
    printf("Área : %.2f Km²\n", area_A);
    printf("PIB : R$ %.2f\n", pib_A);
    printf("Densidade Populacional : %.2f Hab/Km²\n", densidade_populacional_A);
    printf("PIB per Capita : R$ %.2f\n\n", pib_per_capita_A);

        //Dados da Carta B :
    printf("\n\n- - - - - - - CARTA : %s - - - - - - -\n\n", estado_B);

    printf("Estado : %s\n", estado_B);
    printf("Código : %s\n", codigo_B);
    printf("Cidade : %s\n", cidade_B);
    printf("População : %d\n", populacao_B);
    printf("Quantidade de Pontos Turísticos : %d\n", pontos_turisticos_B);
    printf("Área : %.2f Km²\n", area_B);
    printf("PIB : %.2f\n", pib_B);
    printf("Densidade Populacional : %.2f Hab/Km²\n", densidade_populacional_B);
    printf("PIB per Capita : R$ %.2f\n\n", pib_per_capita_B);
    

    return 0;
}