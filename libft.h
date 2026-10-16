/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:35:26 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/16 17:45:06 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif