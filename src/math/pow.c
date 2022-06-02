#include <stdio.h>

// 函数原型声明
float pow(float x, float y);

/**
 * 指数计算
 *
 * <p>更多内容参看<a href="https://huning.tech"><b>胡宁Tech</b></a>
 * @author huning
 */ 
int main(void){
	float x;
	int y;
	printf("input please:");
	scanf("%f^%d", &x, &y);
	printf("result:%.4f\n", pow(x, y));
}

float pow(float x, float y) {
    float p = 1;
    int i;
    for(i = 1; i <= y; i++){
	    p *= x;
	}
	return p;
}