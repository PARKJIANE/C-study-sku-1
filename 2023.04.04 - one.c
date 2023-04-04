/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오 : ");
	scanf("%d", &x);
	printf("두번째 숫자를 입력하시오 : ");
	scanf("%d", &y);
	sum = x + y;
	printf("두수의 합 : %d", sum);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	float radius; // 원의 반지름
	float area; // 면적

	printf("반지름을 입력하시오 : ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적 : %f\n", area);

	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double rate; // 원/달러 환율
	double usd; // 달러화
	int krw; // 원화는 정수형 변수로 선언

	printf("환율을 입력하시오: ");
	scanf("%lf", &rate); 
	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);
	usd = krw / rate;
	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);

	return 0;
}
*/
