#ifndef SET_H
#define SET_H

#include "dynamic_array.h"

/**
 * ---------------------------------
 * SET data structure:
 * 
 * A set here is a form of a dynamic array
 * containing unique related items/element.
 * Sets are not indexed since they are a collection of values.
 * Key operations:
 * -> insert
 * -> search
 * -> delete
 * 
 * NB: THe Set data structure depends heavily on the Dynamic Array data structure
 */
typedef struct Set
{
  DynamicArray *d_arr;     // memory address of the dynamic address
}
Set;


/**
 * Initialise a Set data structure.
 * Similar to calling the constructor of a class in OOP context
 * 
 * @return The set
 */
Set initSet();


/**
 * Adjust the set internally to fit more items
 */
void set_adjust(Set *set);


/**
 * Checks whether the set contains a value.
 * @param set   The set
 * @param value The value to search for
 * @return Returns TRUE (1) if the item is found; otherwise FALSE (1)
 */
int set_contains(Set set, int value);


/**
 * Get the size of the set
 * Takes O(1) or constant time
 */
int set_get_size(Set set);


/**
 * Insert a value to a set
 * Takes O(1) or constant time
 */
void set_insert(Set *set, int value);

/**
 * Insert an array of values
 */
void set_insert_values(Set *set, int values[], int length);


/**
 * List the element of a set
 */
void set_list(Set set);


/**
 * Get the string representation of the set
 */
void set_strrep(Set set);


#endif