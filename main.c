/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smishos <smishos@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:43:03 by smishos           #+#    #+#             */
/*   Updated: 2024/06/07 20:36:14 by smishos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	ft_ret;
	int	ret;

	// ft_ret = ft_printf("Hello, %s\n", "world");
	// ret = printf("Hello, %s\n", "world");
	ft_ret = ft_printf("\n%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	ret = printf("\n%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	printf("\nft_ret: %d\nret: %d\n", ft_ret, ret);
}
