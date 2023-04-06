#include <stdio.h>
int main()
{	
	float height = 173;
    float weight = 63.7;
    float bmi = 0;
    height = height * 0.01; //cm -> m 변환
    bmi = weight / (height * height);
    printf("당신의 bmi : %.2f\n", bmi);
    return 0;
}