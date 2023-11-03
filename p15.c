#include<stdio.h>
int main(){
long int fact = 1;
int n;

printf("Enter the Number\t:");
scanf("%d",&n);

for(int i = 1;i<=n;i++){

    fact*=i;
}
printf("%d Factorial is",fact);

return 0;
}
