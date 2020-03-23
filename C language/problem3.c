// SUM AND DIFFERENCE OF TWO NUMBERS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    int sum1=0,diff1=0;
    float sum2=0,diff2=0;

    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);

    sum1=a+b;
    diff1=a-b;

    sum2=c+d;
    diff2=c-d;

    printf("%d %d\n",sum1,diff1);
    printf("%.1f %.1f",sum2,diff2);

    return 0;
}
