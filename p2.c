#include<stdio.h>
int check_anagram(char [],char []);
int main()
{
    char s1[20],s2[20];
    printf("enter a string\n");
    gets(s1);
    printf("enter a string\n");
    gets(s2);
    if (check_anagram(s1,s2) == 1)
        printf("strings are anagrams.\n");
    else
        printf("strings are not anagrams.\n");
    return 0;
}
int check_anagram(char s1[],char s2[])
{
    int a[26]={0},b[26]={0},i=0;
    while(s1[i]!='\0')
    {
        a[s1[i]-'a']++;
        i++;
    }
    while(s2[i]!='\0')
    {
        b[s2[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i])
            return 1;
    }
    return 0;
}
