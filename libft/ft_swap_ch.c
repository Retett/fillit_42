/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayavorsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:35:13 by ayavorsk          #+#    #+#             */
/*   Updated: 2017/11/04 12:35:52 by ayavorsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_swap_ch(char *a, char *b)
{
	char temp;

	if (a != NULL && b != NULL)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}