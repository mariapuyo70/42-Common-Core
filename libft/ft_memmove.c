/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:38:40 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2025/09/15 07:38:40 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t              i;
    unsigned char       *d;
    const unsigned char *s;

    if (dst == NULL && src == NULL)
        return (NULL);
    i = 0;
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (d == s)
        return (d);
    if (d < s)
    {
        while ( i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (len--)
            d[len] = s[len];
    }
    return (dts);

}