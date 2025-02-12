#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //definindo as variáveis que serão usadas para este módulo básico
    char estado[20], codigo[20], cidade[20];
    int populacao, numero_pontos_turisticos;
    float area_em_km, PIB;

    //Introdução ao sistema
    printf("Bem Vindo ao Super Trunfo: Paises!\n");
    printf("Para comecar, coletaremos os dados para cada carta\n");
   
    //Coletar primeiro o estado
    printf("Insira o ESTADO (de forma abreviada, por exemplo SP) onde suas cidades estarao localizadas:\n");
    scanf ("%s", estado);
    printf("\nMuito bem!\nLembrando que todas as cidades de %s deverao ter a mesma letra inicial no codigo.\n",estado);
    
    //Coletando a cidade
    printf("Agora que já temos o seu estado é hora de definir a CIDADE!\n");
    printf("Insira a seguir o nome da sua cidade:\n");
    scanf("%s", cidade);
    printf("Muito bem, você inseriu a cidade de %s", cidade);
   
    //Coletando o código
    printf("\n\nAgora chegou a hora de definir o código da sua carta.\n");
    
    //Explicando como deve ser formatado o código já que, neste nível do desafio, não foi pedido que o código fosse dado pelo sistema
    printf("Os códigos devem ter uma letra de A a H(representando o ESTADO) e um numero de 01 a 04 (representando a cidade).\n");
    printf("\nSeu código deverá ser formatado com uma letra e dois digitos numericos.\n");
    printf(">>EXEMPLO: D03<<\n");
    printf("Digite o código da sua carta!\n");
    scanf("%s", codigo);
    
    //Coletando dados das cartas
    printf("Otimo, agora temos todos os dados necessarios para comecar a cadastrar sua carta");
    
    //Coletando a população em milhares de pessoas
    printf("\nInsira aqui a POPULACAO da sua cidade por milhares de habitantes\n");
    scanf("%d", &populacao);
    
    //Coletando a AREA
    printf("\nInsira aqui a AREA EM KM² da sua cidade\n");
    scanf("%f", &area_em_km);
    
    //Coletando o PIB
    printf("\nInsira aqui o PIB da sua cidade\n");
    scanf("%f", &PIB);
    
    //Coletando NUMERO DE PONTOS TURÍSTICOS
    printf("\nInsira aqui o NUMERO DE PONTOS TURISTICOS da sua cidade:");
    scanf("%d", &numero_pontos_turisticos);
    
    //Demonstrando os resultados
    printf("\nParabens! Você conclui o cadastro de sua CARTA,aqui estão todos os dados inseridos!");
    printf("\nEstado: %s", estado);
    printf("\nCidade: %s", cidade);
    printf("\nCódigo: %s", codigo);
    printf("\nPopulacao: %d", populacao*1000);
    printf("\nNumero de pontos turisticos: %d", numero_pontos_turisticos);
    printf("\nPIB: %.2f", PIB);
    printf("\nArea em Km²: %.2fKm²", area_em_km);    
    // fim do código
    return 0;    
}
