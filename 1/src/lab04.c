#include <stdio.h>
main(){
	float result;
	float a = 1.999; //given number 
	int onePart = (int)a;
	float b = (a - onePart) *1000;
	int twoPart = (int)b;
	
	if(onePart == 0){
		result = 0.431; //number will be given if delimiter is equal 0
	}else{
		result=twoPart / onePart;
	}
	
	return 0;
	}
	
