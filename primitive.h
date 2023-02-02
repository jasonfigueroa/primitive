#ifndef PRIMITIVE_H_INCLUDED
#define PRIMITIVE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

typedef uchar Byte;
typedef ushort Word;

// Aliases for primitives pointers, can be used in place of Object
typedef bool *Bool;
typedef uchar *UChar;
typedef char *Char;
typedef ushort *UShort;
typedef short *Short;
typedef uint *UInt;
typedef int *Int;
typedef float *Float;
typedef ulong *ULong;
typedef long *Long;
typedef double *Double;
typedef char *String;

// Generic pointer
typedef void *Object;

Object allocBool();
Object allocUChar();
Object allocChar();
Object allocUShort();
Object allocShort();
Object allocInt();
Object allocUInt();
Object allocFloat();
Object allocULong();
Object allocLong();
Object allocDouble();
Object allocString(uint);

Object allocBoolWith(bool);
Object allocUCharWith(uchar);
Object allocCharWith(char);
Object allocUShortWith(ushort);
Object allocShortWith(short);
Object allocIntWith(int);
Object allocUIntWith(uint);
Object allocFloatWith(float);
Object allocULongWith(ulong);
Object allocLongWith(long);
Object allocDoubleWith(double);
Object allocStringWith(String);

void copyBool(Bool, Bool);
void copyUChar(UChar, UChar);
void copyChar(Char, Char);
void copyUShort(UShort, UShort);
void copyShort(Short, Short);
void copyInt(Int, Int);
void copyUInt(UInt, UInt);
void copyFloat(Float, Float);
void copyULong(ULong, ULong);
void copyLong(Long, Long);
void copyDouble(Double, Double);
void copyString(String, String);

int compareBool(Object, Object);
int compareUChar(Object, Object);
int compareChar(Object, Object);
int compareUShort(Object, Object);
int compareShort(Object, Object);
int compareInt(Object, Object);
int compareUInt(Object, Object);
int compareFloat(Object, Object);
int compareULong(Object, Object);
int compareLong(Object, Object);
int compareDouble(Object, Object);
int compareString(Object, Object);

void printBool(FILE *, Object);
void printUChar(FILE *, Object);
void printChar(FILE *, Object);
void printUShort(FILE *, Object);
void printShort(FILE *, Object);
void printInt(FILE *, Object);
void printUInt(FILE *, Object);
void printFloat(FILE *, Object);
void printULong(FILE *, Object);
void printLong(FILE *, Object);
void printDouble(FILE *, Object);
void printString(FILE *, Object);
void printObject(FILE *, Object);

void releasePrimitive(Object);

#endif // PRIMITIVE_H_INCLUDED
