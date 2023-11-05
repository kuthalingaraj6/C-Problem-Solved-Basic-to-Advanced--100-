//sum of digits

#include<stdio.h>
int sum=0;
int main(){
long int input;
printf("Enter the Number:");
scanf("%d",&input);
sum_Of_Digits(input);

}
void sum_Of_Digits(long int a){

    int remainder;
while(a!=0){
remainder = a%10;
sum+=remainder;
a=a/10;
}

printf("%d",sum);

}
