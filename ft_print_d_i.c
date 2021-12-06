/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:47:31 by jefernan          #+#    #+#             */
/*   Updated: 2021/12/03 19:54:32 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d_i(int nbr)
{
	char	*num;
	int		len;

	if (nbr == 0)
		return (write(1, "0", 1));
	len = 0;
	num = ft_itoa(nbr);
	len = ft_print_str(nbr);
	return (len);
}