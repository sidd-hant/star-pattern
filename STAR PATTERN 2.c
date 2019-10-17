#include <stdio.h>
int main()
{
    int i, j, r;
    int stars, spaces;
   
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    
    stars = 1;
    spaces = r-1;
    
    for(i=1; i<r*2; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" ");
            
        for(j=1; j<stars*2; j++)
            printf("*");
        
        printf("\n");
        
        if(i<r)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    return 0;
}
