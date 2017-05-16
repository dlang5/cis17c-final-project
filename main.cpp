#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main() {

	string song;
	ifstream file1;
	ofstream myfile;
	stringstream buffer1, buffer2;
	file1.open("RickRoll.txt");
	char output[5000];
	if (file1.is_open()) {
		while (!file1.eof()) {

			file1 >> output;
			cout << output;
			buffer1 << output;

		}
	}
	cout << endl << buffer1.str() << endl;
	file1.clear();
	file1.close();


	ifstream file2;
	file2.open("RickRoll2.txt");
	char output2[5000];
	if (file2.is_open()) {
		while (!file2.eof()) {

			file2 >> output2;
			cout << output2;
			buffer2 << output2;

		}
	}
	cout << endl << buffer2.str() << endl;
	file2.clear();
	file2.close();

	int x;
	cin >> x;
}

	
