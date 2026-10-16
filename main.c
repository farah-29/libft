/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:20:26 by fal-edlb          #+#    #+#             */
/*   Updated: 2026/10/15 15:20:32 by fal-edlb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Testing ft_isalpha:\n");
    printf("Is 'A' alphabetic? %d (Expected: 1)\n", ft_isalpha('A'));
    printf("Is '7' alphabetic? %d (Expected: 0)\n", ft_isalpha('7'));

    printf("\nTesting ft_isdigit:\n");
    printf("Is '5' a digit? %d (Expected: 1)\n", ft_isdigit('5'));
    printf("Is 'z' a digit? %d (Expected: 0)\n", ft_isdigit('z'));

    printf("\nTesting ft_isalnum:\n");
    printf("Is 'f' alphanumeric? %d (Expected: 1)\n", ft_isalnum('f'));
    printf("Is '#' alphanumeric? %d (Expected: 0)\n", ft_isalnum('#'));

    return (0);
}