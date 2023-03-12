#include<stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    while (n--)
    {   int result = 0;
        scanf("%d %d", &x, &y);
        if(x<0)
            x=x*-1;
        if(y<0)
            y=y*-1;
        // printf("%d %d", x,y);
        int max = (x>y)?x:y;
        // printf("\n%d",max);

        if(x==y){
            result = x+y;
        }
        else{
            result = max*2-1;
        }
        printf("%d\n",result);
    }
    
}