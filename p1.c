#include <stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0;
    char str[10];
    int sz;
    int fd[10];
    printf("enter a string:");
    gets(str);
    sz=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        fd[i]=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                fd[i]++;
                str[j]='0';
            }
        }
    }
    for(i=0;i<sz;i++)
    {
        if(str[i]!='0')
            printf("%c occurs %d\n",str[i],fd[i]);
    }
}
