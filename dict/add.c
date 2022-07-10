#include <dict.h>

void	add(t_data *dict, void *val, void *key)
{
	t_data	*new;
	
	new = init(key, val);
	while (dict->next)
		dict = dict->next;
	dict->next = new;
	new->prev = dict;	
}
