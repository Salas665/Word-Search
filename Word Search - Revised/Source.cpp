#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX_WORDS = 2048;

void main() {

	int i;
	// Initialization of the arrays
	string inStr[MAX_WORDS];
	string inStr2[MAX_WORDS];

	// This reads the list of ten words 
	ifstream infile("listOfTenWords.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile.eof()) {
			infile >> inStr[i];
			cout << inStr[i] << endl;
		}
	}
	//closing the file after you use it is very important
	infile.close();

	system("pause");

	// This reads the three paragraphs
	ifstream infile2("paragraphsFromBook.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile2.eof()) {
			infile2 >> inStr2[i];
			cout << inStr2[i] << endl;
		}
	}
	infile2.close();

	system("pause");

	// Initialization of the array of words needed 
	int word1[10];

	// Double for loop
	for (int j = 0; j < 10; j++) {
		word1[j] = 0;
		for (i = 0; i < MAX_WORDS; i++) {
			if (inStr2[i].find(inStr[j]) != string::npos) word1[j]++;
		}
	}
	//Output file
	ofstream outfile("wordSearch.txt");
	//Displaying the words and how many times they are found
	outfile << inStr[0] << " - Found " << word1[0] << " time(s)" << endl;
	outfile << inStr[1] << " - Found " << word1[1] << " time(s)" << endl;
	outfile << inStr[2] << " - Found " << word1[2] << " time(s)" << endl;
	outfile << inStr[3] << " - Found " << word1[3] << " time(s)" << endl;
	outfile << inStr[4] << " - Found " << word1[4] << " time(s)" << endl;
	outfile << inStr[5] << " - Found " << word1[5] << " time(s)" << endl;
	outfile << inStr[6] << " - Found " << word1[6] << " time(s)" << endl;
	outfile << inStr[7] << " - Found " << word1[7] << " time(s)" << endl;
	outfile << inStr[8] << " - Found " << word1[8] << " time(s)" << endl;
	outfile << inStr[9] << " - Found " << word1[9] << " time(s)" << endl;
	cout << "Content successfully passed to outfile" << endl;
	outfile.close();
	system("pause");
}