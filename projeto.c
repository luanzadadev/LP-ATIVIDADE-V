#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aten(){

printf("\n======================\n");
printf("\tSeja bem-vindo a pagina do atendente.");
printf("\n======================\n");

}

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
    int op;

        printf("Você ja fez seu login?: \n");
        printf("n\1- sim\n");
        printf("\n2- Não\n");
        scanf("%d", &esc);


    switch (esc)
    {
    case 1:

    faxina();

     localizador();
    do
    {

        printf("\nDigite a categoria desejada!\n\n");
        printf("\n1 - A��o\n");
        printf("\n2 - Comedia.\n");
        printf("\n3- Romance.\n");
        printf("\n4 - Terror.\n");
        printf("\n5 - Motiva��o.\n");
        printf("\n6 - Sair.\n");

        printf("\nPor favor digite o que voc� deseja: ");
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
            printf("\nAs aventuras de Pin�quio | 30 R$");

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
            printf("\nO cemit�rio maldito | 48 R$");
            break;

        case 5:

            printf("\nLocalizado no corredor 5.\n");

            printf("\tLivros disponiveis a baixo:\n");

            printf("\nArrume sua cama | 46 R$ \n");
            printf("\nO poder da A��o | 60 R$");

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

    
    case 2:

    faxina();
    login();
        
        break;
    
    default:

    printf("Erro, porfavor tente novamente.");

        main();

        break;
    }

   
}

void registro(){

    int esc;
    int reg = 0;
    

        printf("Você ja fez seu login?: \n");
        printf("n\1- sim\n");
        printf("\n2- Não\n");
        scanf("%d", &esc);

    switch (esc)
    {
    case 1:

        faxina();

        printf("Escreva a quantidade de livros que você deseja comprar?");
        scanf("%d", &reg);

            atendente(reg);
        
        break;
    
    case 2:
        faxina();
        login();

        break;
    }


}

void atendente(int o){

        faxina();

        aten();

    char cpf[200], endereco[200], loc[200], cart[200];



    printf("\nDigite o numero do seu cartão: \n");
    gets(cart);


    printf("\n\nDigite o local de entrega: \n\n");
    gets(loc);

    printf("\nDigite o seu cpf para confirmar a compra: \n");
    gets(cpf);



        printf("\nA compra concluida!\n");
        printf("\n%d é a quantidade de livros que o senhor deseja! \n\n", o);

        printf("\nCompra efetuada com sucesso!\n");

        faxina();

        main();

    


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

    printf("\nEscolha a op��o desejada.\n");
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


    case 4:

        faxina();
        printf("Tenha um bom dia.");

        break;
    }

    return 0;
}
