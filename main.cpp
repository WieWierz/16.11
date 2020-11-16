#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

long zamiana(string nazwaPliku)
{

	ifstream file;
	ofstream fileOut;
	
	string liczba1, liczba;
	char* endptr;
	int system;
	
		file.open("liczby.txt");
		fileOut.open("wynik.txt");

		if(file.good())
			while(!file.eof())
				{
					file>>system >> liczba1;
				//	cout<<"system:"<<system<<endl;
				//	cout<<"liczba:"<<liczba1<<endl;
					liczba = strtol(liczba1.c_str(), &endptr, system);
					cout<<liczba<<endl;
					fileOut<<liczba<<endl;
				}
	file.close();
	fileOut.close();
	return 0;
}

int main(int argc, char** argv) {

	zamiana("liczby.txt");

return 0;
}
