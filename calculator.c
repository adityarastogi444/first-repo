#include<stdio.h>
int main(){
float a,b,result;
char operator;
printf("enter the first number :");
scanf(" %f",&a);
printf("enter the operator (+,-,/,*):");
scanf(" %c",&operator);
printf("enter the second number :");
scanf(" %f",&b);
if(operator == '+'){
    printf("sum =%.2f\n",a+b);
}
else if(operator == '-'){
    printf("different = %.2f\n",a-b);
}
else if(operator =='*'){
    printf("multiplication =%.2f\n",a*b);
}
else if(operator =='/'){
    printf("division =%.2f\n",a/b);
}
else{printf(" the given operator is invalid.\n");}
return 0;
}