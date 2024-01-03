// Dalton Wright
// ADTSortedListIMP.cpp

// Implementation file.

#include "ADTSortedList.h"
#include <cstddef>

// Default Constructor
template <class ListItemType>
SortedList<ListItemType>::SortedList() : itemCount(0), maxNumberOfItems(DEFAULT_LIST_SIZE)
{
}

// Constructor.
template <class ListItemType>
SortedList<ListItemType>::SortedList(int maxSize) : itemCount(0), maxNumberOfItems(maxSize)
{
}

// Check the list to see if is empty.
template <class ListItemType>
bool SortedList<ListItemType>::sortedListIsEmpty() const
{
  return itemCount == 0;
}

// Number of items in the list.
template <class ListItemType>
int SortedList<ListItemType>::sortedGetLength() const
{
  return itemCount;
}

// Insert a number into list.
template <class ListItemType>
bool SortedList<ListItemType>::sortedInsert(const ListItemType& newItem)
{
  bool isMaxValue = (itemCount == maxNumberOfItems);
  int newPosition = 0,
      currentSize = sortedGetLength();


  if(!isMaxValue)
  {
    while(newItem > list[newPosition] && newPosition < sortedGetLength())
    {
      newPosition++;
    }

    for(int i = currentSize; i > newPosition; i--)
    {
      list[i] = list[i - 1];
    }

    list[newPosition] = newItem;
    itemCount++;
  }

  return (!isMaxValue);
}

// Remove a number from the list.
template <class ListItemType>
bool SortedList<ListItemType>::sortedRemove(const ListItemType& anItem)
{
  int itemPosition = locatePosition(anItem);
  bool Removable = !sortedListIsEmpty() && itemPosition > -1;

  if(Removable)
  {
    itemCount--;
    for(int i = itemPosition; i < sortedGetLength(); i++)
    {
      list[i] = list[i + 1];
    }
  }

  return Removable;
}

// Retrieve sorted list.
template <class ListItemType>
bool SortedList<ListItemType>::sortedRetrieve(int index, ListItemType& dataItem)
{
  if(index < 0 || index >= sortedGetLength())
  {
    return false;
  }

  dataItem = list[index];
  return true;
}

// Search array for anItem, and return anItem's position or "index".
template <class ListItemType>
int SortedList<ListItemType>::locatePosition(const ListItemType& anItem)
{
  for(int i = 0; i < sortedGetLength(); i++)
  {
    if(anItem == list[i])
    {
      return i;
    }
  }

  return -1;
}
