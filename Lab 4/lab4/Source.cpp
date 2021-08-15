//Bao Trang
//Computer Science 1
//Professor Benjamin Shelton
//Formatting Output using <iomanip>

#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inFile;
	ofstream outFile;
	inFile.open("input.txt");
	outFile.open("output.txt");

	//have your full header printed to the output file.
	outFile << "Bao Trang \n" << "Computer Science 1 \n" << "Professor Benjamin Shelton \n"
		<< "Formatting Output using <iomanip>\n";

	double TotalColl = 26572.89087, Sales = 25068.7993, CountyTax = 501.76, StateTax = 1002.75212, TotalTax = 1504.12890;
	int a = 5, b = 15, c = 25;

	//formatting the first table
	outFile << setw(13) << "A" << setw(11) << "B" << setw(13) << "C\n";
	outFile << "*************************************" << endl;
	outFile << "X1" << setw(11) << a << setw(12) << b << setw(12) << c << endl;
	outFile << "X10" << setw(10) << a * 10 << setw(12) << b * 10 << setw(12) << c * 10 << endl;
	outFile << "X100" << setw(9) << a * 100 << setw(12) << b * 100 << setw(12) << c * 100 << endl;
	outFile << "\n";
	outFile << "\n";
	//Formatting the second table
	outFile << "MONTH: March 2018 \n";
	outFile << "--------------------------------\n";
	outFile << "Total Collected" << setw(8) << "$" << setw(10) << "26572.89\n";
	outFile << "Sales" << setw(18) << "$" << setw(10) << "25068.80\n";
	outFile << "County Tax" << setw(13) << "$" << setw(10) << "501.76\n";
	outFile << "State Tax" << setw(14)<< "$" << setw(10) << "1002.75\n";
	outFile << "Total Tax" << setw(14) << "$" << setw(10) << "1504.13\n";

	inFile.close();
	outFile.close();

	return 0;
}