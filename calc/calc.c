#include<stdio.h>
float add() {
	float sum =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : ");
	scanf("%f", &num1);
	printf("두번째 숫자 입력 : ");
	scanf("%f", &num2);
	sum = num1 + num2;
	
	return sum ;
}
float sub() {
	int result =0, num1=0, num2=0;
	
	return result;
}

int maim() {
	printf("덧쎔결과 : %f\n", add());
}