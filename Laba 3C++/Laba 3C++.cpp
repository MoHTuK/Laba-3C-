#include "pch.h"
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main()
{
	/*найти слова с буквой "k" */
	string s, word;
	cout << "String:\n";
	getline(cin, s);

	stringstream words(s);
	while (words >> word)
	{
		if (word.find('k') != std::string::npos) cout << word << "\n";
	}

	system("pause");
	return 0;
}