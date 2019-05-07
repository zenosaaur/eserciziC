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
    for (i = 0; i < l; i++)
    {
        if(str[i]==str2[0])
        {
            for (j = 0; j < l2; j++)
            {
                printf("%d")
                if (str[j+i]!=str2[j])
                {
                    printf("%d ----",i);
                    flag=1;
                    break;
                }
                 
            }
            
        } 
    }
    if (flag==1)
    {
        printf("%s è una sottostringa di %s \n",str2,str);
    }
    return 0; 
}