#include<stdio.h>

int main(){
int age;
printf("Enter Your AGE\t:\n");
scanf("%d",&age);

if(age>=18 && age<=60)
    printf("You are eligible for Vote & home\n");
    else if(age<18)
        printf("You are Not Eligible for Vote\n");
    else
        printf("You are eligible for Vote");

    return 0;
    }

