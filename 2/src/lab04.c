#include <stdio.h>
int main()
	{
	float x = 94.986;
	int a = ( int ) x;
	float b = ( x -a ) * 1000;
	float y;
	float r;
	if ( a!=0 ) {
	y = b * 100 / a;
	r = ( int ) y / 100.00;
	}
	 else if ( a == 0 ) {
	//error
	};
	return 0;
}
