#include<stdio.h>
#include"sample1.c"
void main(){
int a,b,c;
printf("enter two number ");
scanf("%d%d",&a,&b);
c=sub(a,b);
printf("sub=%d",c);
}