/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
*/

/**
 * @author Pierre Chopinet
 * @author Rémi Lecouillard
 * @Date 06/04/2018
 */

#ifndef CCOLLECTIONS_ARRAYLIST_H
#define CCOLLECTIONS_ARRAYLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <util.h>

/**
 *  An ArrayList is a dynamic array
 */
typedef struct ArrayList_t *ArrayList;

/**
 * Allocates memory for an ArrayList
 *
 * @param initLength the initial length of the array
 * @param increment
 * @return Pointer on the Arraylist
 */
ArrayList newArrayList(int initLength, int increment);

/**
 * Get the value at the i index
 *
 * @param this arraylist
 * @param i
 * @return
 */
T ArrayListGet(ArrayList this, int i);

/**
 * Set the T value at index i
 *
 * @param this
 * @param i
 * @param value
 */
void ArrayListSet(ArrayList this, int i, T value);

/**
 * append value at the end of the Arraylist
 *
 * @param this
 * @param value
 */
void ArrayListAppend(ArrayList this, T value);

/**
 * Test if value is on the ArrayList
 *
 * @param this
 * @param value
 * @return 1 if true, 0 if false
 */
int ArrayListContains(ArrayList this, T value);

/**
 * Remove the value at the i index
 *
 * @param this
 * @param i index
 */
void ArrayListRemoveValue(ArrayList this, int i);

/**
 * free the arraylist
 * @warning this function doesn't freed the pointer in the arraylist
 *
 * @param this
 */
void ArrayListDelete(ArrayList this);

/**
 * Display all the pointer in the arraylist
 *
 * @param this
 */
void ArrayListDisplay(ArrayList this);

/**
 * match the real length with the length
 *
 * @param this
 */
void ArrayListMatchLength(ArrayList this);

/**
 * return the length
 *
 * @param this
 * @return length
 */
int ArrayListGetLength(ArrayList this);

/**
 * return the real length
 *
 * @param this
 * @return real length
 */
int ArrayListGetRealLength(ArrayList this);

/**
 *
 *
 * @param this
 * @return increment
 */
int ArrayListGetIncrement(ArrayList this);

/**
 * @warning not implemented yet
 *
 * @param this
 * @param apply
 */
void ArrayListForEach(ArrayList this, T (*apply)(T value));

int ArrayListIsEmpty(ArrayList this);

/**
 * return return an array which contains all the value of the ArrayList
 *
 * @param this
 * @return array of T
 */
T *ArrayListToArray(ArrayList this);

#endif
