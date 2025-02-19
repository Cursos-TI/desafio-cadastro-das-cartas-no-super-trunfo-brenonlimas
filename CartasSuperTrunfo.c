#include <stdio.h>
#include <string.h>


int main() {

    

    char carta01_estado, carta01_codigo[50], carta01_nome[50], carta02_estado, carta02_codigo[50], carta02_nome[50];
    int carta01_turistico, carta02_turistico;
    unsigned long int carta01_populacao, carta02_populacao;
    float carta01_area, carta01_densidade, carta01_densidade_invert, carta01_pib,carta01_PIBcapita, carta01_super, carta02_area, carta02_densidade, carta02_densidade_invert, carta02_pib, carta02_PIBcapita, carta02_super;
 
    
   
    printf("Cadastre a primeira carta\n\n");

        printf("Digite a letra do estado: ");
            scanf("%c", &carta01_estado);
        getchar();
    
        printf("Digite o código da carta: ");
            fgets(carta01_codigo,50,stdin);
        carta01_codigo[strcspn(carta01_codigo, "\n")] = 0;   

        printf("Digite o nome da cidade: ");
            fgets(carta01_nome,50, stdin);
        carta01_nome[strcspn(carta01_nome, "\n")] = 0;

        printf("Digite a população da cidade: ");
            scanf(" %lu", &carta01_populacao);
        getchar();

        printf("Digite a área da cidade: ");
            scanf(" %f", &carta01_area);
        getchar();

        printf("Digite o PIB da cidade em reais: ");
            scanf(" %f", &carta01_pib);
        getchar();

        printf("Digite a a quantidade de pontos turísticos da cidade: ");
            scanf(" %d", &carta01_turistico);
        getchar();
    printf("\n");

    carta01_densidade = (double)carta01_populacao / carta01_area; //calcula densidade populacional.
        carta01_densidade_invert = -carta01_densidade; //inverte valor da densidade da carta 1 para comparação
        carta01_PIBcapita = carta01_pib / carta01_populacao; //calcula pib per capita.
        carta01_pib /= 1000000000; // transforma pib em bilhões.
    carta01_super = (carta01_populacao + carta01_area + carta01_densidade_invert + carta01_pib + carta01_PIBcapita + carta01_turistico); // calcula super poder carta 1
        

    printf("Carta cadastrada com sucesso!\n");
        printf("Estado: %c\n", carta01_estado);
        printf("Código da carta: %s\n", carta01_codigo);
        printf("Nome da cidade: %s\n", carta01_nome);
        printf("População: %lu\n", carta01_populacao);
        printf("Área: %.2f km²\n", carta01_area);            
        printf("Densidade populacional: %.2f pessoas/km² \n", carta01_densidade);
        printf("PIB: %.2f bilhões de reais\n", carta01_pib);
        printf("PIB per capita: %.2f reais\n", carta01_PIBcapita);
        printf("Número de pontos turísticos: %d\n", carta01_turistico);
        printf("Super poder: %.2f\n", carta01_super);       
    printf("\n");

    
    printf("Cadastre a segunda carta\n\n");
    
        printf("Digite a letra do estado: ");
            scanf(" %c", &carta02_estado);
        getchar();
    
        printf("Digite o código da carta: ");
            fgets(carta02_codigo,50,stdin);
        carta02_codigo[strcspn(carta02_codigo, "\n")] = 0;    
    
        printf("Digite o nome da cidade: ");
            fgets(carta02_nome,50, stdin);
        carta02_nome[strcspn(carta02_nome, "\n")] = 0;

        printf("Digite a população da cidade: ");
            scanf(" %lu", &carta02_populacao);
        getchar();

        printf("Digite a área da cidade: ");
            scanf(" %f", &carta02_area);
        getchar();

        printf("Digite o PIB da cidade em reais: ");
            scanf(" %f", &carta02_pib);
        getchar();

        printf("Digite a a quantidade de pontos turísticos da cidade: ");
            scanf(" %d", &carta02_turistico);
        getchar();
    
    printf("\n");
    

    carta02_densidade = (double)carta02_populacao / carta01_area; //calcula densidade populacional.
        carta02_densidade_invert = -carta02_densidade; //inverte valor da densidade da carta 2 para comparação
        carta02_PIBcapita = carta02_pib / carta02_populacao; //calcula pib per capita.
        carta02_pib /= 1000000000; // transforma pib em bilhões.
    carta02_super = (carta02_populacao + carta02_area + carta02_densidade_invert + carta02_pib + carta02_PIBcapita + carta02_turistico); // calcula super poder carta 2
        

    

    printf("Carta cadastrada com sucesso!\n"); 
        printf("Estado: %c\n", carta02_estado);
        printf("Código da carta: %s\n", carta02_codigo);
        printf("Nome da cidade: %s\n", carta02_nome);
        printf("População: %lu\n", carta02_populacao);
        printf("Área: %.2f km²\n", carta02_area);            
        printf("Densidade populacional: %.2f pessoas/km² \n", carta02_densidade);
        printf("PIB: %.2f bilhões de reais\n", carta02_pib);
        printf("PIB per capita: %.2f reais\n", carta02_PIBcapita);
        printf("Número de pontos turísticos: %d\n", carta02_turistico);
        printf("Super poder: %.2f\n", carta02_super);
    printf("\n");
    

    printf("\n");

    printf("%s    X    %s \n", carta01_nome, carta02_nome);
        printf("\n");
        printf("POPULAÇÃO: %s  %lu  | %s  %lu     | RESULTADO: %d\n", carta01_nome, carta01_populacao, carta02_nome, carta02_populacao, carta01_populacao>carta02_populacao); 
        printf("ÁREA: %s  %.2f  | %s  %.2f     | RESULTADO: %d\n", carta01_nome, carta01_area, carta02_nome, carta02_area, carta01_area>carta02_area);
        printf("DENSIDADE POPULACIONAL: %s  %.2f  | %s  %.2f     | RESULTADO: %d\n", carta01_nome, carta01_densidade, carta02_nome, carta02_densidade, carta01_densidade_invert>carta02_densidade_invert);
        printf("PIB: %s  %.2f bilhões de reais  | %s  %.2f bilhões de reais    | RESULTADO: %d\n", carta01_nome, carta01_pib, carta02_nome, carta02_pib, carta01_pib>carta02_pib);
        printf("PIB PER CAPITA: %s  %.2f reais  | %s  %.2f reais    | RESULTADO: %d\n", carta01_nome, carta01_PIBcapita, carta02_nome, carta02_PIBcapita, carta01_PIBcapita>carta02_PIBcapita);
        printf("PONTOS TURÍSTICOS: %s  %d  | %s  %d    | RESULTADO: %d\n", carta01_nome, carta01_turistico, carta02_nome, carta02_turistico, carta01_turistico>carta02_turistico);
    printf("SUPER PODER: %s  %.2f  | %s  %.2f   | RESULTADO: %d\n\n", carta01_nome, carta01_super, carta02_nome, carta02_super, carta01_super>carta02_super);    
        
    return 0; 
}  