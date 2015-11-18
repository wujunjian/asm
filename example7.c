
#include <stdio.h>
int main(int __argc, char* __argv[]) 
{ 
	int input = 8; 
	int result;

	__asm__ __volatile__("movl %1,%0" : "=r" (result) : "m" (input));
	printf("out = %d\n", result);
	return 0; 
}
