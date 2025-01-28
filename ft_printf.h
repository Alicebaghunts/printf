/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <alisharu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:02:06 by alisharu          #+#    #+#             */
/*   Updated: 2025/01/28 17:39:06 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *input, ...);
int	print_pointer(unsigned long value, int asc);
int	print_unsigned(unsigned int nb);
int	print_string(char *s);
int	print_int(int n);
int	print_char(char c);
int	print_hex(unsigned int value, int asc);

#endif
