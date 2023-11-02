#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter the Alphabet\t:");
    scanf("%c",&ch);
    //online_method(ch);
   printf("%c",own_Method(ch));
return 0;
}

char own_Method(char ch){

char ans;
ans = ch+32
return ans;


}
void online_method(char ch){

ch= getchar();
if(islower(ch)){
    putchar(toupper(ch));
}
else{
    printf("%c",tolower(ch));
}
}
