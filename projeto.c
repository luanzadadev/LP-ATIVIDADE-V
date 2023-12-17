#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void HUD(){

    printf("\n==============================\n");
    printf("\tSeja bem vindo a biblioteca.\n");
    printf("\n==============================\n");
}

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

    return (strcmp(Login, "Cliente") == 0 && strcmp(Senha, "1234") == 0);
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
    int esq;
    int op;

      
    faxina();

        localizador();

    printf("\nDigite a categoria desejada!\n\n");
    printf("\n1 - Ação\n");
    printf("\n2 - Comedia.\n");
    printf("\n3- Romance.\n");
    printf("\n4 - Terror.\n");
    printf("\n5 - Motivação.\n");
    printf("\n6 - Sair.\n");

    printf("\nPor favor, digite a opção desejada: ");
    scanf("%d", &esc);

    faxina();

    switch (esc)
    {
    case 1:

        printf("\nCategoria de Ação: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- O Hobbit | 50 R$\n");
        printf("2- Harry Potter e a pedra filosofal | 50 R$");
        printf("\nQual livro você deseja?: ");
        scanf("%d", &esc);
        faxina();
        registro();
        
        break;
    case 2:

        printf("\nCategoria de Comédia: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- Auto da compadecida | 30 R$\n");
        printf("2- As aventuras de Pinóquio | 30 R$");
        printf("\nQual livro você deseja?: ");
        scanf("%d", &esc);
        faxina();
        registro();

        break;

    case 3:

        printf("\nCategoria de Romance: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- Vermelho, branco e sangue | 70 R$ \n");
        printf("2- Verity | 70 R$");
        printf("\nQual livro você deseja?: ");
        scanf("%d", &esc);
        faxina();  
        registro();
        break;  
    case 4:

        printf("\nCatergoria de Terror: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- It- A Coisa | 50 R$ \n");
        printf("2- O cemitério maldito | 50 R$");
        printf("\nQual livro você deseja?: ");
        scanf("%d", &esc);
        faxina();
        registro();
        break;

    case 5:

        printf("\nCategoria de Motivação: \n");

        printf("Livros disponiveis a baixo:");

        printf("\n1- Arrume sua cama | 60 R$ \n");
        printf("\n2- O poder da Ação | 60 R$");
        printf("\nQual livro você deseja?: ");
        scanf("%d", &esc);

        faxina();
        registro();
        break;

        printf("Erro.");

        faxina();

        printf("Tente novamente.");
        break;
    
    
    }
    
    
    }

void registro(){
    int reg = 0;
    int p;

        printf("Você ja escolheu o seu livro?");
        printf("1 - Sim.");
        printf("2- Não");
        scanf("%d", &p);

        switch(p){
       
       case 1: 
        faxina();

        printf("Escreva a quantidade de livros que você escolheu para o registro:  \n");
        scanf("%d", &reg);
 
    faxina();

            atendente(reg);
        
            case 2:

            faxina();
            localizadordelivros();

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

        faxina();

        printf("\nA compra concluida!\n");
        printf("\n%d é a quantidade de livros que o senhor deseja! \n\n", o);

        printf("\nCompra efetuada com sucesso!\n");

        faxina();

        printf("\tComprovante.\n");
        printf("\n %s cpf", cpf);
        printf("\n %s localização.", loc);
        printf("\nObrigado pela compra, volte sempre!\n");


        

        



    


}

void login()
{

    char Login[200];
    char Senha[200];

    do
    {

        printf("\nDigite o seu Login: ");
        gets(Login);

        printf("Digite a sua Senha: ");
        gets(Senha);

        LoginS(Login, Senha);
        if (LoginS(Login, Senha))
        {
            printf("Login e senha corretos. Acesso concedido!\n");
            break;
            faxina();
        }
        else
        {
            printf("\nLogin ou senha incorretos. Tente novamente.\n");
        }
    } while (1);
    faxina();
    int main();
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    int esc;


     HUD();
    printf("Para proseguir, por favor realize o seu login\n");
    login();

    faxina();
    
    HUD();
    printf("\nEscolha a op��o desejada.\n");
    printf("\n1- Localizador\n");
    printf("\n2- Registro de compras.\n");
    printf("\n3 - Sair.\n\n");

    printf("\nDigite sua escolha: \n");

    scanf("%d", &esc);

    switch (esc)
    {
    

    
    case 1:
        faxina();
        localizadordelivros();

        break;

    case 2:

    faxina();
    registro();


    default:

        faxina();
        printf("Tenha um bom dia.");

        break;
    }

    return 0;
}














