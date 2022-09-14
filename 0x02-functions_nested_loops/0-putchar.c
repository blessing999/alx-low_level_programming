#include "main.h"
/**
*main - function_prints_text_as_output
*
*Return:return 0
*/
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}
