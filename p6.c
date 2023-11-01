#include<stdio.h>

int main(){
char grade;
printf("Enter Your Grade\t:");
scanf("%c",&grade);

if((int)(grade) >=65 && (int)(grade)<=90){
    Capital_Grade(grade);

}else if((int)(grade)>=97 && (int)(grade)<=122){
  Small_Grade(grade);
} else{
    printf("Enter the Correct Grade!...");
}



return 0;
}


void Capital_Grade(char grade){
switch(grade){
case 'A':
    printf("Outstanding Performance!...");
case 'B':
    printf("Very Good Performance!...");
case 'C':
    printf("Good Performance!...");
case 'D':
    printf("You are Just Pass!...");
case 'E':
    printf("Better Luck Next Time!......");
default:
    printf("Invalid Grade!......");
}

}
void Small_Grade(char grade){
switch(grade){
case 'a':
    printf("Outstanding Performance!...");
case 'b':
    printf("Very Good Performance!...");
case 'c':
    printf("Good Performance!...");
case 'd':
    printf("You are Just Pass!...");
case 'e':
    printf("Better Luck Next Time!......");
default:
    printf("Please Enter the Valid Grade A - E");
}


}
