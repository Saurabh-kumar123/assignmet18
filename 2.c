#include<stdio.h>
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
    char str[20];
    printf("enter a string\n");
    fgets(str,20,stdin);
    printf("%s",rev(str));
    return 0;
}
