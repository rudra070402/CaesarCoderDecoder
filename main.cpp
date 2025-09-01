#include <string>
#include <iostream>
#include <cmath>

int encryption(std::string toBeEncrypted, int shift)
{
	for (int i = 0; i < toBeEncrypted.length(); i++)
	{

		char letter = toBeEncrypted[i];
		int x = letter + shift;

		if (letter >= 'A' && letter <= 'Z') // capital letters
		{
			std::cout << char('A' + ((x - 'A') % 26));														 
		}

		else if (letter >= 'a' && letter <= 'z') // small letters
		{
			std::cout << char('a' + ((x - 'a') % 26));
		}

		else
		{
			std::cout << letter; // other characters including whitespaces
		}
	}

	return 0;
}

int main()
{
	
	std::cout << "Enter the text: "; //text input
	std::string toBeEncrypted{};
	getline(std::cin, toBeEncrypted);
	
	std::cout << "Enter the shift value: "; //shift input
	int shift{};
	std::cin >> shift;
	shift = ((shift % 26) + 26) % 26; //to accomodate negative shift //learnt something new!

	std::cout << "equivalent shift: " << shift << std::endl; // to inform user about the equivalent shift if some large or negative shift is entered

	encryption(toBeEncrypted, shift);
	

	return 0;
}