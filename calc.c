#include<stdio.h>
void addition(double x,double y){
    double z=x+y;
    printf("%lf",z);
}
void multiplication(double x,double y){
    double z=x*y;
    printf("%lf",z);
}
void subtraction(double x,double y){
    double z=x-y;
    printf("%lf",z);
}
void division(double x,double y){
    double z=x/y;
    printf("%lf",z);
}
void modulus(double x,double y){
    double z=x%y;
    printf("%lf",z);
}
int main(){
    double a,b,ans;
    char operator;
    printf("enter the first number:");
    scanf("%lf",&a);
    printf("enter the second number:");
    scanf("%lf",&b);
    printf("choose the operation with arthmetic operators");
    scanf("%c",&operator);
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
    return 0;
}
