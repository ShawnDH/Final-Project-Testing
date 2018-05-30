#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
#pragma warning(disable: 4996)

using namespace std;

int main()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 40;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	string choice;

	char arrowRight = 16;
	char arrowDown = 31;
	int c;

top:
	//welcoming screen + instructions
	cout << "\n\n\n                           Kingdom Harbinger!" << endl;
	cout << "                   .-                                        _,-. " << endl;
	cout << "	    ______/C_________________________________,.--v/^^ ,/       " << endl;
	cout << "	 ,n#|##|#}{------------------------------ - - - ___-^          " << endl;
	cout << "	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^               " << endl;
	cout << "                 c/,                                              " << endl;
	Sleep(1000);
	cout << "      	                      " << arrowRight << " [start]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [info]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [exit]" << endl;
	Sleep(1000);

	cout << "\n\n\n\n\nInput Answer: ";
	cin >> choice;
	do{
		if (choice == "info")
		{
			system("cls");
			Sleep(1000);

			char myStory[] = { "This is a text based story where you'll be traveling along as a Rogue.\n\nYour objective is to complete multiple stages and tasks which will lead \nyou to the end.\n\nYou may survive and also die, different choices lead you into choosing \nif you're going to be a good, bad, or neutral character.\n" };

			for (int x = 0; x < strlen(myStory); x++)
			{
				cout << myStory[x];
				Sleep(50);
			}

			Sleep(1000);
			cout << "\nWould you like to go back to the start screen?" << endl;
			Sleep(1000);
			cout << "\n	1. [yes]" << endl;
			Sleep(1000);
			cout << "\n	2. [no]" << endl;
			Sleep(1000);

			cout << "\n\n\n\n\n\nInput Answer: ";
			cin >> choice;
			if (choice != "yes")
			{
				do{
					system("cls");
					cout << "This is a text based story where you'll be traveling along as a Rogue.\n\nYour objective is to complete multiple stages and tasks which will lead \nyou to the end.\n\nYou may survive and also die, different choices lead you into choosing \nif you're going to be a good, bad, or neutral character.\n" << endl;
					cout << "\nWould you like to go back to the start screen?" << endl;
					cout << "\n	1. [yes]" << endl;
					cout << "\n	2. [no]" << endl;
					cout << "\n\n\n\n\n\n\nInput Answer: ";
					cin >> choice;
				} while (choice != "yes");
			}
			if (choice == "yes")
			{
				system("cls");
				goto top;

			}
		}
		else if (choice == "exit")
		{
			return 0;
		}
		else
		{
			system("cls");
			cout << "\n\n\n                           Kingdom Harbinger!" << endl;
			cout << "                   .-                                        _,-. " << endl;
			cout << "	    ______/C_________________________________,.--v/^^ ,/       " << endl;
			cout << "	 ,n#|##|#}{------------------------------ - - - ___-^          " << endl;
			cout << "	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^               " << endl;
			cout << "                 c/,                                              " << endl;
			cout << "      	                      " << arrowRight << " [start]" << endl;
			cout << "\n	                      " << arrowRight << " [info]" << endl;
			cout << "\n	                      " << arrowRight << " [exit]" << endl;

			cout << "\n\n\n\n\nInput Answer: ";
			cin >> choice;
		}
	} while (choice != "start");
	system("pause");
	return 0;
}