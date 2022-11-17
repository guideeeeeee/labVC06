#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i;
    float fnum[5];
    for(i = 0;i<=4 ; i++)
    {
        printf("\n input floatting number [%d](x.xx):",i+1);
        scanf("%f",&fnum[i]);
    }
    printf("\n----------------");
    for(i = 0;i<=4;i++)
    {
        printf("\n Your floatting number [%d]=[%f]",i,fnum[i]);
    }
    system("pause");
}