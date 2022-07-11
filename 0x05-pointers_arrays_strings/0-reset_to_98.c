#include <stdio.h>

int main(void)
{
	int n=98;
	int *p;
	p =&n;
	printf("%p", &n);
	printf("%p", p);
}

