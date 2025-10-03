   #include <stdio.h>

 int main(){

 printf("*****Desafio Super Trunfo!*****\n");

 //variáveis e tipos de dados da carta n1:

 char Estado1 [20], Cidade1 [20], Codigo1 [20]; // Declara três arrays, cada um de 20 caracteres. 
 int Turistico1;    // declara tipos de dados inteiros. 
 unsigned int Populacao1; // declara um numero positivo extremamente grande;
 float KM1, Pib1, Densidade1, PibPerc1, Superpodercarta1;   // declara tipos de dados flutuantes. 

 // variáveis e tipos de dados da carta n2:

 char Estado2 [30], Cidade2 [30], Codigo2 [30]; // Declara três arrays, cada um de 30 caracteres. 
 int Turistico2;  // declara tipos de dados inteiros. 
 unsigned int Populacao2; // declara um numero positivo extremamente grande;
 float KM2, Pib2, Densidade2, PibPerc2, Superpodercarta2;    // declara tipos de dados flutuantes. 

 //Sintaxe scanf
 //scanf("formato1""formato2", &variavel1, &variavel2,...);

 printf("=======CARTA 1==========\n"); // Preencha os dados da Carta n1 conforme as orientações:

 printf("Digite o Estado: "); // Insira uma letra de 'A' a 'H' (representando um dos 8 estados).
 scanf("%s", Estado1);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo1);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade1);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %u", &Populacao1);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM1);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib1);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico1);

 //calculo de densidade populacional da carta número 1:

 Densidade1 = (float) (Populacao1 / KM1);

 //calculo do Pib Per capita da carta número1:
 PibPerc1 =  (float) (Pib1 / Populacao1);

 //calculo super poder da carta numero 1

 Superpodercarta1 = (unsigned long int)(Populacao1 + KM1 + Pib1 + PibPerc1 +( 1 / Densidade1 )+ Turistico1);

 //Sintaxe printf
 //printf ("formato 1", variavel1, variavel1...);

 printf ("==========RESULTADO CARTA N1=====\n");
 printf("O código da carta é: %s\n", Codigo1);
 printf("O Estado é: %s\n", Estado1);
 printf("O nome da cidade é: %s\n", Cidade1);
 printf("A população é de: %u\n", Populacao1);
 printf("A área em km² é: %.3fkm²\n", KM1);
 printf("O Pib é de: %.6f\n", Pib1);
 printf("Os números de pontos túristicos são: %d\n", Turistico1);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade1);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc1);
 printf("O Super Poder da Carta N1 é de: %.2f\n", Superpodercarta1);

 printf("========CARTA 2=======\n"); //Preencha os dados da Carta N2, conforme preenchido a carta N1.

 printf("Digite o Estado: ");
 scanf("%s", Estado2);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo2);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade2);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %u", &Populacao2);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM2);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib2);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico2);

  //calculo de densidade populacional da carta número 2:

 Densidade2 = (float) (Populacao2 / KM2);

 //calculo do Pib Per capita da carta número2:

 PibPerc2 = (float) (Pib2 / Populacao2);

 //calculo super poder da carta numero 2

 Superpodercarta2 = (unsigned long int) (Populacao2 + KM2 + Pib2 + PibPerc2 + ( 1 / Densidade2 ) + Turistico2);

 printf(" ======RESULTADOS DA CARTA N2======\n");
 printf("O código da carta é:%s\n", Codigo2); 
 printf("O Estado é: %s\n", Estado2);
 printf("O nome da cidade é: %s\n", Cidade2);
 printf("A população é de:%u\n", Populacao2);
 printf("A área em km² é:%.3f km²\n", KM2);
 printf("O Pib é de: %.6f\n", Pib2);
 printf("Os números de pontos túristicos são: %d\n", Turistico2);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade2);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc2);
 printf("O Super Poder da Carta N2 é de: %.2f\n", Superpodercarta2);

 // Comparação das cartas;
 printf("*** QUAL SERÁ A CARTA GANHADORA? *** \n");

 printf("A carta ganhadora terá como resultado o número 1\n");

 printf("A população da carta número 1 é maior que a populaçaõ da carta número 2? : %d\n", (unsigned long int) Populacao1 > Populacao2); 
 printf("A área em km² carta número 1 é maior que a carta número 2 ? : %d\n", (unsigned long int) KM1 > KM2);
 printf("O pib da carta número 1 é maior que o pib da carta 2 ? : %d\n", (unsigned long int) Pib1 > Pib2); 
 printf("O número de pontos túristicos da carta número 1 é maior que o número de pontos turisticos da carta 2 ? : %d\n", Turistico1> Turistico2); 
 printf("A densidade populacional da carta número 1 é maior que a densidade populacional da carta 2 ? : %d\n", (unsigned long int) Densidade1 > Densidade2); 
 printf("O pib per capta da carta número 1 é maior que o pib per capta da carta 2 ? : %d\n", (unsigned long int) PibPerc1 > PibPerc2); 
 printf("O Super Poder da carta número 1 é maior que o Super Poder da carta 2 ? : %d\n", (unsigned long int) Superpodercarta1 > Superpodercarta2); 

 
 return 0;

 }

  #include <stdio.h>

 int main(){

 printf("*****Desafio Super Trunfo!*****\n");

 //variáveis e tipos de dados da carta n1:

 char Estado1 [20], Cidade1 [20], Codigo1 [20]; // Declara três arrays, cada um de 20 caracteres. 
 int Turistico1;    // declara tipos de dados inteiros. 
 unsigned int Populacao1; // declara um numero positivo extremamente grande;
 float KM1, Pib1, Densidade1, PibPerc1, Superpodercarta1;   // declara tipos de dados flutuantes. 

 // variáveis e tipos de dados da carta n2:

 char Estado2 [30], Cidade2 [30], Codigo2 [30]; // Declara três arrays, cada um de 30 caracteres. 
 int Turistico2;  // declara tipos de dados inteiros. 
 unsigned int Populacao2; // declara um numero positivo extremamente grande;
 float KM2, Pib2, Densidade2, PibPerc2, Superpodercarta2;    // declara tipos de dados flutuantes. 

 //Sintaxe scanf : inserção dos dados através do scanf
 //scanf("formato1""formato2", &variavel1, &variavel2,...);

 printf("=======CARTA 1==========\n"); // Preencha os dados da Carta n1 conforme as orientações:

 printf("Digite o Estado: "); // Insira uma letra de 'A' a 'H' (representando um dos 8 estados).
 scanf("%s", Estado1);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo1);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade1);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %u", &Populacao1);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM1);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib1);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico1);

 //calculo de densidade populacional da carta número 1:

 Densidade1 = (float) (Populacao1 / KM1);

 //calculo do Pib Per capita da carta número1:
 PibPerc1 =  (float) (Pib1 / Populacao1);

 //calculo super poder da carta numero 1

 Superpodercarta1 = (unsigned long int)(Populacao1 + KM1 + Pib1 + PibPerc1 +( 1 / Densidade1 )+ Turistico1);

 //Sintaxe printf : impressão de valores inseridos com scanf
 //printf ("formato 1", variavel1, variavel1...);

 printf ("==========RESULTADO CARTA N1=====\n");
 printf("O código da carta é: %s\n", Codigo1);
 printf("O Estado é: %s\n", Estado1);
 printf("O nome da cidade é: %s\n", Cidade1);
 printf("A população é de: %u\n", Populacao1);
 printf("A área em km² é: %.3fkm²\n", KM1);
 printf("O Pib é de: %.6f\n", Pib1);
 printf("Os números de pontos túristicos são: %d\n", Turistico1);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade1);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc1);
 printf("O Super Poder da Carta N1 é de: %.2f\n", Superpodercarta1);

 printf("========CARTA 2=======\n"); //Preencha os dados da Carta N2, conforme preenchido a carta N1.

 printf("Digite o Estado: ");
 scanf("%s", Estado2);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo2);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade2);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %u", &Populacao2);

 printf("Digite a área em  km²: "); //Insira a área da cidade em quilômetros quadrados(utilize números com até 6 casa decimais, ex: 30.000000).
 scanf("%f", &KM2);

 printf("Digite o Pib dessa cidade: "); // Insira o Produto Interno Bruto dessa cidade (Utilize números com até 6 casa decimais, ex 5.000000).
 scanf("%f", &Pib2);

 printf("Digite o número de pontos turisticos: "); // Insira o número de pontos túristicos dessa cidade.
 scanf("%d", &Turistico2);

  //calculo de densidade populacional da carta número 2:

 Densidade2 = (float) (Populacao2 / KM2);

 //calculo do Pib Per capita da carta número2:

 PibPerc2 = (float) (Pib2 / Populacao2);

 //calculo super poder da carta numero 2

 Superpodercarta2 = (unsigned long int) (Populacao2 + KM2 + Pib2 + PibPerc2 + ( 1 / Densidade2 ) + Turistico2);

 printf(" ======RESULTADOS DA CARTA N2======\n");
 printf("O código da carta é:%s\n", Codigo2); 
 printf("O Estado é: %s\n", Estado2);
 printf("O nome da cidade é: %s\n", Cidade2);
 printf("A população é de:%u\n", Populacao2);
 printf("A área em km² é:%.3f km²\n", KM2);
 printf("O Pib é de: %.6f\n", Pib2);
 printf("Os números de pontos túristicos são: %d\n", Turistico2);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade2);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc2);
 printf("O Super Poder da Carta N2 é de: %.2f\n", Superpodercarta2);

 // Comparação das cartas com operadores de decisão if-else, utilizando dados inseridos com a função scanf e imprimindo com a função printf
 printf("*** QUAL SERÁ A CARTA GANHADORA? ***\n");

     if ( Populacao1 > Populacao2){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }
     if ( KM1 > KM2 ){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }
     
     if ( Pib1 > Pib2 ) { 
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }

     if ( Turistico1 > Turistico2){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }

     if ( Densidade1 < Densidade2){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }

     if ( PibPerc1 > PibPerc2){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }
     if ( Superpodercarta1 > Superpodercarta2){
         printf("A carta número 1 ganhou !!\n");
     }else {
         printf("A carta número 2 ganhou !!\n");
     }
 return 0;

 }
