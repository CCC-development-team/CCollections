//
// Created by Pierre on 06/04/2018.
//

#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct array_t *Array;
typedef void * T;

Array newArray(int initLength, int increment);

T ArrayGet(Array, int i);

void ArraySet(Array, int i, T value);

int ArrayAppend(Array, T value);

void ArrayRemoveValue(Array, int i);

void ArrayDelete(Array);

void ArrayDisplay(Array);

void ArrayMatchLength(Array);

#endif //ARRAY_ARRAY_H
