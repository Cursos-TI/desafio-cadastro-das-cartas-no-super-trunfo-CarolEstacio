 #include <stdio.h>

 int main(){
 printf("Desafio Super Trunfo!\n");

 char Estado [20]; //declara um array de 20 caracteres. 
 char Codigo [50]; // declara um array de 50 caracteres.
 char Cidade [30]; // declara um array de 30 caracteres. 
 int Populacao;    // declara tipos de dados inteiros. 
 float KM;         // declara tipos de dados flutuantes. 
 float Pib;        // declara tipos de dados flutuantes.
 int Turistico;    // declara tipos de dados inteiros.

//sintaxe scanf
//scanf("formato1""formato2", &variavel1, &variavel2,...);

printf("Digite o Estado: ");
scanf("%s", Estado);
printf("O Estado é: %s\n", Estado);

printf("Digite o Código da Carta: ");
scanf("%s", Codigo);
printf("O código da carta é: %s\n", Codigo);

printf("Digite o nome da cidade: ");
scanf("%s", Cidade);
printf("O nome da cidade é:%s\n", Cidade);

printf("Digite a população: ");
scanf("%d", &Populacao);
printf("A população é de:%d\n", Populacao);

printf("Digite a área em  km²: ");
scanf("%f", &KM);
printf("A área em KM2 é de:%f\n", KM);

printf("Digite o Pib dessa cidade: ");
scanf("%f", &Pib);
printf("O Pib dessa cidade é de:%f\n", Pib);

printf("Digite o número de pontos turisticos: ");
scanf("%d", &Turistico);
printf("O número de pontos turisticos dessa cidade é de:%d\n", Turistico);

//sintaxe básica de printf ("texto com formatação", variavel1, variavel2,...);

printf("O código da carta é:%s\n", Codigo);
printf("O Estado é: %s\n", Estado);
printf("O nome da cidade é: %s\n", Cidade);
printf("A população é de:%d\n", Populacao);
printf("A área em km² é:%f\n", KM);
printf("O Pib é de:%f\n", Pib);
printf("Os números de pontos túristicos são:%d\n", Turistico);

/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no fortmato padrão
%e: Imprime um número de ponto flutuante na notação cientifica. 
%c: Imprime um único caractere. 
%s: Imprime uma cadeia (string) de caracteres. 
*/
 return 0;
 }
