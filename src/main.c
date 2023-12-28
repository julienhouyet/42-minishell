/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:41:50 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/28 13:15:32 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	main(void)
{
	char	*entry;

	while (1)
	{
		entry = readline("$ ");
		if (*entry)
		{
			add_history(entry);
			ft_printf("%s: command not found\n", entry);
		}
		free(entry);
	}
	return (0);
}
