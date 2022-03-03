/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valistexample.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 02:04:02 by bdurmus           #+#    #+#             */
/*   Updated: 2022/03/04 02:24:14 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

// simple example to understand what is the va_list.

int	sum(int index,...)
{
	va_list	ag;
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	va_start(ag, index); // It means ag will start to keep value after index parameter.
	while(i < index)
	{
		sum = sum + va_arg(ag, int); // This means output will be int.
		printf("%d\n",sum);
		i++;
	}
	va_end (ag); // Should be closed when process is over.
	return (sum);
}
int main()
{
	printf("%d",sum(4,4,8,6,5));
}