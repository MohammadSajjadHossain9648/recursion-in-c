#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int gcd(int a,int b){
    if(b==0)
        return a;
    else{
            return (b,a%b);
        }
}

int main(){
    int x,y,ans;
    scanf("%d%d",&x,&y);
    if(y>x)
        ans=gcd(y,x);
    else
        ans=gcd(x,y);
    printf("the gcd is %d",ans);
    return 0;
}
