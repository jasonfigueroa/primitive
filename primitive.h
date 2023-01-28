#ifndef PRIMITIVE_H_INCLUDED
#define PRIMITIVE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef int *Int;
typedef void *Object;

Object
allocInt();

Object
allocIntWith(int);

void
printInt(FILE *, Object);

void
releasePrimitive(Object);

#endif // PRIMITIVE_H_INCLUDED
