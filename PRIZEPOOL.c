#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,Z;
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    Z = X*10 + Y *90;
	    printf("%d",Z);
	    printf("\n");
	}
}

