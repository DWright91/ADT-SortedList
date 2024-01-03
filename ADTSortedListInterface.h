// Dalton Wright
// ADTSortedListInterface.h

// Specification file for the Base Class.

#ifndef _ADT_SORTED_LIST_INTERFACE
#define _ADT_SORTED_LIST_INTERFACE
#include <vector>
using namespace std;

template <class ListItemType>
class SortedListInterface
{
	public:
    /**
     *  Checks to see if the list is empty
     *  @return boolean indicating whether the list is empty or not
     */
      virtual bool sortedListIsEmpty() const = 0;


    /**
     *  Checks the size of the list and returns the amount of elements
     *  	within the list as an integer
     *  @return integer of the amount of elements in the list
     */
    	virtual int sortedGetLength() const = 0;

    /**
     *  Adds an item into the sorted list in its proper position. This
     *  	function will find where the object belongs, shift the list and
     *  	insert it in its proper position.
     *  @param  newItem The item being added to the list
     *  @return boolean indicating whether the item was added or not
     */
      virtual bool sortedInsert(const ListItemType& newItem) = 0;

    /**
     *  Removes the specified item from the list. It first checks the
     *  	list to see if the item exists, removes it, and shifts the list
     *  	appropriately
     *  @param  anItem  item that will be removes
     *  @return boolean indicating whether the item was found and removed
     */
      virtual bool sortedRemove(const ListItemType& anItem) = 0;

    /**
     *  Sets the parameter dataItem to the item at the specified
     *  	index passed to the function
     *  @param  index       index of desired item in list
     *  @param  dataItem    object that will take on the value of the indicated item
     *  @return  boolean indicating whether the function was completed or not
     */
      virtual bool sortedRetrieve(int index, ListItemType& dataItem) = 0;


    /**
     *  Searches the list for the indicated item and returns the index
     *  	position of the item within the list. The index and item will be
     *  	left unchanged.
     *  @param  anItem  Item to search for
     *  @return index of the item. Returns -1 if item is not found.
     */
      virtual int locatePosition(const ListItemType& anItem) = 0;
};

#endif
