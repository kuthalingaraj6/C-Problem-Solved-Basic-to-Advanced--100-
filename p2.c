#include<stdio.h>

int main(){
int a;
float b;
char c;


printf("Enter Your INITIAL\n\t");
scanf("%c",&c);
printf("Enter Your AGE\n\t");
scanf("%d",&a);
printf("Enter Your Salary\n\t");
scanf("%f",&b);


if(b<10000){
    printf("Your Salary is Low%f\t\n:",b);
}
else{
     printf("Your Salary is High%f\t\n",b);
     }
return 0;
}
