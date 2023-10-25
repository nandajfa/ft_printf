#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int i = 12;
	char j = 'c';

	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	
	ft_printf("There is another pointer: %p\n", &i);
	printf("There is another pointer: %p\n", &i);

	ft_printf("%p, %p, %p little pointers\n", NULL, &i, &j);
	printf("%p, %p, %p little pointers\n", NULL, &i, &j);
	
	ft_printf("%c\n", 'A');
	

	ft_printf("%c\n", '~');
	printf("%c\n", '~');
	
	ft_printf("%s\n", NULL);


	ft_printf("%s\n", "Hello There");
	printf("%s\n", "Hello There");

	ft_printf("%s%s%s%s\n", "Hello ", "There!\n", "General ", "Kenobi.\n");
	printf("%s%s%s%s\n", "Hello ", "There!\n", "General ", "Kenobi.\n");

	ft_printf("%s string shows the value of %s\n", "The following", NULL);

	
	ft_printf("This is a empty string: `%s`\n", "");
	printf("This is a empty string: `%s`\n", "");

	ft_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);

	ft_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);

	ft_printf("%d\n", 4242);
	printf("%d\n", 4242);

	ft_printf("%d\n", -1023456789);
	printf("%d\n", -1023456789);

	ft_printf("%i\n", -1);
	printf("%i\n", -1);

	ft_printf("%i\n", 9);
	printf("%i\n", 9);

	ft_printf("%x\n\n", LONG_MAX);
	printf("%lx\n\n", LONG_MAX);


	ft_printf("Hello %i, there is another conversion %d\n", 123, 9854);
	printf("Hello %i, there is another conversion %d\n", 123, 9854);

	ft_printf("%d.%i%i%d%d%d%i\n", 3, 1, 4, 1, 5, 9, 2);
	printf("%d.%i%i%d%d%d%i\n", 3, 1, 4, 1, 5, 9, 2);

	ft_printf("%u\n", 0U);
	printf("%u\n", 0U);

	ft_printf("%u\n", 4294967295U);
	printf("%u\n", 4294967295U);

	ft_printf("%u\n", 9U);
	printf("%u\n", 9U);

	ft_printf("%u\n", 10U);
	printf("%u\n", 10U);

	ft_printf("%u\n", 100U);
	printf("%u\n", 100U);

	ft_printf("%d\n", 0);
	printf("%d\n", 0);

	ft_printf("Teste\n");
	printf("Teste\n");

	return (0);
}
