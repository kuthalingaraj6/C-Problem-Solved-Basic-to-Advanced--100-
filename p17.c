//Palindrome Number;

#include<stdio.h>

int main(){

int input;
printf("Enter the Number\t:");
scanf("%d",&input);

palindromeNumber(input);
return 0;
}

void palindromeNumber(int input){
int temp;
int ans = 0;
int b;
int a;
a = input;
while(input>0){

    b=input%10;
    temp =(temp*10)+b;
    input = input/10;
}

(a==temp) ? printf("This is a Palindrome Number")
:
    printf("This is Not a Palindrome Number");

}
