/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:08:47 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/16 13:15:01 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int main (void){
	char test[]="Farah";
	printf("%d\n",ft_strlen(test));
}