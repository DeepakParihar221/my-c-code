#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, k;
    char string[100];
    char reverse[100];
    printf("Enter a string:\t");
    scanf("%s", string);
    printf("The Original string is %s\n", string);
    for(i = 0; string[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        reverse[j] = string[k];
        k--;
    }
    printf("The reverse string is %s\n", reverse);
    getch();
}
