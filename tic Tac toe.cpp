#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
void tiktak (char sy[]) {
    system("cls");
    int  place = 1;
    printf("Welcome to tic tac\nEnter number to place X / O\n\n");
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            if(i == 2 || i == 5)
            {
                printf("#");
                continue;
            }
            if( j == 2 || j == 5)
            {
                printf("#");
            }
            else if(i == 1 || i == 4 || i == 7)
            {
                if(j == 1 || j == 4 || j == 6)
                {   if(sy[place] == 'X')
                    {
                        printf(" X  ");
                        place++;
                    }
                    else if(sy[place]=='0')
                    {
                        printf(" O  ");
                        place++;
                    }
                    else {
                        printf(" %c  ",sy[place]);
                        place++;
                    }
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int d=1;
    char sy[10] = {'0','1','2','3','4','5','6','7','8','9'};
label:

    tiktak(sy);
    int m,n;
    char p1[100],p2[100];
    if(d % 2 ==1)
    {
        printf("Player X :");
        gets(p1);
        if(p1[1]=='\0')
        {
            m=atoi(p1);
        }
        else
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }
        if(m==1 || m==2 || m==3 || d==4 || m==5 || m==6 || m==7 || m==8 || m==9)
        {
            goto don;
        }
        else
        {
            printf("abhey saale\n");
            sleep(1);
            system("cls");
            goto label;
        }
don:

        if(sy[m]=='X')
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }
        if(sy[m]=='0')
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }

        sy[m] = 88;
    }
    else
    {
        printf("Player O :");
        gets(p2);
        if(p2[1]=='\0')
        {
            n=atoi(p2);
        }
        else
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }

        if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7 || n==8 || n==9)
        {
            goto lod;
        }
        else
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }

lod:
        if(sy[n]=='X')
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }
        if(sy[n]=='0')
        {
            printf("abhey saale\n");
            sleep(1);
            goto label;
        }

        sy[n] = 48;
    }

    if(sy[1] == 'X' && sy[4] == 'X' && sy[7] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[1] == 'X' && sy[2] == 'X' && sy[3] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[1] == 'X' && sy[5] == 'X' && sy[9] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[2] == 'X' && sy[5] == 'X' && sy[8] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[3] == 'X' && sy[5] == 'X' && sy[7] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[3] == 'X' && sy[6] == 'X' && sy[9] == 'X')
    {    tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[4] == 'X' && sy[5] == 'X' && sy[6] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[7] == 'X' && sy[8] == 'X' && sy[9] == 'X')
    {   tiktak(sy);
        printf("Player 1 WIN");
        exit(0);
    }
    else if(sy[1] == '0' && sy[4] == '0' && sy[7] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[1] == '0' && sy[2] == '0' && sy[3] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[1] == '0' && sy[5] == '0' && sy[9] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[2] == '0' && sy[5] == '0' && sy[8] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[3] == '0' && sy[5] == '0' && sy[7] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[3] == '0' && sy[6] == '0' && sy[9] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
    }
    else if(sy[4] == '0' && sy[5] == '0' && sy[6] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    else if(sy[7] == '0' && sy[8] == 'O' && sy[9] == '0')
    {   tiktak(sy);
        printf("Player 2 WIN");
        exit(0);
    }
    if(d == 9)
    {
        tiktak(sy);
        printf("Draw");
        exit(0);
    }
    d++;
    goto label;
    return 0;
}
