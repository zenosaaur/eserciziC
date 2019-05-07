#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int N;
    printf("inserisci la grandezza del vettore \n");
    do
    {
        scanf("%d",&N);
    } 
    while (N<0);
    int vett[N];
    printf("inserisci il vettore \n");
    for(i = 0; i < N; i++)
    {
        scanf("%d",&vett[i]);
    }
    int flag=0;
    int tmp;
    int j;
    int imin;
    for(i = 0; i < N-1; i++)
    {
        imin=i;
        flag=0;
        for(j=i+1; j < N; j++)
        {
            if (vett[i]>vett[j])
            { 
                if (vett[j]<vett[imin])
                {
                    imin=j;
                    flag=1;
                }
            }
        }
        if(flag==1)
        {
           tmp=vett[i];
           vett[i]=vett[imin];
           vett[imin]=tmp;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d",vett[i]);
    }
    
    system("pause");
}
