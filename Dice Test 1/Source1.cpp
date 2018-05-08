#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main()
{
	int set;
	int inventory[3] = { 001, 002, 0003 };
	cin >> set;
	inventory[1] = set;
	cout << inventory[1] << endl;
	system("pause");
	return 0;
}