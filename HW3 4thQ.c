#include <stdio.h>

int fun(int n) 
{ 
	for(;n > 0; n--) 
		printf("HI FUNCTIONS ");
	 return 0; 
}
 
int main() 
{ 
	int (*ptr)(int ) = fun; 
	(*ptr)(3); 
	return 0; 
} 
