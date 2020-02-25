#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int words = 0, characters = 0;
	string whole_text = "";
	string temp_text = "";

	//Get text
	ifstream Input("Input.txt");
	if (!Input.fail())
	{
		getline(Input, temp_text);
		whole_text += temp_text;
	}
	else
	{
		cout << "File failed to open!\n";
	}

	//Process with counters
	for (int i = 0; i < whole_text.size(); i++)
	{
		if (whole_text[i] == ' ')
		{
			words += 1;
		}
		else
		{
			characters += 1;
		}
	}
	if (words > 0)
	{
		words += 1;
	}

	//Output

	cout << "Words      : " << words << endl;
	cout << "Characters : " << characters << endl;
	return 0;
}