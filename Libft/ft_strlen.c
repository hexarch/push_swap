/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:54:03 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/21 19:55:00 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != 0)
		c++;
	return (c);
}
