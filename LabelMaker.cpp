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
#include "LabelMaker.h"
using namespace std;
namespace sdds {
	LabelMaker::LabelMaker(int noOfLables) {
		numOfLabels = noOfLables;
		labelList = new Label[numOfLabels];		
	}
	void LabelMaker::readLabels() {
		cout << "Enter " << numOfLabels << " labels:" << endl;
		for (int i = 0; i < numOfLabels; i++) {
			cout << "Enter label number " << i + 1 << '\n';
			cout << "> ";
			labelList[i].readLabel();
		}
	}
	void LabelMaker::printLabels() {
		for (int i = 0; i < numOfLabels; i++) {
			labelList[i].printLabel();
			cout  << endl ;
		}
	}
	LabelMaker::~LabelMaker() {
		delete[] labelList;
		labelList = nullptr;
	}
}