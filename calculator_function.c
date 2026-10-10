<<<<<<< HEAD

=======
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int different(int a,int b){
    return a-b;
}
int multiplication (int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int main(){
    int a,b,result;
    char operator;
    int choice=0;
    while(choice!=5){
        printf("\n====SMART CALCULATOR=====:\n");
        printf("1.calculate:\n");
        printf("5.exit:\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        if(choice==5){printf("calculator closed:\n");
        break;}
        if(choice!=1){printf("invalid choice:\n");
        continue;}
        
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the operator (+,-,*,/):");
    scanf(" %c",&operator);
    printf("enter the second number :");
    scanf("%d",&b);
    switch (operator){
        case '+':
        result=sum(a,b);
        printf("sum=%d\n",result);
        break;
        case '-':
    result=different(a,b);
printf("different=%d\n",result);
break;
case '*':
result=multiplication(a,b);
printf("multiplication=%d\n",result);
break;
case '/':
if(b!=0){
result=division(a,b);
printf("division=%d\n",result);}
else{printf("division by zero is not possible\n");}
break;
default:   
printf("the given operator is invalid:\n");}

    }
return 0;


}
>>>>>>> cf18d86 (Add function-based smart calculator)
