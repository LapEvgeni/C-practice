#include <stdio.h>

void main()
{
    short first_mas[11] ={1,4,5,7,8,12,13,19,20,105,106};
    short start = 0;
    short end = 11;
    short mid = (end-start)/2;
    int find;
   
    
    
    printf("ENTER THE NUMBER\n");
    scanf("%d",&find);
    char flag =0;
    printf("%d",first_mas[0]);
    while (flag != 1)
    {   
        
        if (first_mas[mid] == find)
        {
            printf("Number %d on position %d",find,mid+1);
            flag++;
            
        }
        else if (first_mas[mid]>find){
            end = mid;
            mid = start+((end-start)/2);
            
            printf("qwe");
            printf("start =%d\n",start);
            printf("mid =%d\n",mid);
            printf("end =%d\n",end);
            printf("mas_num =%d\n",first_mas[mid]);
        }
        else if (first_mas[mid]<find) {
            start = mid;
            mid = start+((end-start)/2);
            
            printf("start =%d\n",start);
            printf("mid =%d\n",mid);
            printf("end =%d\n",end);
            printf("mas_num =%d\n",first_mas[mid]);
        
        }  
        
    }
}

