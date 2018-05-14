#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 800, 100, TRUE); // 800 width, 100 height

	system("pause");
	return 0;
}