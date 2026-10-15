#include<stdio.h>
int main(){
	int choice,withdraw,current=10000,deposite,enterdpin;
	int correctpin= 9876;
	 int attempts=0;
	while(attempts<3){
		printf("enter your card :\n");
		printf("enter the pin:\n");
		scanf(" %d",&enterdpin);
		if(enterdpin == correctpin){
		printf("your in is correct, welcome!:\n");
		break;
		}else{
			attempts++;
			printf("wrong pin enterd ! attempts left :%d\n",3-attempts);
		}
}if (attempts == 3) {
    printf("Maximum attempts reached. Access denied.\n");
    return 0;
		
	}
	
	do{
		printf("\n=======SMART ATM=======\n");
	printf("1.deposite:\n");
	printf("2.withdraw:\n");
	printf("3.current balance :\n");
	printf("4.exit\n");
	printf("enter your choice :\n");
	scanf(" %d",&choice);
	switch (choice){
		case 1:
			printf("enter the amount to deposite :\n");
			scanf(" %d",&deposite);
			current=current+deposite;
			printf("total amount =%d\n",current);
			break;
			case 2 :
				printf("enter the amount to be withdrawn:\n");
				scanf(" %d",&withdraw);
				if(current>=withdraw){
					current=current-withdraw;
					printf("the remaning money :%d\n",current);
				}else{printf("insufisient balance :\n");
				}
				break;
				case 3 :
					printf("your current balance =%d\n",current);
					printf("thankyou:\n");
					break;
					case 4 :
						printf("thankyou visit again :\n");
						break;
						default :
							printf("the numbar is invalid ! press 1 to 4:\n");
			
	}
}while(choice !=4);


	return 0;
	
	
}
