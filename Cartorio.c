#include<stdio.h>//biblioteca de comunicação com o usuário
#include<stdio.h>//biblioteca de alocação de espaço em memória
#include<locale.h>//biblioteca de alocação de texto por região
#include<string.h>//biblioteca responsável por cuidar das string

int registro()//Função responsável por cadastrar os usuários no sistema
{
	//inicio da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o cpf a ser cadastrado: ");//coletando informações do usuários
	scanf("%s", cpf);//%s refere-se a string
	
	strcpy(arquivo, cpf);//responsável por copiar os valores das string
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);//salvo o valor da variável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);//fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//coletando informações do usuários
	scanf("%s", nome);//%s refere-se a string
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);//salvo o valor da variável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//coletando informações do usuários
	scanf("%s", sobrenome);//%s refere-se a string
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);//salvo o valor da variável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);//fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);//salvo o valor da variável
	fclose(file);//fecha o arquivo
	
	system("pause");	
}

int consulta()//Função responsável por consultar os usuários no sistema
{
	setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
	
	//inicio da criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//final da criação de variáveis/string
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);//%s refere-se a string
	
	FILE *file;//cria o arquivo
	file = fopen(cpf,"r");//cria o arquivo
	
	if(file == NULL)
	{
	    printf("Não foi possivel abrir o arquivo, não localizado!\n");
	}


    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\nEssas são as informações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
	}
	
	system("pause");
}

int deletar()//Função responsável por deletar os usuários no sistema
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!\n");
		system("pause");
	}
	
}

int main ( )
    { 
    int opcao=0; //Definindo variáveis
    int laco=1;
    
    for(laco=1;laco=1;) 
    {
    system("cls");
		
    
    setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
    
	printf("### Cartório da EBAC ###\n"); //Inicio do menu
	printf( "Escolha a opção desejada do menu:\n\n");
	printf("\t1 - Registrar os nomes\n");	
	printf("\t2 - Consultar os nomes\n");	
	printf("\t3 - Deletar os nomes\n\n");	
	printf("Opção: "); //Fim do menu
	
	scanf("%d", &opcao); //Armazenando a escolha do usuário
	
	system("cls");//responsável por limpar a tela
	
	switch(opcao)//inicio da seleção do menu
    { 
        case 1:
        registro();//chamada de funções
        break;
        
        case 2:
        consulta();
        break;
        
        case 3:
        deletar();
        break;
        
        default:
        printf("Essa opção não está disponivel!\n");
        system("pause");
        break;
        //fim da seleção
        
        
	}
	
	
	}
															
}																

