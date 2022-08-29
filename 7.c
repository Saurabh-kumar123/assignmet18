#include<stdio.h>
#include<string.h>
char* rev(char str[])
{
    int i,j;
    char temp;
    for(i=0;str[i];i++);
    for(j=0;j<i/2;j++)
    {
    temp=str[j];
    str[j]=str[i-1-j];
    str[i-1-j]=temp;
    }
    return str;
}
int main()
{
    char str[20],s[20];
    printf("enter a string\n");
    gets(str);
    strcpy(s,str);
    if(strcmp(s,rev(str))==0)
     printf("palendron");
    else
     printf("not palendron");
    return 0;
}
