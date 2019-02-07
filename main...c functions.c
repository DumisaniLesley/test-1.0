#include <stdio.h>
#include <stdlib.h>

int num1,num2, option;
int add(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int divi(int num1,int num2);
int mod(int num1,int num2);

int main(int argc, char *argv[]) {
	printf("Enter num1:\n");
	scanf("%d",&num1);
	printf("Enter num2:\n");
	scanf("%d",&num2);
	
	printf("\n\n");
	printf("1. ADDITION \n");
	printf("2. SUBTRUCTION \n");
	printf("3. MULTIPLICATION \n");
	printf("4. DIVISION \n");
	printf("5. MODULUS \n");
	
	printf("\nChoose option: ");
	scanf("%d", &option);

	switch(option){
		case 1:
			printf("\nThe sum is: %d", add(num1,num2));
			break;
		case 2:
			printf("\nThe difference is: %d", sub(num1,num2));
			break;
		case 3:
			printf("\nThe product is: %d", mul(num1,num2));
			break;
		case 4:
			printf("\nThe qouent is: %d", divi(num1,num2));
			break;
		case 5:
			printf("\nThe remainder is: %d", mod(num1,num2));
			break;
		default:
			printf("\nInvalid option");
			break;
	}
	
	return 0;
} 

int add(int num1,int num2){
	int sum = num1 + num2;
	return sum;
}
int sub(int num1,int num2){
	int difference = num1 - num2;
	return difference;
}
int mul(int num1,int num2){
	int product = num1 * num2;
	return product;
}
int divi(int num1,int num2){
	int qouent = num1 / num2;
	return qouent;
}
int mod(int num1,int num2){
	int remainder = num1 % num2;
	return remainder;
}

