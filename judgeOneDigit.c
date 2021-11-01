#include <stdio.h>

int judge(int a);
int main(){
    int b,ju;
    printf("please input a number:");
    scanf("%d",&b);
    ju=judge(b);
    if (ju)
    {
        printf("%d is both a 3 and 5 of the whole multiple of.",b);
    }else{
        printf("%dis not both a 3 and 5 of the whole multiple of.",b);
    }
    
}

int judge(a){
    int digit;
    digit=a;
    if ((digit%3==0)&&(digit%5==0))
    {
        return 1;
    }else{
        return 0;
    }
    

}