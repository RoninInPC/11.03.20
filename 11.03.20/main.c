#include"functions.h"
#include<math.h>
#include<stdio.h>
#include<windows.h>
int main() {
	printf("Choose exc: print 1 - 1, print 2 - 2\n");
	int n;
	scanf_s("%d", &n);
	if (n == 1) {
		List* L = MakeList();
		Make(L, 10);
		PrintListFloat(L);
		PushBeforeThisNumber(L, 10);
		PrintListFloat(L);
	}
	else
	{
		int l, r;
		scanf_s("%d %d", &l, &r);
		double pi = 3.141592654;
		printf("%.3f", pi*r*r*(1-asin(sqrt(4*r*r-l*l)*l/2/r/r)/90)-sqrt(4 * r * r - l * l)*l/4);
	}
	return 0;
}