#include "dict.h"

size_t	get_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}
