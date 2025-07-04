/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   env_set_raw.c                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/06/23 21:41:37 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/06/23 21:41:37 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void	env_set_raw(t_data *data, const char *raw_var)
{
	char		*name;
	char		*val;
	ptrdiff_t	eq_sign_position;

	eq_sign_position = ft_strchr(raw_var, '=') - raw_var;
	name = ft_substr(raw_var, 0, eq_sign_position);
	val = ft_substr(raw_var, eq_sign_position + 1,
			ft_strlen(raw_var));
	env_set_node(data, name, val);
	free(name);
	free(val);
}
