    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

 int main(){

 printf("\n*****Desafio Super Trunfo!*****\n");

 //variáveis e tipos de dados da carta n1:

 char Estado1 [20], Cidade1 [20], Codigo1 [20]; // Declara três arrays, cada um de 20 caracteres. 
 int Turistico1;    // declara tipos de dados inteiros. 
 long unsigned int Populacao1; // declara um numero positivo extremamente grande;
 float KM1, Pib1, Densidade1, PibPerc1, Superpodercarta1;   // declara tipos de dados flutuantes. 

 int opcao;

 // variáveis e tipos de dados da carta n2:

 char Estado2 [30], Cidade2 [30], Codigo2 [30]; // Declara três arrays, cada um de 30 caracteres. 
 int Turistico2;  // declara tipos de dados inteiros. 
 long unsigned int Populacao2; // declara um numero positivo extremamente grande;
 float KM2, Pib2, Densidade2, PibPerc2, Superpodercarta2;    // declara tipos de dados flutuantes. 

 //Sintaxe scanf : inserção dos dados através do scanf
 //scanf("formato1""formato2", &variavel1, &variavel2,...);

 printf("\n=======CARTA 1==========\n"); // Preencha os dados da Carta n1 conforme as orientações:

 printf("Digite o Estado: "); // Insira uma letra de 'A' a 'H' (representando um dos 8 estados).
 scanf("%s", Estado1);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo1);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade1);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %lu", &Populacao1);

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

 printf ("\n==========RESULTADO CARTA N1=====\n");
 printf("O código da carta é: %s\n", Codigo1);
 printf("O Estado é: %s\n", Estado1);
 printf("O nome da cidade é: %s\n", Cidade1);
 printf("A população é de: %lu\n", Populacao1);
 printf("A área em km² é: %.3fkm²\n", KM1);
 printf("O Pib é de: %.6f\n", Pib1);
 printf("Os números de pontos túristicos são: %d\n", Turistico1);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade1);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc1);
 printf("O Super Poder da Carta N1 é de: %.2f\n", Superpodercarta1);

 printf("\n========CARTA 2=======\n"); //Preencha os dados da Carta N2, conforme preenchido a carta N1.

 printf("Digite o Estado: ");
 scanf("%s", Estado2);

 printf("Digite o Código da Carta: "); // Insira aletra do estado seguida de um numero de 01 a 02 (ex:A01,A 01).
 scanf("%s", Codigo2);

 printf("Digite o nome da cidade: "); //Insira o nome de Cidade, utilize cidades de apenas um nome, ou abreviação em siglas (ex:Fortaleza ou SP);
 scanf("%s", Cidade2);

 printf("Digite a população: "); //Insira o número de habitantes(utilize números inteiros, sem casa decimais, ex:2000000).
 scanf(" %lu", &Populacao2);

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

 //Sintaxe printf : impressão de valores inseridos com scanf
 //printf ("formato 1", variavel1, variavel1...);
 printf("\n======RESULTADOS DA CARTA N2======\n");
 printf("O código da carta é:%s\n", Codigo2); 
 printf("O Estado é: %s\n", Estado2);
 printf("O nome da cidade é: %s\n", Cidade2);
 printf("A população é de:%lu\n", Populacao2);
 printf("A área em km² é:%.3f km²\n", KM2);
 printf("O Pib é de: %.6f\n", Pib2);
 printf("Os números de pontos túristicos são: %d\n", Turistico2);
 printf("A densidade Populacional é de: %.6f hab/km²\n", Densidade2);
 printf("O Pib Per Capta é de: %.6f\n", PibPerc2);
 printf("O Super Poder da Carta N2 é de: %.2f\n", Superpodercarta2);

 //comparação dos tributos utilizando a função de menu interativo, switch e estrutura de decisão aninhadas.
 //o jogador deve escolher qual dos tributos quer comparar de acordo com as opções fornecidas
 printf("\n ==== MENU DE COMPARAÇÃO ====\n");
 printf("Escolha qual tributo das cidades comparar ! ***\n");
 printf("1. População\n");
 printf("2. Área\n");
 printf("3. Pib\n");
 printf("4. Número de pontos túristicos\n");
 printf("5. Densidade demoráfica\n");
 scanf("%d", &opcao );

 switch (opcao)
 {

 case 1: 
      printf("Atributo: População\n"); 
      printf("%s: %lu habitantes\n", Cidade1, Populacao1); 
      printf("%s: %lu habitantes\n", Cidade2, Populacao2);

   if (Populacao1 > Populacao2)
   {
      printf("**Carta número 1 ganhou!!**");
   }if (Populacao2 > Populacao1){ 
      printf("***Carta número 2 ganhou!!*");
   }else { 
      printf("*** Empate !! **\n*");
   }
   break;

 case 2:
      printf("Atributo:Área em km² \n");
      printf("%s: %.3f km²\n", Cidade1, KM1);
      printf("%s: %.3f km²\n", Cidade2, KM2);
   if (KM1 > KM2 )
   {     
      printf("**Carta número 1 ganhou!!**");
   }if (KM2 > KM1){ 
      printf("***Carta número 2 ganhou!!*");
    }else { 
      printf("*** Empate !! **\n*");
   }
  
   break;
 case 3:
      printf("Atributo: Pib \n");
      printf("%s: %.6f\n", Cidade1, Pib1);
      printf("%s: %.6f\n", Cidade2, Pib2);
   if (Pib1 > Pib2 )
   {     
      printf("**Carta número 1 ganhou!!**\n");
   }if (Pib2 > Pib1){ 
      printf("***Carta número 2 ganhou!!*\n");
    }else { 
      printf("*** Empate !! **\n*");
   }
   break;
 case 4:
      printf("Atributo: Pontos Túristicos \n");
      printf("%s: %d \n", Cidade1, Turistico1);
      printf("%s: %d \n", Cidade2, Turistico2);
   if (Turistico1 > Turistico2 )
   {     
      printf("**Carta número 1 ganhou!!**");
   }if (Turistico2 > Turistico1){ 
      printf("***Carta número 2 ganhou!!*");
    }else { 
      printf("*** Empate !! **\n*");
   }
  
   break;
  case 5:
      printf("Atributo: Densidade Demográfica \n");
      printf("%s: %.6f\n", Cidade1, Densidade1);
      printf("%s: %.6f\n", Cidade2, Densidade2);
   if (Densidade1 < Densidade2)
   {     
      printf("**Carta número 1 ganhou!!**");
   }if (Densidade2 < Densidade1){ 
      printf("***Carta número 2 ganhou!!*");
    }else { 
      printf("*** Empate !! **\n*");
   }
  
   break;
   
 default:
 {
    printf("Opção inválida!\n");
 }
    break;
 }

 return 0;
}
