#include<stdio.h>
#include<string.h>
void swap(char*,char*);
void permutation(char*,int,int);
main()
{
    char str[100];
    printf("enter any string");
    gets(str);
    permutation(str,0,(strlen(str)-1));
    getch();
}
void swap(char *p,char *q)
{
    char ch;
    ch=*p;
    *p=*q;
    *q=ch;
}
void permutation(char *s,int i,int n)
{
    static int count;
    int j;
    if(i==n)
    {
        count++;
        printf("(%d)%s\t",count,s);
    }
    else
    {
        for(j=i;j<=n;j++)
        {
            swap((s+i),(s+j));
            permutation(s,i+1,n);
            swap((s+i),(s+j));//BACKTRACKING
        }
    }
}
