#include <stdio.h>



int main(void){
	int a;
	int b;

	printf("숫자 두개를  입력.");
	scanf("%d %d",&a,&b);
	
	int result = (a + b) / 2;
	printf("결과는 %d ",&result ) ;
	return 0;
}
