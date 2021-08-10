#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c,livros[3][20]={"EU ROBO","FUNDACAO","SNOW CRASH"},profissoes[3][20]={"ARTESAO","BARISTA","COREOGRAFO"},jogos[3][20]={"PAC-MAN","SIMCITY","SPACEWAR"},palavra[20],forca[3][20];
    int tema,i,j,tentativas,pontos=90,letras,acertos;
    acertos=letras=tentativas=0;
    printf("ADIVINHE AS PALAVRAS");
    printf("\n========================\n");
    printf("\nEscolha um tema:\n");
    printf("1.Titulos de Livros\n2.Profissoes\n3.Jogos Eletronicos");
    do
    {
        printf("\n\nTema escolhido: ");
        scanf("%d",&tema);
    }while(tema<1 || tema>3);
    if(tema==1)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<strlen(livros[i]);j++)
                forca[i][j]='_';
            forca[i][j]='\0';
        }
        while(tentativas<7)
        {
            printf("\n\nLIVROS");
            printf("\n==========\n");
            for(i=0;i<3;i++)
            {
                printf("\n");
                for(j=0;j<strlen(forca[i]);j++)
                    printf("%c ",forca[i][j]);
            }
            printf("\n\nDigite a letra que voce acha que tenha, caso deseje adivinhar uma palavra tecle '?' (voce tem mais %d chance(s))= ",7-tentativas);
            fflush(stdin);
            scanf("%c",&c);
            tentativas++;
            if(c=='?')
            {
                printf("Qual palavra voce deseja adivinhar 1,2 ou 3? ");
                fflush(stdin);
                scanf("%c",&c);
                printf("Digite a palavra: ");
                fflush(stdin);
                gets(palavra);
                strupr(palavra);
                switch(c)
                {
                    case '1': if(strcmp(palavra,livros[0])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[0][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '2': if(strcmp(palavra,livros[1])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[1][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '3': if(strcmp(palavra,livros[2])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[2][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    default: printf("Voce nao escolheu uma palavra");
                }
            }
            else
            {
                letras++;
                pontos=pontos-5;
                for(i=0;i<3;i++)
                    for(j=0;j<strlen(forca[i]);j++)
                       if(livros[i][j]==toupper(c))
                            forca[i][j]=c;
            }
            system("cls");
        }
        printf("\n\nFIM DO JOGO");
        printf("\n================");
        printf("\n\nSua Pontuacao foi: %d",pontos);
        printf("\n%d letras foram usadas",letras);
        printf("\nAcertou %d palavra(s)",acertos);
        printf("\n\nRESPOSTAS");
        printf("\n================");
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<strlen(livros[i]);j++)
                printf("%c ",livros[i][j]);
        }
        printf("\n\n");
    }
    else if(tema==2)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<strlen(profissoes[i]);j++)
                forca[i][j]='_';
            forca[i][j]='\0';
        }
        while(tentativas<7)
        {
            printf("\n\nPROFISSOES");
            printf("\n===============\n");
            for(i=0;i<3;i++)
            {
                printf("\n");
                for(j=0;j<strlen(forca[i]);j++)
                    printf("%c ",forca[i][j]);
            }
            printf("\n\nDigite a letra que voce acha que tenha, caso deseje adivinhar uma palavra tecle '?' (voce tem mais %d chance(s))= ",7-tentativas);
            fflush(stdin);
            scanf("%c",&c);
            tentativas++;
            if(c=='?')
            {
                printf("Qual palavra voce deseja adivinhar 1,2 ou 3? ");
                fflush(stdin);
                scanf("%c",&c);
                printf("Digite a palavra: ");
                fflush(stdin);
                gets(palavra);
                strupr(palavra);
                switch(c)
                {
                    case '1': if(strcmp(palavra,profissoes[0])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[0][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '2': if(strcmp(palavra,profissoes[1])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[1][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '3': if(strcmp(palavra,profissoes[2])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[2][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    default: printf("Voce nao escolheu uma palavra");
                }
            }
            else
            {
                letras++;
                pontos=pontos-5;
                for(i=0;i<3;i++)
                    for(j=0;j<strlen(forca[i]);j++)
                       if(profissoes[i][j]==toupper(c))
                            forca[i][j]=c;
            }
            system("cls");
        }
        printf("\n\nFIM DO JOGO");
        printf("\n================");
        printf("\n\nSua Pontuacao foi: %d",pontos);
        printf("\n%d letras foram usadas",letras);
        printf("\nAcertou %d palavra(s)",acertos);
        printf("\n\nRESPOSTAS");
        printf("\n================");
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<strlen(profissoes[i]);j++)
            printf("%c ",profissoes[i][j]);
        }
        printf("\n\n");
    }
    else if(tema==3)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<strlen(jogos[i]);j++)
                forca[i][j]='_';
            forca[i][j]='\0';
        }
        while(tentativas<7)
        {
            printf("\n\nJOGOS ELETRONICOS");
            printf("\n======================\n");
            for(i=0;i<3;i++)
            {
                printf("\n");
                for(j=0;j<strlen(forca[i]);j++)
                    printf("%c ",forca[i][j]);
            }
            printf("\n\nDigite a letra que voce acha que tenha, caso deseje adivinhar uma palavra tecle '?' (voce tem mais %d chance(s))= ",7-tentativas);
            fflush(stdin);
            scanf("%c",&c);
            tentativas++;
            if(c=='?')
            {
                printf("Qual palavra voce deseja adivinhar 1,2 ou 3? ");
                fflush(stdin);
                scanf("%c",&c);
                printf("Digite a palavra: ");
                fflush(stdin);
                gets(palavra);
                strupr(palavra);
                switch(c)
                {
                    case '1': if(strcmp(palavra,jogos[0])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[0][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '2': if(strcmp(palavra,jogos[1])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[1][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    case '3': if(strcmp(palavra,jogos[2])==0)
                               {
                                 printf("Acertou! Ganhou 10 pontos!");
                                 pontos=pontos+10;
                                 acertos++;
                                 for(j=0;palavra[j]!='\0';j++)
                                    forca[2][j]=palavra[j];
                                 break;
                               }
                               else
                               {
                                   pontos=pontos-10;
                                   printf("Errou! Perdeu 10 pontos!");
                                   break;
                               }
                    default: printf("Voce nao escolheu uma palavra");
                }
            }
            else
            {
                letras++;
                pontos=pontos-5;
                for(i=0;i<3;i++)
                    for(j=0;j<strlen(forca[i]);j++)
                       if(jogos[i][j]==toupper(c))
                            forca[i][j]=c;
            }
            system("cls");
        }
        printf("\n\nFIM DO JOGO");
        printf("\n================");
        printf("\nSua Pontuacao foi: %d",pontos);
        printf("\n%d letras foram usadas",letras);
        printf("\nAcertou %d palavra(s)",acertos);
        printf("\n\nRESPOSTAS");
        printf("\n================");
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<strlen(jogos[i]);j++)
                printf("%c ",jogos[i][j]);
        }
        printf("\n\n");
    }
    printf("Desenvolvido por:\nJoao Zanholo \nJulia Gomes \nRafael Dorta");
    printf("\n\n");
    return 0;
}
