#include <stdio.h>

// 函数原型声明
int gcd(int, int);

/**
 * 最大公约数 Greatest Common Divisor
 *
 * <p>更多内容参看<a href="https://huning.tech"><b>胡宁Tech</b></a>
 * @author huning
 */ 
int main(void) {
	int num1 = 34;
	int num2 = 85;
	printf("The gcd of %d and %d is: %d", num1, num2, gcd(num1, num2));
}

int gcd(int num1, int num2){
	// 保证num1大于num2
	int num = 0;
	if(num1 < num2){
		num = num1;
		num1 = num2;
		num2 = num;
	}
	// 辗转求余
	while(num2 != 0){
		num = num1 % num2;
		num1 = num2;
		num2 = num;
	}
	
	return num1;
}