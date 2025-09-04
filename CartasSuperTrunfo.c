 #include <stdio.h>

 int main(){

 printf("Desafio Super Trunfo!\n");

 //variáveis e tipos de dados da carta n1:

 char Estado1 [20], Cidade1 [20], Codigo1 [20]; // Declara três arrays, cada um de 20 caracteres. 
 int Populacao1, Turistico1;    // declara tipos de dados inteiros. 
 float KM1, Pib1;       // declara tipos de dados flutuantes. 

 // variáveis e tipos de dados da carta n2:

 char Estado2 [30], Cidade2 [30], Codigo2 [30]; // Declara três arrays, cada um de 30 caracteres. 
 int Populacao2, Turistico2;    // declara tipos de dados inteiros. 
 float KM2, Pib2;       // declara tipos de dados flutuantes. 

 //Sintaxe scanf
 //scanf("formato1""formato2", &variavel1, &variavel2,...);

 printf("CARTA 1\n"); // Preencha os dados da Carta n1 conforme as orientações:

 printf("Digite o Estado: "); // Insira uma letra de 'A' a 'H' (representando um dos 8 estados).
 scanf("%s", Estado1);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo1);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade1);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %d", &Populacao1);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM1);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib1);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico1);

 //Sintaxe printf
 //printf ("formato 1", variavel1, variavel1...);

 printf("O código da carta é:%s\n", Codigo1);
 printf("O Estado é: %s\n", Estado1);
 printf("O nome da cidade é: %s\n", Cidade1);
 printf("A população é de:%d\n", Populacao1);
 printf("A área em km² é:%.6f\n", KM1);
 printf("O Pib é de:%.6f\n", Pib1);
 printf("Os números de pontos túristicos são:%d\n", Turistico1);

  printf("CARTA 2\n"); //Preencha os dados da Carta N2, conforme preenchido a carta N1.

 printf("Digite o Estado: ");
 scanf("%s", Estado2);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo2);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade2);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %d", &Populacao2);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM2);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib2);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico2);

 printf("O código da carta é:%s\n", Codigo2);
 printf("O Estado é: %s\n", Estado2);
 printf("O nome da cidade é: %s\n", Cidade2);
 printf("A população é de:%d\n", Populacao2);
 printf("A área em km² é:%.6f\n", KM2);
 printf("O Pib é de:%.6f\n", Pib2);
 printf("Os números de pontos túristicos são:%d\n", Turistico2);


 /*  ESPECIFICADORES DE FORMATO E SEUS MODIFICADORES:
 %d: Imprime um inteiro no formato decimal.
 %i: Equivalente a %d.
 %f: Imprime um número de ponto flutuante no fortmato padrão
 %e: Imprime um número de ponto flutuante na notação cientifica. 
 %c: Imprime um único caractere. 
 %s: Imprime uma cadeia (string) de caracteres. 
 */

 
  return 0;

 }
