/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukwon <eukwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:44:51 by eukwon            #+#    #+#             */
/*   Updated: 2022/03/17 14:15:01 by eukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	const char		*src_ptr;

	if (!dst && !src)
		return (0);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const char *)src;
	while (n--)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}
