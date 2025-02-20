#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //definindo as variáveis que serão usadas para este módulo básico
    char estado_1[20], codigo_1[20], cidade_1[20];
    int numero_pontos_turisticos_1;
    unsigned long int populacao_1, super_poder_1;
    float area_em_km_1, PIB_1, PIB_per_capita_1, densidade_populacional_1;
    //separando por A e B    
    char estado_2[20], codigo_2[20], cidade_2[20];
    int numero_pontos_turisticos_2;
    unsigned long int populacao_2, super_poder_2;
    float area_em_km_2, PIB_2, PIB_per_capita_2, densidade_populacional_2;

    //Introdução ao sistema
    printf("Bem Vindo ao Super Trunfo: Paises!\n");
    printf("Para comecar, coletaremos os dados para cada carta\n");
   
    //Coletar primeiro o estado
    printf("Insira o ESTADO como uma letra de A a H. Ele é onde suas cidades estarao localizadas:\n");
    scanf (" %[^\n]", estado_1);
    printf("\nMuito bem!\nLembrando que todas as cidades de %s deverao ter a mesma letra inicial no codigo.\n",estado_1);
    
    //Coletando a cidade
    printf("Agora que já temos o seu estado é hora de definir a CIDADE!\n");
    printf("Insira a seguir o nome da sua cidade:\n");
    scanf(" %20[^\n]", cidade_1);
    printf("Muito bem, você inseriu a cidade de %s", cidade_1);
   
    //Coletando o código
    printf("\n\nAgora chegou a hora de definir o código da sua carta.\n");
    
    //Explicando como deve ser formatado o código já que, neste nível do desafio, não foi pedido que o código fosse dado pelo sistema
    printf("Os códigos devem ter uma letra de A a H(representando o ESTADO) e um numero de 01 a 04 (representando a cidade).\n");
    printf("\nSeu código deverá ser formatado com uma letra e dois digitos numericos.\n");
    printf(">>EXEMPLO: D03<<\n");
    printf("Digite o código da sua carta! Lembrando que seu estado foi %s \n", estado_1);
    scanf("%s", codigo_1);
    
    //Coletando dados das cartas
    printf("Otimo, agora temos todos os dados necessarios para comecar a cadastrar sua carta");
    
    //Coletando a população em milhares de pessoas
    printf("\nInsira aqui a POPULACAO da sua cidade\n");
    scanf("%ld", &populacao_1);
    
    //Coletando a AREA
    printf("\nInsira aqui a AREA EM KM² da sua cidade\n");
    scanf("%f", &area_em_km_1);
    
    //Coletando o PIB
    printf("\nInsira aqui o PIB da sua cidade\n");
    scanf("%f", &PIB_1);
    //Calculando o PIB per Capita e Densidade populacional
    PIB_per_capita_1 =  PIB_1 / (float) populacao_1;
    densidade_populacional_1 = (float) populacao_1/area_em_km_1;

    //Coletando NUMERO DE PONTOS TURÍSTICOS
    printf("\nInsira aqui o NUMERO DE PONTOS TURISTICOS da sua cidade:");
    scanf("%d", &numero_pontos_turisticos_1);

    printf("\nMuito bem! Você inseriu os dados necessários para uma carta.\nAo fim do cadastro também é calculado o Super Poder da sua carta, que será revelado ao fim de ambos cadastros.");
    printf("\n\nAgora vamos cadastrar mais uma para que você possa ter um jogo?");
    
    //Coletando os dados para a carta 2
    printf("Insira o ESTADO como uma letra de A a H:\n");
    scanf ("%s", estado_2);
    printf("\nMuito bem!\nLembrando que todas as cidades de %s deverao ter a mesma letra inicial no codigo.\n",estado_2);
    
    //Coletando a cidade
    printf("Insira o nome da sua cidade:\n");
    scanf(" %20[^\n]", cidade_2);
    printf("Muito bem, você inseriu a cidade de %s", cidade_2);
   
    //Coletando o código
    printf("\n\nAgora chegou a hora de definir o código da sua carta.\n");
    printf("Digite o código da sua carta! Lembrando que seu estado foi %s \n", estado_2);
    scanf("%s", codigo_2);
    
    //Coletando dados das cartas
    printf("Otimo, agora temos todos os dados necessarios para comecar a cadastrar sua carta");
    
    //Coletando a população em milhares de pessoas
    printf("\nInsira aqui a POPULACAO da sua cidade\n");
    scanf("%ld", &populacao_2);
    
    //Coletando a AREA
    printf("\nInsira aqui a AREA EM KM² da sua cidade\n");
    scanf("%f", &area_em_km_2);
    
    //Coletando o PIB
    printf("\nInsira aqui o PIB da sua cidade\n");
    scanf("%f", &PIB_2);
    
    //Coletando NUMERO DE PONTOS TURÍSTICOS
    printf("\nInsira aqui o NUMERO DE PONTOS TURISTICOS da sua cidade:");
    scanf("%d", &numero_pontos_turisticos_2);
    
    //Calculando o PIB per Capita e Densidade populacional
    PIB_per_capita_2 = PIB_2 / (float) populacao_2;
    densidade_populacional_2 = populacao_2/area_em_km_2;
    
    //Calculando o Super-Poder
    super_poder_1= (float) populacao_1 + numero_pontos_turisticos_1 + PIB_1 + area_em_km_1 + densidade_populacional_1 + PIB_per_capita_1;
    super_poder_2= (float) populacao_2 + numero_pontos_turisticos_2 + PIB_2 + area_em_km_2 + densidade_populacional_2 + PIB_per_capita_2;
    //Demonstrando os resultados
    printf("\nParabens! Você conclui o cadastro de suas CARTAS,aqui estão as estatísticas das cartas 1 e 2");

    //Dados da carta 1
    printf("\nCarta 1:");
    printf("\nEstado: %s", estado_1);
    printf("\nCidade: %s", cidade_1);
    printf("\nCódigo: %s", codigo_1);
    printf("\nPopulacao: %ld de pessoas", populacao_1);
    printf("\nNumero de pontos turisticos: %d pontos turisticos", numero_pontos_turisticos_1);
    printf("\nPIB: %.2f bilhões de reais", PIB_1);
    printf("\nArea em Km²: %.2fKm²", area_em_km_1);
    printf("\nDensidade populacional: %.2f hab/KM²", densidade_populacional_1);
    printf("\nPIB per capita: %f reais", PIB_per_capita_1);
    printf("\nO valor do SUPER PODER da Carta 1 é %ld", super_poder_1);
    

    printf("\n\nCarta 2:");
    printf("\nEstado: %s", estado_2);
    printf("\nCidade: %s", cidade_2);
    printf("\nCódigo: %s", codigo_2);
    printf("\nPopulacao: %ld", populacao_2);
    printf("\nNumero de pontos turisticos: %d", numero_pontos_turisticos_2);
    printf("\nPIB: %.2f bilhões de reais", PIB_2);
    printf("\nArea em Km²: %.2fKm²", area_em_km_2);
    printf("\nDensidade populacional: %.2f hab/KM²", densidade_populacional_2);
    printf("\nPIB per capita: %Bf reais", PIB_per_capita_2);
    printf("\nO valor do SUPER PODER da Carta 2 é %ld", super_poder_2);
    
    //Explicando o processo de comparação
    printf("\n***Agora chegou a hora de comparar os atributos de ambas as cartas!***\n");
    printf("A comparação sera feita atributo por atributo.\n");
    printf("\n\nQuando o resultado for 1 significa que a CARTA 1 VENCEU.\nQuando o resultado for 0 significa que a CARTA 2 VENCEU\n");
    
    //Organizando os dados para imprimir os resultados
    int resultado_populacao, resultado_turisticos, resultado_PIB, resultado_area, resultado_densidade, resultado_pibpercapita;
    resultado_populacao = populacao_1 > populacao_2;
    resultado_turisticos = numero_pontos_turisticos_1 > numero_pontos_turisticos_2;
    resultado_PIB = PIB_1 > PIB_2;
    resultado_area = area_em_km_1 > area_em_km_2;
    resultado_densidade = densidade_populacional_1 < densidade_populacional_2;//essa é menor porque quanto menor a densidade populacional, melhor
    resultado_pibpercapita = PIB_per_capita_1 > PIB_per_capita_2;
    //impressão dos resultados
    printf("\n\nOs resultados são!\n");
    printf("Resultado de População: %d\n", resultado_populacao);
    printf("Resultado de Pontos Turísticos: %d\n", resultado_turisticos);
    printf("Resultado PIB: %d\n", resultado_PIB);
    printf("Resultado Area: %d\n", resultado_area);
    printf("Resultado densidade: %d\n", resultado_densidade);
    printf("Resultado PIB per Capita: %d\n", resultado_pibpercapita);

    printf("\nObrigado por jogar!");
    // fim do código
    return 0;    
}
