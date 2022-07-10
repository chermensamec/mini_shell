#include "dict.h"

t_dict	*init(void *key, void *val)
{
	t_dict	*dict;

	dict = malloc(sizeof(t_dict));
	dict->key = key;
	dict->val = val;
	dict->next = NULL;
	dict->prev = NULL;
	return (dict);
}
