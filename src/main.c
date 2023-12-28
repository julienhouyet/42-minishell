/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:41:50 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/28 10:49:48 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	main(void)
{
	char	*entry;

	while (1)
	{
		entry = readline("$ ");
		if (entry)
		{
			if (*entry)
			{
				//ft_add_history(entry);
				ft_printf("%s: command not found\n", entry);
			}
			free(entry);
		}
	}
	return (0);
}
