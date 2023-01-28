#include <stdio.h>
#include <stdlib.h>
#include "primitive.h"

int main()
{
    Int a = allocIntWith(1);
    printInt(stdout, a);
    releasePrimitive(a);
    return 0;
}
