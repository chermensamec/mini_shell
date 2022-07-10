#ifndef DICT_H
# define DICT_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_dict
{
	void	*key;
	void	*val;
	t_data	*next;
	t_data	*prev;
}	t_dict;

t_dict	*init();
# endif
