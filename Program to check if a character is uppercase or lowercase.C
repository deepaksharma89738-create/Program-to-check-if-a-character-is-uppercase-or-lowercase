/*Program to check if a character is uppercase or lowercase*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("The character is uppercase\n");
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        printf("The character is lowercase\n");
    } 
    else 
    {
        printf("The character is not an alphabet\n");   
    }
    return 0;
}