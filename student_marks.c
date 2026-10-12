#include<stdio.h>
int main(){
	char name[50];
	float math,physics,chemistry,total;
	float percentage;
	printf("enter the name of student :");
	scanf("%49s",name);
	printf("physics mark:");
	scanf("%f",&physics);
	printf("math mark:");
	scanf("%f",&math);
	printf("chemistry mark :");
	scanf("%f",&chemistry);
	total = math + chemistry + physics;
percentage =(total/300)*100;
	printf("total mark :%.2f\n",total);

	printf("percentage :%.2f\n",percentage);
	return 0;
}