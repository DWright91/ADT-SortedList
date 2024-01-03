// Dalton Wright
// ADTSortedListApp.cpp

#include <iostream>
#include "ADTSortedList.h"
using namespace std;

int main ()
{
  cout << "This program uses an array to implement the ADT Sorted List: " << endl;
  cout << endl;

  int anArray[] = {0,1,2,3,4,8,7,6,5,9};
	SortedList<int> newList;

////////////////////////////////////////////////////////////////////////////////
//            Begin Testing ALL of ADT SortedList Member Functions.
////////////////////////////////////////////////////////////////////////////////

  // Initializes the list.
	for(int i = 0; i < 10; i++)
	{
    newList.sortedInsert(anArray[i]);
	}


  // Starts sortedInsert test.
  int A = 10,     // This will be successfully added to list.
      B = 11;     // This shouldn't be successfully added to list.

  bool successfullyAdded = newList.sortedInsert(A);

  if(successfullyAdded)
  {
    cout << "Program has successfully added: " << A << endl;
  }
  else
  {
    cout << "Program hasn't successfully added: " << A << endl;
  }

  successfullyAdded = newList.sortedInsert(B);

  if(successfullyAdded)
  {
    cout << "Program has successfully added: " << B << endl;
  }
  else
  {
    cout << "Program hasn't successfully added: " << B << endl;
  }

  for(int i = 0; i < newList.sortedGetLength(); i++)
  {
    int testVariable;
    newList.sortedRetrieve(i, testVariable);
    cout << testVariable << endl;
  }
  // Ends sortedInsert test.


  // Starts sortedRetrieve test.
  int testRetrieve;
  bool successfullyRetrieved = newList.sortedRetrieve(7, testRetrieve);

  if(successfullyRetrieved)
  {
    cout << endl <<"Number retrieved successfully from index 7: " << testRetrieve << endl;
  }
  else
  {
    cout << "Number retrieved unsuccesfully from index 7. " << endl;
  }
  // Ends sortedRetrieve test.


  // Starts locatePosition test.
  int searchedItem = newList.locatePosition(8);
  cout << "The index of searched item 8: " << searchedItem << endl;
  // Ends locatePosition test.


  // Start miscellaneous function tests.
  cout << "Checking if list is empty, number of items: " << newList.sortedListIsEmpty() << endl;
  cout << "The number of items in list: " << newList.sortedGetLength() << endl << endl;
  // Ends miscellaneous function tests.


  // Starts sortedRemove test.
  cout << "Removing the number 6 from the list..." << endl;
  newList.sortedRemove(6);

  for(int i = 0; i < newList.sortedGetLength(); i++)
  {
    int testVariable;
    newList.sortedRetrieve(i, testVariable);
    cout << testVariable << endl;
  }
  cout << endl;
  cout << "The number of items in the list after removal: " << newList.sortedGetLength() << endl;
  // Ends sortedRemove test.

	return 1;
}
