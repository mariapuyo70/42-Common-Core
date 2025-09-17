/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:51:16 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2025/09/17 14:51:16 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if (dstsize == 0)
        return (ft_strlen(src));
    while ((i < dstsize - 1) && (src[i] != '\0'))
    {
        dst[i] = sc[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}