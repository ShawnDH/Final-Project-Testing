/* srand example */
#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main()
{
	//printf("First number: %d\n", rand() % 20);
	//srand(time(NULL));
	//printf("Random number: %d\n", rand() % 20);
	//srand(1);
	//printf("Again the first number: %d\n", rand() % 20);
	//cout << "" << endl;
	int end;
	do{
		srand(time(NULL));
		int d20 = rand() % 20 + 1;
		cout << d20 << endl;
		cin >> end;
	} while (end != 1);
	system("pause");
	return 0;
}