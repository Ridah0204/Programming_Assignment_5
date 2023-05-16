#include<iostream>
#include<fstream>

using namespace std;

int main() {

	int theSearchedNumber, number;
	size_t counter(0);
	ifstream fin;
	string filename;

	cout << "Please enter the name of the file:";
	cin >> filename;

	fin.open(filename);


	cout << " Please enter a number and the program will count the number of occurences in the file: ";
	cin >> theSearchedNumber;

	if (fin) {

		while (fin >> number) {

			if (number == theSearchedNumber) {

				counter++;

			}//end if
		}//end of while

		fin.close();
		cout << "The number " << theSearchedNumber << " occurs ";
		cout << counter << " times in the file " << filename << endl;




	}//end of while

	else
		cerr << "\nCould not open the file\n\n ";


	return 0;

}
