#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int a=1000;

	ft_printf("%x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%x %x %lx %lx %lx %x %x\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	ft_printf("%d\n", ft_printf("%x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("%d\n", printf("%x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	ft_printf("%d",ft_printf("\n%d",a));
	printf("%d",printf("\n%d",a));

	ft_printf("%x\n", LONG_MAX);
	printf("%lx\n\n", LONG_MAX);

	ft_printf("%d\n", ft_printf("%x\n", LONG_MAX));
	printf("%d\n", printf("%lx\n", LONG_MAX));

	ft_printf("%x\n", LONG_MIN);
	printf("%lx\n\n", LONG_MIN);

	ft_printf("%x\n", ULONG_MAX);
	printf("%lx\n\n", ULONG_MAX);

	ft_printf("%x\n", 9223372036854775807LL);
	printf("%llx\n\n", 9223372036854775807LL);

	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

	return (0);
}
