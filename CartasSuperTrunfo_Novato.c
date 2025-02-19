#include <stdio.h>

#include <string.h>



int main() {



    char carta01_estado, carta01_codigo[50], carta01_nome[50], carta02_estado, carta02_codigo[50], carta02_nome[50];

    int carta01_populacao, carta01_turistico, carta02_populacao, carta02_turistico;

    float carta01_pib, carta01_area, carta02_pib, carta02_area;

   

    printf("Cadastre a primeira carta\n\n");





    printf("Digite a letra do estado: ");

        scanf(" %c", &carta01_estado);

    getchar();

    

    printf("Digite o código da carta: ");

        fgets(carta01_codigo,50,stdin);

    carta01_codigo[strcspn(carta01_codigo, "\n")] = 0;    

    

    printf("Digite o nome da cidade: ");

        fgets(carta01_nome,50, stdin);

    carta01_nome[strcspn(carta01_nome, "\n")] = 0;



    printf("Digite a população da cidade: ");

        scanf(" %d", &carta01_populacao);

    getchar();



    printf("Digite a área da cidade: ");

        scanf(" %f", &carta01_area);

    getchar();



    printf("Digite o PIB da cidade: ");

        scanf(" %f", &carta01_pib);

    getchar();



    printf("Digite a a quantidade de pontos turísticos da cidade: ");

        scanf(" %d", &carta01_turistico);

    getchar();



    printf("\n");

        printf("Carta cadastrada com sucesso!\n");

        printf("Estado: %c\n", carta01_estado);

        printf("Código da carta: %s\n", carta01_codigo);

        printf("Nome da cidade: %s\n", carta01_nome);

        printf("População: %d\n", carta01_populacao);

        printf("Área: %.2f km²\n", carta01_area);

        printf("PIB: %.2f\n", carta01_pib);

    printf("Número de pontos turísticos: %d\n", carta01_turistico);



    printf("\n");



    printf("Cadastre a segunda carta\n\n");



    printf("Digite a letra do estado: ");

        scanf("%c", &carta02_estado);

    getchar();

    

    printf("Digite o código da carta: ");

        fgets(carta02_codigo,50,stdin);

    carta02_codigo[strcspn(carta02_codigo, "\n")] = 0;    

    

    printf("Digite o nome da cidade: ");

        fgets(carta02_nome,50, stdin);

    carta02_nome[strcspn(carta02_nome, "\n")] = 0;



    printf("Digite a população da cidade: ");

        scanf("%d", &carta02_populacao);

    getchar();



    printf("Digite a área da cidade: ");

        scanf("%f", &carta02_area);

    getchar();



    printf("Digite o PIB da cidade: ");

        scanf("%f", &carta02_pib);

    getchar();



    printf("Digite a a quantidade de pontos turísticos da cidade: ");

        scanf("%d", &carta02_turistico);

    getchar();

        

    printf("\n");

        printf("Carta cadastrada com sucesso!\n");   

        printf("Estado: %c\n", carta02_estado);

        printf("Código da carta: %s\n", carta02_codigo);

        printf("Nome da cidade: %s\n", carta02_nome);

        printf("População: %d\n", carta02_populacao);

        printf("Área: %.2f km²\n", carta02_area);

        printf("PIB: %.2f\n", carta02_pib);

    printf("Número de pontos turísticos: %d\n", carta02_turistico);

        

    return 0; 

}
