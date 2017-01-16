/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 05:51:31 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/16 05:51:33 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *ret;

	ret = s1;
	while (*s1)
		s1++;
	while (n--)
		if (!(*s1++ = *s2++))
			return (ret);
	*s1 = 0;
	return (ret);
}
