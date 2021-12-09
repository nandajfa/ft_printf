/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:40:31 by jefernan          #+#    #+#             */
/*   Updated: 2021/12/09 09:14:22 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	unsigned int len;

	if (ptr == 0)
		return (write(1, "0x0", 3));
	len = write(1, "0x", 2);
    len += ft_print_hex(ptr, "0123456789abcdef");
	return (len);
}