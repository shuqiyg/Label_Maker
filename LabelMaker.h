/* W04 DIY
   Name: Shuqi Yang
   Std ID: 132162207
   Email: syang136@myseneca.ca
   Date: 02-11-2021
   -------------------------------------------------------
   I have done all the coding by myself and only copied the
   code that my professor provided to complete my workshops
   and assignments.
 */
#ifndef _LABELMAKER_H_
#define _LABELMAKER_H_
#include "Label.h"
#include <iostream>
namespace sdds {
	class LabelMaker {
		Label* labelList;
		int numOfLabels;
	public:
		LabelMaker(int noOfLables);
		void readLabels();
		void printLabels();
		~LabelMaker();
	};
}

#endif // !_LABELMAKER_H_
