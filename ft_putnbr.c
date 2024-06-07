/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smishos <smishos@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:00:12 by smishos           #+#    #+#             */
/*   Updated: 2024/06/07 18:01:07 by smishos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
	{
		result += ft_putstr("-2147483648");
		return (result);
	}
	if (n < 0)
	{
		result += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		result += ft_putnbr(n / 10);
	}
	result += ft_putchar((n % 10) + '0');
	return (result);
}
