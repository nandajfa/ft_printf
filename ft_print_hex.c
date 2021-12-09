/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:40:31 by jefernan          #+#    #+#             */
/*   Updated: 2021/12/09 09:06:24 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_print_hex(unsigned long n, char *hexa)
{
	unsigned long int	num;
	int					count;
	char				*str;

	if (n == 0)
        return (write(1, "0", 1));
	count = ft_count(n);
	num = n;
	str = (char *)ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (0);
	str[count] = '\0';
	count--;
	while (num)
	{
		str[count--] = hexa[num % 16];
		num /= 16;
	}
	write(1, str, ft_strlen(str));
	free (str);
	return (ft_count(n));
}