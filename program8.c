#include <stdio.h>
//#include<conio.h>
int main() {
//    clrscr();
    char Ch_In;
    printf("Enter the character= ");
    scanf("%c",&Ch_In);
    
    if (Ch_In=='A'||Ch_In=='E'||Ch_In=='I'||Ch_In=='O'||Ch_In=='U'||Ch_In=='a'||Ch_In=='e'||Ch_In=='i'||Ch_In=='o'||Ch_In=='u')
    {
        printf("vowel");
    }
    else if ((Ch_In>='a' && Ch_In<='z')||(Ch_In>='A'&& Ch_In<='Z'))
    {
        printf("consonant");
    }
    else if (Ch_In>='0' && Ch_In<='9')
    {
        printf("integer");
    }
    else
    {
        printf("Special character");
    }
    
//    getch();
    return 0;
}

