#include <stdio.h>
int main()
	{
	int k=20,m=0,n=0,i;
	if (k>m || m>n){
		if(k>m){
			i=k;
			k=m;
			m=i;
		};
		if(m>n){ 
			i=m;
			m=n;
			n=i;
		};
		if(k>m){
			i=k;
			k=m;
			m=i;
		};
	};
	return 0;
}
