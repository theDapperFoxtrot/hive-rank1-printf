/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smishos <smishos@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:50:59 by smishos           #+#    #+#             */
/*   Updated: 2024/06/07 17:57:25 by smishos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	result;

	result = 0;
	if (!str)
	{
		result += ft_putstr("(null)");
	}
	else
	{
		while (*str)
		{
			result += ft_putchar(*str);
			str++;
		}
	}
	return (result);
}
