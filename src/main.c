/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:41:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/01/03 12:43:43 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	check_argv(char *entry)
{
	char	**argv;
	int		i;

	argv = ft_split(entry, ' ');
	if (argv[0][0] == '/' || argv[0][0] == '.')
		ft_search_exec_with_path(argv);
	else
		ft_search_exec(argv);
}

int	main(void)
{
	char	*entry;

	while (1)
	{
		entry = readline("$ ");
		if (*entry)
		{
			add_history(entry);
			check_argv(entry);
		}
		free(entry);
	}
	return (0);
}
