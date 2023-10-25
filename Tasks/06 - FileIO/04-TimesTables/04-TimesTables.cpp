#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputStream;
	outputStream.open("Multiply.txt");			//open or create the file

	if (outputStream.is_open() == false)			//did it open if not enter if
	{
		cout << "ERROR with FILE" << endl;
		return -1;		//-1 will end the program :)
	}

	for (unsigned int r = 2; r <= 12; r++) 
	{
		for (unsigned int c = 2; c <= 12; c++) 
		{
			int math = r * c;

			cout << math << "\t";
			
			outputStream << math << "\t";		//save to the file row by row.
			
		}
		cout << endl;
		outputStream << endl;
	}
	cout << endl;
	outputStream << endl;

	outputStream.close();		//close the file

	return 0;
}

