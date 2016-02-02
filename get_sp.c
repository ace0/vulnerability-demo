#include <stdio.h>

unsigned long get_sp(void) 
{
	__asm__("movl %esp, %eax");
}

int main() 
{
	printf("Stack pointer (ESP): 0x%x\n", get_sp() );
}

