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
#ifndef _LABEL_H_
#define _LABEL_H_
#include <iostream>	
#include "cstring.h"
using namespace std;
namespace sdds {
	class Label {
		char* frame;
		char* Lcontent;
		void setToDefault();
	public:
		Label();
		Label(const char* frameArg);
		Label(const char* frameArg, const char* content);
		~Label();
		void readLabel();
		ostream& printLabel()const;
		void printTop()const;
		void printBottom()const;
		void printContent()const;
	};
}

#endif // !_LABEL_H_
