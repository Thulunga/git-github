#include<stdio.h>
int main()
{
    int num,i,j,temp;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        temp=0;
        for(j=1;j<=num;j++)
        {
            if(i%j==0)
                temp++;
        }
        if(temp==2)
            printf("%d ",i);
    }
    return 0;
}
