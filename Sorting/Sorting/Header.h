#pragma once

#include <list>
class SortableList : public std::list<int> {
public:
	void bubble_sort() {
		//keep track of if the list is sorted
		bool sorted = false;
		//keep looping while the list isn't sorted
		while (!sorted) {
			//set sorted to true
			bool sorted = true;
			for (std::list<int>::iterator it = this->begin(); it != this->end(); ++it) {
				
				
				//check if the current value is greater than the next value, if it is swap the two values
				if (*it > *(it++)) {
					//swap the values
					std::iter_swap(it, (it++));
					//if sorted is true, set to false
					if (sorted) sorted = false;
				}
			}
		}
	}
};