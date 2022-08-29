#include<stdio.h>
#include<string.h>
void freq(char str[])
{
    int i,j;
    char fre[150]={0};
    for(i=0;str[i];i++)
          fre[str[i]]++;
     for(i=0;i<=257;i++)
          if(fre[i]!=0)
          if(fre[i]>=2)
          printf("%c",i);
}
int main()
{
    char str[20];
    printf("enter a string\n");
    gets(str);
    freq(str);
    return 0;
}

