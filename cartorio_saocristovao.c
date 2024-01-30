#include<stdio.h> // biblioteca de comunicação com o usuário
#include<stdlib.h> // biblioteca de espaçp em memória
#include<locale.h> // biblioteca de alocações de texto por região
#include<string.h> //biblioteca responsável por cuidar das string

int registro() //função responsavel por cadastrar os usuários no sistema
{
	//inicio da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informações do usuário
	scanf("%s", cpf); //%s refere-se a string CPF
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "W" significa escrever
	fprintf(file,cpf); // salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //atualiza o arquivo existente
	fprintf(file, ","); // manda o computador separar as variaveis por virgula
	fclose(file); //fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando informações do usuario
	scanf("%s", nome); // refere-se a string NOME
	
	file = fopen(arquivo, "a"); //abre o arquivo e o "a" refere-se atualizar o arquivo
	fprintf(file, nome); //salva o valor da variável 
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza ele 
	fprintf(file, ","); //separa as variaveis por virgula
	fclose(file); //fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coletando informações do usuário
	scanf("%s", sobrenome); // refere-se a string SOBRENOME
	
	file = fopen(arquivo, "a"); // abre o arquivo e o "a" atualiza
	fprintf(file, sobrenome); // salva o valor da variavel
	fclose(file); //fecha o arquivo

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	// final da função de cadastrar os usuários
}

int consultar() //função responsável por consultar os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	//inicio da consulta das váriaveis
	char cpf[40]; 
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: "); //pergunta pro usuario qual cpf ele quer consultar
	scanf("%s",cpf); 
	
	FILE *file; //comando arquivo, criar arquivo
	file = fopen(cpf, "r"); // abre o arquivo CPF e "r" refere-se a ler 
	
	if(file == NULL) //se o arquivo 
	{
		printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado:");
	scanf("%s", cpf);
	
	remove(cpf); 
	
	FILE *file; 
	file = fopen(cpf, "r");
	
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!. \n");
		system("pause");
	}
}
	


int main ()
{
	int opcao=0; //definindo váriaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
		
		
		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
		
		printf("### Cartório São Cristovão ###\n\n");
		printf("Escolha a opção desejada no Menu\n\n");
		printf("\t1 - Registrar nomes:\n");
		printf("\t2 - Consultar nomes:\n");
		printf("\t3 - Deletar nomes:\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("Opção: "); //fim do menu
		
		scanf("%d", &opcao); //armazena a escolha do usuario
		
		system("cls"); //limpa a tela
		
		switch(opcao) //inicio da seleção de menu
		{
			case 1:
			registro(); //chamada de funções
			break;
			
			case 2:
			consultar();
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
			printf("Obrigado por usar os nossos serviços!");
			return 0;
			break;
			
			default:
			printf("Essa opção não está disponível");
			system("pause");
			break;
			
		} //fim da seleção
		
		
		
		
		
		
		}
		
		
		
	
	
	
}
