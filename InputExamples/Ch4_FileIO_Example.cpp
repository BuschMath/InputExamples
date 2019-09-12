#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string data;
	string data2;
	int idata3;
	string data4;
	string inputFileName = "C:/Users/busch/Documents/Visual Studio 2017/Projects/InputExample/InputExample/ExampleInputFile.dat";
	string outputFileName = "ExampleOutputFile.dat";
	ifstream inFile;
	ofstream outFile;

	inFile.open(inputFileName);		// Assumes input file is in the project folder
	outFile.open(outputFileName);		// Places output file in the project folder

	//getline(inFile, data);
	inFile >> data >> idata3 >> data2 >> data4;
	outFile << data;

	cout << data << " " << data2 << " " << idata3 << " " << data4 << endl;

	inFile.close();
	outFile.close();

	return 0;
}