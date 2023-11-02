#include<stdio.h>

void main(){
int x = 4;
int y = 5;

int temp;

temp = x;
x = y;
y = temp;

printf("%d\n",x);
printf("%d\n",y);


}
