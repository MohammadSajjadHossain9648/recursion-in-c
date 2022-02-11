#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int lcm(int a, int b){
    int v=a;
    if(b%v==0&&a%v==0){
        return v;
    }
    else{
        return v+a;
    }
}
int main(){
    int x,y,ans;
    scanf("%d%d",&x,&y);
    if(y>x)
        ans=lcm(y,x);
    else
        ans=lcm(x,y);
    printf("the LCM is %d",ans);
    return 0;
}
