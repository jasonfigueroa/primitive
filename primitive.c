#include "primitive.h"

Object
allocInt()
{
	return calloc(1, sizeof(int));
}

Object
allocIntWith(int e)
{
	Int p = allocInt();
	*p = e;

	return p;
}

void
releasePrimitive(Object obj)
{
	free(obj);
}

void
printInt(FILE *out, Object p)
{
	if (!out)
	{
		out = stdout;
	}

	if (!p)
	{
		fprintf(out, "NULL");
		return;
	}

	Int e = (Int)p;
	fprintf(out, "%d", *e);
}
