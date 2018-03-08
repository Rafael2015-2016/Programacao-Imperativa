#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ficha2.h" 
#include "reRoutingEntreMenus.h" /*API da função de reencaminhamento entre o menu principal e o meu apenas da ficha ficha em questão*/
#include "bigMain.h" /*quando se quer incluir uma API propria usa-se as aspas ao contrario <API's padrao>*/
#include "m_50Primeiras.h" 
#include "50primeiras.h"


/*MENU DAS 50 PERGUNTAS*/
void menu_50Primeiras(){
int num=0;
int opt=-1;
int x=0;/*variavel usada na questão 4,13,25*/
int y=0; /*variavel usada na questão 25,26,27*/
int z=0; /*variavel usada no exercicio 27 */
int *array1, *array2, *array3; /*usados nos exercicios 26 e 27*/
char s1[30];
char s2[30];
char *str1 = malloc(sizeof(char));
char *str2 = malloc(sizeof(char));


	printf("Qual o exercicio dos 50 primeiros exercicios que pretende executar?\n");
	scanf("%d",&opt);
		
	switch(opt){
		case(1):
		system("clear");
		printf("Insira valores e termine o pedido inserindo zero!\n");
		printf("O maior valor inerido na anterior sequencia é: %d",maiorELemSequecia());
		routingQuestion(6); /*6 é o numero atribuido ás 50 primeiras questoes*/


		case(2):
		system("clear");
		printf("Insira valores e termine o pedido inserindo zero!\n");
		printf("A media de valores ineridos na anterior sequencia é: %f",mediaValoresSequencia());
		routingQuestion(6);

		
		case(3):
		system("clear");
		printf("Insira valores e termine o pedido inserindo zero!\n");
		printf("O segundo maior valor da anterior sequencia é: %d",segMaior());
		routingQuestion(6);


		case(4):
		system("clear");
		printf("Insira o valor decimal!\n");
		scanf("%d",&x);
		printf("O valor decimal que inseriu na representação binária contém %d bits a 1",bitsUm(x));
		routingQuestion(6);
		

		case(5):
		system("clear");
		printf("Insira o valor decimal!\n");
		scanf("%d",&x);
		printf("O valor decimal que inseriu na representação binária contém %d bits a 0",trailingZ(x));
		routingQuestion(6);


		case(6):
		system("clear");
		printf("Insira o valor decimal!\n");
		scanf("%d",&x);
		printf("O numero de digitos necessarios para escrever o valor inserido em base decimal é %d bits",trailingZ(x));
		routingQuestion(6);


		case(7):
/*
		-Declarar um ponteiro que armazenará o endereço de uma variável inteira.	Lembrar que o uso do
		operador & retorna o endereço do operando que estiver à direita.
		Código:
				#include <stdio.h>

				int main()
				{
				    int numero = 5;
				    int *ptr_numero = &numero;
				}​

		
		-Ao invés de exibir o endereço da variável apontada, vamos exibir o valor da variável apontada, 
		o operador * retorna não o endereço, mas sim o valor da variável apontada.
		Código:
				#include <stdio.h>

				int main()
				{
				    int numero = 5;
				    int *ptr_numero = &numero;

				    printf("Valor da variavel apontada: %i",*ptr_numero);
				    getchar();
				}​
		

		-A próxima linha é um desastre de código, nós tentamos guardar o valor inteiro 13 para uma região 
		desconhecida na memória, nos piores casos o programa pode travar, e se não travar, o valor 13 será
		guardado em uma região desconhecida na memória.
				#include <stdio.h>

				int main()
				{
				    int *ptr_numero;
				    *ptr_numero = 13;
				}​

			Esse tipo de ponteiro é conhecido por ponteiro selvagem, pois o endereço por onde ele aponta é 
			desconhecido, e se algum valor for gravado por intermédio deste tipo de ponteiro, qualquer coisa 
			pode acontecer, algo de imprevisível. Quando você não sabe o que atribuir à um ponteiro, 
			simplesmente passe à ele o valor NULL, é uma técnica segura no uso de ponteiros.
			Código:
					#include <stdio.h>

					int main()
					{
					     int *ptr_numero = NULL;
					}​

*/
		system("clear");
		printf("Insira a 1º string\n");
		scanf("%s",s1);
		printf("Insira a 2º string\n");
		scanf("%s",s2);
		
		char *p1;/* <-------- definir p1 como apontador para uma string*/
		char *p2;/* <-------- definir p2 como apontador para uma string*/
		
		printf("A primeira string é: %s\n",s1);
		printf("A segunda string é: %s\n",s2);		
		
		printf("\nO endereço da 1º string é: %d\n",&s1);
		printf("O endereço da 2º string é: %d\n",&s2);
		p1 = s1;
		p2 = s2;/*p1(e p2 também) que é um apontador vai ficar a apontar para o endereço da string s1(1º posição da string s1). Desta forma podemos 
				aceder á string s1 atravez de p (s1 como é uma string o seu indereço é o endereço da 1º posição da string)*/
		printf("\nO apontador 'p1' com endereço %d que está a apontar para a 1º string está a apontar para o conteudo: %s\n",&p1 ,p1);/*  p aponta para s1 ou p é o endereço de s1   */
		printf("O apontador 'p2' com endereço %d que está a apontar para a 2º string está a apontar para o conteudo: %s\n",&p2 ,p2);

		printf("\nO endereço da primeira string (tem que se manter igual para estar correto) é: %d \n",&(*mystrcat (s1,s2)));
		printf("O endereço da primeira string contem: %s \n\n\n",mystrcat (s1,s2));
		routingQuestion(6);


		case(8):
		system("clear");
		char* dest;
		printf("Insira a string\n");
		scanf("%s",s1);
		printf("O conteudo da string 'source' com endereço %d é: %s\n",&s1,s1);
		printf("O conteudo da string 'dest' com endereço %d é: %s\n",&(*mystrcpy(dest,s1)),mystrcpy(dest,s1));
		routingQuestion(6);


		case(9):
		system("clear");
		printf("Insira a 1º string\n");
		scanf("%s",s1);
		printf("Insira a 2º string\n");
		scanf("%s",s2);
		
		printf("A primeira string é: %s\n",s1);
		printf("A segunda string é: %s\n",s2);	

		printf("O resultado da comparação lexicografica é: %d",mystrcmp(s1,s2));
		routingQuestion(6);


		case(10): //-------------------não está completamente funcional!
		system("clear");
		printf("Insira a 1º string\n");
		scanf("%s",s1);
		printf("Insira a 2º string\n");
		scanf("%s",s2);
		
		printf("A primeira string é: %s\n",s1);
		printf("A segunda string é: %s\n",s2);	

		printf("A segunda string inserida ocorre em s2 a partir da posição: %s",mystrstr(s1,s2));
		routingQuestion(6);


		case(11):
		system("clear");
		printf("Insira a string a inverter:\n");
		scanf("%s",s1);
		mystrrev(s1);
		routingQuestion(6);


		case(12):
		system("clear");
		printf("Insira a string á qual será retirada as vogais:\n");
		scanf("%s",s1);
		myStrnoV(s1);
		routingQuestion(6);


		case(13): //-------------------não está funcional!
		system("clear");
		printf("Insira a string a truncar:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("Insira o valor a que quer truncar as palavras da string:\n");
		scanf("%d",&x);
//		truncW(str1,x);
		routingQuestion(6);


		case(14): 
		system("clear");
		printf("Insira a string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("O caracter mais frequente na string inserida é: %c\n",charMaisfreq(str1));
		routingQuestion(6);


		case(15): 
		system("clear");
		printf("Insira a string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("O comprimento da maior substring com caracteres iguais na string inserida é: %d\n",iguaisConsecutivos(str1));
		routingQuestion(6);


		case(16): 
		system("clear");
		printf("Insira a string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("O maior numero de caracteres diferentes consecutivos na string inserida é: %d\n",countDifConsecutivos(str1));
		routingQuestion(6);


		case(17): 
		system("clear");
		printf("Insira a 1º string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("Insira a 2º string:\n");
//		getchar(); //se mantiver este getchar ativo o 1º caracter da segunda variavel a inserir não é lindo para a string str2
		fgets(str2,50,stdin);
		printf("O comprimento do maior prefixo comum entre as duas strings é: %d\n",maiorPrefixo(str1,str2));
		routingQuestion(6);


		case(18): 
		system("clear");
		printf("Insira a 1º string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("Insira a 2º string:\n");
		getchar(); //se mantiver este getchar ativo o 1º caracter da segunda variavel a inserir não é lindo para a string str2
		fgets(str2,50,stdin);
		printf("O comprimento do maior Sufixo comum entre as duas strings é: %d\n",maiorSufixo(str1,str2));
		routingQuestion(6);


		case(19): 
		system("clear");
		printf("Insira a 1º string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("Insira a 2º string:\n");
	//	getchar(); //se mantiver este getchar ativo o 1º caracter da segunda variavel a inserir não é lindo para a string str2
		fgets(str2,50,stdin);
		printf("O tamanho do sufixo de s1 que é prefixo de s2 é: %d\n",sufPref(str1,str2));
		routingQuestion(6);



		case(20): 
		system("clear");
		printf("Insira a string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("O numero de palavras existente na string é: %d\n",contaPal(str1));
		routingQuestion(6);



		case(21): 
		system("clear");
		printf("Insira a string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("O numero de vogais existente na string é: %d\n",contaVogais(str1));
		routingQuestion(6);


		case(22): 
		system("clear");
		printf("Insira a 1º string:\n");
		getchar();
		fgets(str1,50,stdin);
		printf("Insira a 2º string:\n");
	//	getchar(); //se mantiver este getchar ativo o 1º caracter da segunda variavel a inserir não é lindo para a string str2
		fgets(str2,50,stdin);
		printf("O valor logico da existencia da 1º string na 2º string é: (1-Existe; 0-Não existe): %d\n",contida(str1,str2));
		routingQuestion(6);


		case(23): 
		system("clear");
		printf("Insira a palavra:\n");
		getchar();
		scanf("%s",s1);
		printf("O valor logico da verificação de se a palavra inserida é ou não palindroma (1-Sim; 0-Não) é: %d\n",palindroma(s1));
		routingQuestion(6);


		case(24): 
		system("clear");
		printf("Insira a string :\n");
		getchar();
		fgets(str1,50,stdin);
		printf("A string sem repetidos sucessivamente fica: %d\n",remRep(str1));
		routingQuestion(6);


		case(25): 
		system("clear");
		printf("Insira a string :\n");
		getchar();
		fgets(str1,50,stdin);
		printf("A string sem espaços sucessivos fica: %d\n",limpaEspacos(str1));
		routingQuestion(6);


		case(26): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n");
		printf("Qual o valor a inserir no array?\n");
		scanf("%d",&y);
		printf("Após inserir o valor %d no array ordenado o array em questão fica:\n",y);
		insere(array1,x,y);
		routingQuestion(6);


		case(27): 
		system("clear");
		printf("Insira o tamanho do 1º array:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		y=0;
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}

		system("clear");
		printf("Insira o tamanho do 2º array:\n");
		scanf("%d",&z);
		printf("\nPreencha o array de inteiros!\n");
		array2 = malloc(z*sizeof(int));
		y=0;
		while(y<z){
			scanf("%d",&num);
			array2[y]=num;
			y++;
		}
		system("clear");
		printf("Os arrays inseridos são:\n");
		printf("ARRAY-1: [");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}

		printf("]\nARRAY-2: [");
		for(y=0;y<z;y++){
			printf("%d ",array2[y]);
		}
		printf("]\n\n");

		printf("O resultado do merge dos dois arrays acima é:\nMERGE ARRAY: ");
		array3 = malloc((x+z)*sizeof(int));
		myMerge (array3,array1, array2,x,z);
		routingQuestion(6);


		case(28): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("Insira o indice de partida da verificação: ");
		scanf("%d",&x);
		printf("\nInsira o indice da ultima posição a verificar: ");
		scanf("%d",&y);
		printf("O valor logico de se o array se encontra ordenado por ordem crescente entre as posições %d e %d é (1-Ordenado; 0-Não ordenado): %d\n",x,y, crescente(array1,x,y));
		routingQuestion(6);


		case(29): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O tamanho do array sem valores negativos é %d", retiraNeg(array1,x));
		routingQuestion(6);	


		case(30): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O 1º elemento menos frequente do array é %d", menosFreq(array1,x));
		routingQuestion(6);	



		case(31): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O 1º elemento menos frequente do array é %d", menosFreq(array1,x));
		routingQuestion(6);	


		case(32): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O comprimento da maior sequencia crescente no array é %d", maxCresc(array1,x));
		routingQuestion(6);	



		case(33): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O tamanho do array sem repetidos contém %d elementos", elimRep(array1,x));
		routingQuestion(6);	



		case(34): 
		system("clear");
		printf("Insira o tamanho da lista:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}
		system("clear");
		printf("O array inserido é:\n");
		printf("[");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}
		printf("]\n\n");
		printf("O tamanho do array sem repetidos e mantendo a ordem crescente contém %d elementos", elimRepOrd(array1,x));
		routingQuestion(6);	



		case(35): 
		system("clear");
		printf("Insira o tamanho do 1º array:\n");
		scanf("%d",&x);
		printf("\nPreencha o array de inteiros!\n");
		array1 = malloc(x*sizeof(int));
		y=0;
		while(y<x){
			scanf("%d",&num);
			array1[y]=num;
			y++;
		}

		system("clear");
		printf("Insira o tamanho do 2º array:\n");
		scanf("%d",&z);
		printf("\nPreencha o array de inteiros!\n");
		array2 = malloc(z*sizeof(int));
		y=0;
		while(y<z){
			scanf("%d",&num);
			array2[y]=num;
			y++;
		}
		system("clear");
		printf("Os arrays inseridos são:\n");
		printf("ARRAY-1: [");
		for(y=0;y<x;y++){
			printf("%d ",array1[y]);
		}

		printf("]\nARRAY-2: [");
		for(y=0;y<z;y++){
			printf("%d ",array2[y]);
		}
		printf("]\n\n");
		printf("O numero de elementos em comum entre dois arrays inseridos é %d elementos\n",comunsOrd(array1,x,array2,z));
		routingQuestion(6);	



		/* ... */


		default:
			printf("Input invalido!\n");
			getchar(); // apenas para fazer uma espera e o utilizador ler a mensagem ate repetir o menu
			getchar(); //-----PROCURAR ALTERNATIVA AO USO DE 2 GETCHAR SEGUIDOS
			system("clear");
			menu_50Primeiras();
	
	}
}