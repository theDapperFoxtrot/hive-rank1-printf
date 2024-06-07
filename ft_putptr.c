/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smishos <smishos@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:11:24 by smishos           #+#    #+#             */
/*   Updated: 2024/06/07 18:12:03 by smishos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				result;
	unsigned long	addr;

	result = 0;
	if (ptr == NULL)
	{
		result += ft_putstr("0x0");
		return (result);
	}
	addr = (unsigned long)ptr;
	ft_putstr("0x");
	return (ft_puthex(addr, 'x', 1));
}
