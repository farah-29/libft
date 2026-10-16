/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:14:50 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/16 17:11:27 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;

	s = (unsigned char *)src;

	if (!dest && !src)

		return (NULL);
	while (n > 0)
	{
		*d = (unsigned char)*s;
		d++;
		s++;
		n--;
	}
	return (dest);
}