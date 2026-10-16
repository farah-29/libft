/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:46:38 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/16 17:11:21 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	if (!dest && !src)

		return (NULL);
if(dest<src)
        {
      ft_memcpy(dest,src,n);
	}
else {
    d=(unsigned char *)dest+n-1;
       s=(unsigned char *)src+n-1;
while (n > 0)
	{
		*d = (unsigned char)*s;
		d--;
		s--;
		n--;
	}
}
return(dest);
}