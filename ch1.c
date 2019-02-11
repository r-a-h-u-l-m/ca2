#include <stdio.h>
#include<conio.h>
void main()
{
    char b;
    printf("enter a character");
    scanf("%c",&b);
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    getch();
}
