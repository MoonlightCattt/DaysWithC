#include <stdio.h>


int main(){
    int c,a[10],i,j,maxnum=0;
    a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=a[7]=a[8]=a[9]=0;
    c = getchar();
    while(c !=EOF){
        putchar(c);
        printf("   \n");
        for ( i = 0; i < 10; i++)
        {
            j=i+48;
            if (c==j)
            {
                a[i]++;
            }
            
        }
        
        c= getchar();
        if (c=='#')
        {
            c=EOF;
        }
          
    }
    printf("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    printf("\n\n\n\n");
    printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t\n");
    
    
    for(i=0;i<=9;i++){
        if (maxnum<a[i])
        {
            maxnum=a[i];
        }
        
    }
    for ( i = 1; i <= maxnum; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (a[j]>=i)
            {
                printf("@\t");
            }else{
                printf(" \t");
            }
            if (j==9)
            {
                printf("\n");
            }
            
            
        }  
    }   
}