/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:32:14 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/16 19:02:11 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t src_len;
	size_t dest_len;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
    
	if (dstsize <= dest_len)
        return (dstsize + src_len);
	i = 0;
while (src[i] != '\0' && (dest_len + i) < dstsize - 1)	{
		dst[dest_len+i] = src[i];
		i++;
	}
	dst[dest_len+i] = '\0';
	return (dest_len+ src_len);
}