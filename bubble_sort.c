#include <stdio.h>

void main()
{
    int massive[10]={1,9,123,4,2,11,49,60,30,23};
    size_t leng = sizeof(massive)/sizeof(massive[0]);
    int flag = 1;
    printf("Unsourted massive: ");
    for (size_t i = 0; i < leng; i++)
        {
            printf("%d ",massive[i]);
            
        }
        printf("\n");
    while (flag !=0)
    {
        flag = 0;
        for (size_t i = 0; i < leng-1; i++)
        {
            if (massive[i]>massive[i+1]){
                int a, b;
                a= massive[i];
                b=massive[i+1];
                massive[i]=b;
                massive[i+1]=a;
                flag = 1;
            }
            
        }
        
        
    }
    printf("Sourted massive: ");
    for (size_t i = 0; i < leng; i++)
        {
            printf("%d ",massive[i]);
            
        }
        printf("\n");

}
