/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_usd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <alisharu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:57:47 by alisharu          #+#    #+#             */
/*   Updated: 2025/02/01 12:36:04 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_usd(unsigned int num)
{
	char	arr[10];
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num > 0)
	{
		arr[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(arr[i - 1]);
		i--;
		count++;
	}
	return (count);
}
