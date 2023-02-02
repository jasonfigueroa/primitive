#include <stdio.h>
#include <stdlib.h>
#include "primitive.h"

int main()
{
//    Int a = allocIntWith(1);
//    printInt(stdout, a);

    Short b = allocShortWith(32766);
    printShort(stdout, b);

//    releasePrimitive(a);
    releasePrimitive(b);
    return 0;
}
