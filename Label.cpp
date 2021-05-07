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
#include "Label.h"

using namespace std;
namespace sdds {
	void Label::setToDefault() {
		frame = new char[9];
		//frame[0] = '\0';
		strCpy(frame,"+-+|+-+|");
		Lcontent = nullptr;
	}
	Label::Label() {
		setToDefault();
	}
	Label::Label(const char* frameArg) {
		setToDefault();
		strnCpy(frame, frameArg, 8);
	}
	Label::Label(const char* frameArg, const char* content) {
		setToDefault();
		strnCpy(frame, frameArg, 8);
		int contentSize = strLen(content);
		if (contentSize < 71) {
			Lcontent = new char[contentSize+1];
			strnCpy(Lcontent, content, contentSize);
		}
		else {
			Lcontent = new char[71];
			strnCpy(Lcontent, content, 70);
		}	
	}
	Label::~Label() {
		delete[] Lcontent;
		Lcontent = nullptr;
		delete[] frame;
		frame = nullptr;
	}
	void Label::readLabel() {
		Lcontent = new char[71];
		cin.get(Lcontent, 71);
		while (cin.get() != '\n');
	}
	ostream& Label::printLabel()const {
		printTop();
		printContent();
		printBottom();		
		return cout;
	}
	void Label::printTop()const {
		if (Lcontent != nullptr) {
			int width = strLen(Lcontent) + 2;
			cout << frame[0];
			for (int i = 0; i < width; i++) {
				cout << frame[1];
			}
			cout << frame[2] << endl;
		}
	}
	void Label::printBottom()const {
		if (Lcontent != nullptr) {
			int width = strLen(Lcontent) + 2;
			cout << frame[6];
			for (int i = 0; i < width; i++) {
				cout << frame[5];
			}
			cout << frame[4];
		}
	}
	void Label::printContent()const {
		if (Lcontent != nullptr) {
			int width = strLen(Lcontent);
			cout << frame[7];
			for (int i = 0; i < width + 2; i++) {
				cout << ' ';
			}
			cout << frame[3] << endl;
			cout << frame[7] << ' ';
			for (int i = 0; i < width; i++)
			{
				cout << Lcontent[i];
			}
			cout << ' ' << frame[3] << endl;
			cout << frame[7];
			for (int i = 0; i < width + 2; i++) {
				cout << ' ';
			}
			cout << frame[3] << endl;
		}
	}
}