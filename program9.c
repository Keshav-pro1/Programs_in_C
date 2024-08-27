#include<stdio.h>
//#include <conio.h>
int main()
{
//    clrscr();
    int choice,ascii;
    char user;
    printf(" Enter 1.ASCII to Char \n Enter 2.Char to ASCII= ");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Enter ASCII VALUE= ");
        scanf("%d",&ascii);
        printf("ASCII to Char= %d %c",ascii,ascii);
    }
    else if (choice==2)
    {
        printf("Enter Character= ");
        scanf("%c",&user);
        printf("Char to ASCII= %c %d",user,user);
    }
    else
    {
        printf("INVALID Option");
    }
//    getch();
    return 0;

}