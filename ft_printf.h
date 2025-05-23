/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <alisharu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:02:06 by alisharu          #+#    #+#             */
/*   Updated: 2025/02/01 12:38:36 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *input, ...);
int	ft_print_ptr(unsigned long value, int asc);
int	ft_print_usd(unsigned int num);
int	ft_print_hex(size_t value, int asc);

#endif
