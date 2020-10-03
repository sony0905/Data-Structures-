#include<stdio.h>
void TOH(int,char,char,char);
main()
{
    int n;
    char beg='A',aux='B',end='C';
    printf("enter number of tiles\n");
    scanf("%d",&n);
    TOH(n,beg,aux,end);
}
void TOH(int n,char BEG,char AUX,char END)
{
    if(n>=1)
    {
        TOH(n-1,BEG,END,AUX);
        printf("%c to %c\n",BEG,END);
        TOH(n-1,AUX,BEG,END);//BACKTRACKING
    }
}
