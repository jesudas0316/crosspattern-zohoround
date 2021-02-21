#include<stdio.h>
int main()
{
    int row,colum,totalrows=9;
    char name[]="zohoround";
    for(row=0;row<totalrows;row++){
        for(colum=0;colum<totalrows;colum++)
        {
            if( (row==colum)||((row+colum)==(totalrows-1)))
        
                printf("%d",row);
            else
                printf(" ");
                
        
        }
        printf("\n");
    }
}
