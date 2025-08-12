#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file, cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
}
int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado !\n");
	}
	
	while(fgets(conteudo, 200 , file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf [40];
	
	printf("Digite o CPF a ser deteltado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
}



int main()
{
	int opcao=0;
	int laco=1;
		
	for(laco=1;laco=1;)
	{
		
		
		
		setlocale(LC_ALL, "Portuguese");
		
		system("cls");
		
		printf("### Cart�rio da EBAC ###\n\n");
		printf("Escolha a op��o desejada do menu: \n\n");
		printf("\t1 - Registrar Nomes \n");
		printf("\t2 - Consultar Nomes \n");
		printf("\t3 - Deletar Nomes \n");
		printf("Op��o: ");
		
		scanf("%d", &opcao);
		
		system("cls");
		
		
		
		switch (opcao)
		{	
			case 1:
			registro();
			break;
				
			case 2: 
			consulta();
			break;
				
			case 3:
			deletar();
			break;
					
			default:
			printf("Essa op��o n�o est� disponivel !\n");
			system("pause");
			break;
		}
		
	}
	
}
	
		
