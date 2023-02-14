/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Batary_Comp <batary@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:34:31 by Batary_Comp       #+#    #+#             */
/*   Updated: 2023/02/13 22:34:32 by Batary_Comp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlib.h"

int	ft_abs(int var)
{
	if (var >= 0)
		return (var);
	return (-var);
}