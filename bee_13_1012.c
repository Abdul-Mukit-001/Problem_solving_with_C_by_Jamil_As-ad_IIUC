#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maior_ab = (a+b+abs(a-b))/2;
    int maior_ab_c = (maior_ab+c+abs(maior_ab-c))/2;
    printf("%d eh o maior\n",maior_ab_c);
    return 0;
}
