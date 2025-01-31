/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <alisharu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:29:21 by alisharu          #+#    #+#             */
/*   Updated: 2025/01/31 17:29:23 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*malloc_hex(int asc)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * 17);
	if (ptr == NULL)
		return (NULL);
	if (asc == 0)
		ft_strcpy(ptr, "0123456789abcdef");
	else if (asc == 1)
		ft_strcpy(ptr, "0123456789ABCDEF");
	return (ptr);
}

int	ft_print_hex(size_t value, int asc)
{
	char	hex_digits[16];
	int		count;
	char	*hex_set;
	int		i;

	i = 0;
	count = 0;
	hex_set = malloc_hex(asc);
	if (value == 0)
	{
		ft_putchar('0');
		free(hex_set);
		return (1);
	}
	while (value != 0)
	{
		hex_digits[i++] = hex_set[value % 16];
		value /= 16;
	}
	while (i--)
	{
		ft_putchar(hex_digits[i]);
		count++;
	}
	return (free(hex_set), count);
}
