# ADT-SortedList
Purpose: gain an experience to use array to implement the ADT sorted list.

Problem Description:
One of the most frequently performed computing tasks is the maintenance, in some specified order, of a collection of data. 
The ADT sorted list inserts and deletes items by their values not their positions, which differs from the ADT list.
Define a class for an array-based implementation of the ADT sorted list. 
--------------------------------------------------------------------------------------
The specification of the class is given as follows:

ListItemType is the type

// Determines whether this sorted list is empty.

sortedIsEmpty():boolean

// Returns the number of items that are in this sorted list.

sortedGetLength():integer

//Inserts newItem into its proper sorted position in this sorted list.

sortedInsert(newItem:ListItemType) :boolean

// Delete anItem from this sorted list.

sortedRemove(anItem:ListItemType) : boolean

// Sets dataItem to the item at position index of this sorted list, if

// 0 ≤ index ≤ sortedGetLength(). The list is left unchanged by this operation.

sortedRetrieve(index:integer, dataItem:ListItemType) : boolean

// Returns the position where anItem belongs or exists in this sorted list. The item

// anItem and the list are unchanged.

locatePosition(in anItem:ListItemType):integer
--------------------------------------------------------------------------------------
Requirements:

a). Write a C++ interface template for the sorted list. 

b). Define the ADT sorted list as a derived class template from the sorted list interface template.

c). Write an application program to test ALL member functions of the ADT sorted list.
