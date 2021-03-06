/* copyright(C) 2002 H.Kawai (under KL-01). */

#include "go_lib.hpp"

void *GO_realloc(void *p, size_t size)
{
	if ((p = GOL_memmanrealloc(&GOL_memman, p, size)) == NULL)
		GOL_sysabort(GO_TERM_WORKOVER);
	return p;
}
