// The program grade step 1
// Switch case labs
// Programmer: Panupong Leenawarat
// Last modify: 10/8/15

#include <iostream>
using namespace std;

int main()
{
	double score;

	//Title
	cout << "\t  Assign course grade according to this grading scheme:\n"
		 << "\t                        Lee. Panupong                  \n"
		 << "\t                    grade is \"double\" and              \n"
		 << "\t     there are no if statements or other variables       " << endl << endl;

	cout << "\t[90, 100] :  A\n"
		 << "\t[80,  90) :  B\n"
	   	 << "\t[70,  80) :  C\n"
		 << "\t[60,  70) :  D\n"
		 << "\t[ 0,  60) :  F\n";
	
	while (true)
	{
		cout << "\nWhat is the average grade? ";
		cin >> score;    cin.ignore(80, '\n');

		cout << "The letter grade is '";
		switch ((int)score/10)	
		{
		case 10: 
		case  9:	cout << "A";	break;
		case  8:	cout << "B";	break;
		case  7:	cout << "C";	break;
		case  6:	cout << "D";	break;
		default:	cout << "F";
		}
		cout << "' because your grade was " << score << endl;		
	}
	return 0;
}