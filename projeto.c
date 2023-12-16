#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void faxina()
{

    fflush(stdin);
    system("cls || clear");
}

char LoginS(char *Login, char *Senha)
{
    if (strcmp(Login, "Cliente") == 0 && strcmp(Senha, "1234") == 0)
    {

        
        return 1;
    }
    else
    {
        printf("Senha e login, errados.");
        
    }
    
}

void reg(){


printf("\n======================\n");
printf("\tSeja bem-vindo ao registro de vendas.");
printf("\n======================\n");

}

void localizador()
{
    printf("\n========= Localizador de livros ==========\n");
    printf("\t Seja bem vindo(a)\n");
}

void localizadordelivros()
{

    int esc;

    localizador();
    do
    {

        printf("\nDigite a categoria desejada!\n\n");
        printf("\n1 - Ação\n");
        printf("\n2 - Comedia.\n");
        printf("\n3- Romance.\n");
        printf("\n4 - Terror.\n");
        printf("\n5 - Motivação.\n");
        printf("\n6 - Sair.\n");

        printf("\nPor favor digite o que você deseja: ");
        scanf("%d", &esc);

        faxina();

        switch (esc)
        {
        case 1:

            printf("\nLocalizado no corredor 1.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nO Hobbit | 45 R$\n");
            printf("\nHarry Potter e a pedra filosofal | 50 R$");

        case 2:

            printf("\nLocalizado no corredor 2.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nAuto da compadecida | 24 R$\n");
            printf("\nAs aventuras de Pinóquio | 30 R$");

            break;

        case 3:

            printf("\nLocalizado no corredor 3.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nVermelho, branco e sangue \n");
            printf("\nVerity");

        case 4:

            printf("\nLocalizado no corredor 4.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nIt- A Coisa | 50 R$ \n");
            printf("\nO cemitério maldito | 48 R$");
            break;

        case 5:

            printf("\nLocalizado no corredor 5.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nArrume sua cama | 46 R$ \n");
            printf("\nO poder da Ação | 60 R$");

            break;

        case 6:

            break;

        default:

            printf("Erro.");

            faxina();

            printf("Tente novamente.");
            break;
        }
    } while (esc != 5);
}

void registro(){

    faxina();

    reg();

    float reg;
    int i;

        printf("Quantos livros você deseja comprar?");
        scanf("%f", &reg);

        for ( i = 0; i < 10; i++)
        {
            
        }
        






}


void login(){


char Login[200]; 
char Senha[200];





    printf("Digite o seu Login: ");
    gets(Login);
    
    printf("Digite a sua Senha: ");
    gets(Senha);

        LoginS(Login, Senha);

        faxina();

        localizadordelivros();
  
  
}



int main()
{

    setlocale(LC_ALL, "portuguese");

    int esc;

    printf("\n==============================\n");
    printf("\tSeja bem vindo a biblioteca.\n");
    printf("\n==============================\n");

    printf("\nEscolha a opção desejada.\n");
    printf("\n1- Login\n");
    printf("\n2- Localizador\n");
    printf("\n3- Registro de compras.\n");
    printf("\n4 - Sair.\n\n");

    printf("\nDigite sua escolha: \n");

    scanf("%d", &esc);

    switch (esc)
    {
    
    case 1: 
    faxina();
    login();

    break;
    
    case 2:
        faxina();
        localizadordelivros();

        break;

    case 3:

    faxina();
    registro();

    default:
        break;
    }

    return 0;
}
