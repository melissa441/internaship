#include<stdio.h>
void addition(double x,double y){
    double z=x+y;
    printf("%lf \n",z);
}
void multiplication(double x,double y){
    double z=x*y;
    printf("%lf \n",z);
}
void subtraction(double x,double y){
    double z=x-y;
    printf("%lf \n",z);
}
void division(double x,double y){
    double z=x/y;
    printf("%lf \n",z);
}
void modulus(int x,int y){
    int z=x%y;
    printf("%d \n",z);
}
int main(){
    double a,b,ans;
    char operator;
    int choice;
    do{
    printf("choose the operation with arthmetic operators:");
    scanf("%c",&operator);
    printf("enter the first number:");
    scanf("%lf",&a);
    printf("enter the second number:");
    scanf("%lf",&b);
    switch(operator){
        case '+':addition(a,b);
        break;
        case '*':multiplication(a,b);
        break;
        case '-':subtraction(a,b);
        break;
        case '/':division(a,b);
        break;
        case '%':modulus(a,b);
        break;
        default:printf("Invalid operator.");
        break;
    }
    printf("Do you want to continue? enter 1 if not enter 0:");
    scanf(" %d", &choice);
    }while(choice==1);
    return 0;
}
