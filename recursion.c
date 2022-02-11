#include<stdio.h>
#include<stdlib.h>

int recursion(int a,int b){
       if(b==0){
        return 1;
       }
       else{
        return (a*recursion(a,b-1));
       }

}
int main(){
    int x,p;
    scanf("%d%d",&x,&p);
    recursion(x,p);
    printf("%d",recursion(x,p));
    return 0;
}

