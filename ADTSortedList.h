// Dalton Wright
// CSCI 301
// Project2
// ADTSortedList.h

// Specification file for the Derived Class.

#ifndef _ADT_SORTED_LIST
#define _ADT_SORTED_LIST
#include "ADTSortedListInterface.h"

template <class ListItemType>
class SortedList: public SortedListInterface<ListItemType>	// Base Class: SortedListInterface, Derived Class: SortedList.
{
	private:
	  static const int DEFAULT_LIST_SIZE = 11;      				  // The default size of the list.
		ListItemType list[DEFAULT_LIST_SIZE];
		int itemCount;
		int maxNumberOfItems;

	public:
    SortedList();
    SortedList(int maxSize);
		bool sortedListIsEmpty() const;
		int sortedGetLength() const;
		bool sortedInsert(const ListItemType& newItem);
		bool sortedRemove(const ListItemType& anItem);
		bool sortedRetrieve(int index, ListItemType& dataItem);
		int locatePosition(const ListItemType& anItem);

};

#include "ADTSortedListIMP.cpp"
#endif
