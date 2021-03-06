#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

//vectors are boundless arrays
//Resize automatically

int main()
{
	//myVector.push_back(value) ==> adds element to end of vector and resizes it
	//myVector.at(index) ==> returns element of that index. starts at 0
	//myVector.size() ==> returns total of indexes 
	//myVector.begin() ==> reads vector from first element (index 0)
	//myVector.insert(meVector.begin() + int, new value) ==> adds element before specified index number
	//myVector.erase(myVector.begin() + int) ==> removes element at specified index number
	//myVector.clear() ==> removes all elements in vector
	//myVector.empty() ==> returns boolean value if vector is empty

	vector<int> myVector;

	myVector.push_back(5);		//pushes back 1 slot. equal to 5. manual way
	myVector.push_back(-20);
	myVector.push_back(10);
	myVector.push_back(3);
	myVector.push_back(8);
	myVector.push_back(6);

	cout << myVector.size() << " elements in the vectors" << endl;

	//vectors return unsigned ints. ergo i has to be unsigned, different data types
	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << "Vector slot " << i << ": " << myVector[i] << endl;
	}


	return 0;
}

