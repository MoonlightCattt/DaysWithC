#include <stdio.h>

int main(){
    int a[5][4],i,j,sum=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
            getchar();
            sum+=a[i][j];
        }
        a[i][3]=(int)(sum/3.0);
        sum=0;

        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("student%3d  physics%3d math%3d FL%3d AVE%3d\n",i,a[i][0],a[i][1],a[i][2],a[i][3]);
        
    }
    
    
    
}

