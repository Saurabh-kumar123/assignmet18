#include<stdio.h>
#include<string.h>
int cmp(char str[],char s[])
{
    return strcmp(str,s);
}
int main()
{
    char str[20],s[20];
    printf("enter two string\n");
    gets(str);
    gets(s);
    printf(" %d",cmp(str,s));
    return 0;
}
