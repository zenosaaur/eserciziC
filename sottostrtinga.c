#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int i;
    char str[100];
    gets(str);
    int l=strlen(str);
    int j;
    char str2[100];
    gets(str2);
    int flag=0;
    int l2=strlen(str2);
    char letcom[l2-1];
    int i3=0;
    for (i = 0; i < l; i++)
    {
        if(str[i]==str2[0])
        {
            for (j = 0; j < l2; j++)
            {
                if (str[j+1]==str2[j])
                {
                   letcom[i3]=str2[j];
                   i3++;
                }
                
                if (str[j+i]!=str2[j])
                {
                    flag=1;
                }
                 
            }
            
        } 
    }
    if (flag==0)
    {
        printf("%s è una sottostringa di %s \n",str2,str);
    }
    else
    {
        printf("%s non è una sottostringa di %s \n",str2,str);
        printf("le lettere comuni sono:\n");
        for (i = 0; i < i3; i++)
        {
            printf("%d",letcom[i]);
        }
    }
    return 0; 
}