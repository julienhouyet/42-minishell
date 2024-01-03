/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:42:40 by jhouyet           #+#    #+#             */
/*   Updated: 2024/01/03 12:43:08 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_search_exec_with_path(char **argv)
{
	if (access(argv[0], X_OK) == 0)
		ft_printf("command_path : %s\n", argv[0]);
	else
		ft_printf("PATH NOT FOUND\n");
}

void	ft_search_exec(char **argv)
{
	char	*path_env;
	char	**paths;
	char	*command_path;
	int		i;
	int		found;

	path_env = getenv("PATH");
	paths = ft_split(path_env, ':');
	i = -1;
	found = 0;
	while (paths[++i])
	{
		command_path = ft_strjoin(paths[i], "/");
		command_path = ft_strjoin(command_path, argv[0]);
		if (access(command_path, X_OK) == 0)
		{
			found = 1;
			break ;
		}
		free(command_path);
	}
	if (found)
		ft_printf("command_path : %s\n", command_path);
	else
		ft_printf("PATH NOT FOUND\n");
}
