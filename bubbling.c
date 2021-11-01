#include <stdio.h>

int main(){
    int a[]={542,253,134,235,1321,48,252,234,56,78},i,j;
    //n个数字
    //搞n-1轮
    //第a轮需要比较n-a次
    
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10-i-1; j++)//从前往后捋
        {
            if (a[j]<a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
            
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}