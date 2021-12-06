/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 08:30:47 by jefernan          #+#    #+#             */
/*   Updated: 2021/12/03 19:53:35 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	va_start (ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_print_flag(format[i], ap);
			i++;
		}
		else
			len += write (1, format, 1);
		i++;
	}
	va_end(ap);
	return (len);
}

int	ft_print_flags(const char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_print_char(va_arg(ap, int));
	else if (*format == 's')
		len += ft_print_str(va_arg(ap, char *));
	else if (*format == 'p')
		len += ft_print_ptr(va_arg(ap, unsigned long));
	else if (*format == 'd' || *format == 'i')
		len += ft_print_d_i(va_arg(ap, int));
	else if (*format == 'u')
		len += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), format);
	else if (*format == '%')
		write(1, format, 1);
	return (len);
}

int	ft_print_char(int c)
{
	write (1, &c, 1);
	return (1);
}
