#include <stdio.h>
#include<conio.h>
int main() {
    clrscr();
    int year,check;
    printf("year= ");
    scanf("%d",&year);
    
    check=year%4;
    if (check==0){
        printf("LEAP YEAR");
    }
    else{
         printf("NOT LEAP YEAR");
    }
    getch();
    return 0;
}

