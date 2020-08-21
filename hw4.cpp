#include <iostream>
#include <math.h>
using namespace std;

int main() {

char letter;
float gpa = 0, loop = 0;

do {

	cout << "Enter the letter grade (Enter \'X\' to exit)\n";
	cin >> letter;

	if (letter == 'a' || letter == 'A') gpa += 4;
	else if (letter == 'b' || letter == 'B') gpa += 3;
	else if (letter == 'c' || letter == 'C') gpa += 2;
	else if (letter == 'd' || letter == 'D') gpa += 1;
	else if (letter == 'f' || letter == 'F');
	else if (letter == 'x' && letter == 'X') break;
	else {
		cout << "Input Error (a,A,b,B,c,C,d,D,f,F,x,X)\n\n";
		loop -= 1;
	}

	loop++;
	cout << "gpa " << gpa << "  loop " << loop << endl;
	cout << endl;
	cout << "-----------------------------------------------\n";
	
  } while (letter != 'x' && letter != 'X');

	cout << "GPA = " << gpa << " " << "Loop = " << loop << "\n\n";
	cout << "Total Grade Points = " << gpa << endl;
	cout.precision(3);
	cout << "GPA : " << gpa/loop << endl;

	system("pause");
	return 0;
}
