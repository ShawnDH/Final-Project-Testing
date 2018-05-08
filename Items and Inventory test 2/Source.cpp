#include <iostream>
using namespace std;
int main()
{
	int inventory[] = { 00, 00, 00 };		//
	int gold = 100;
	int itemBuy = 0;
	int rope = 25;
	int ropeID = 01;
	int potion = 15;
	int potionID = 02;
	int sword = 75;
	int swordID = 03;
	int cntinue = 0;

	cout << "Current Inventory :" << endl;
	for (int x = 0; x < 3; x++)
	{
		switch (inventory[x])
		{
		case 00:
			cout << "EMPTY" << endl;
			break;
		case 01:
			cout << "Rope -- 25g" << endl;
			break;
		case 02:
			cout << "Potion -- 15g" << endl;
			break;
		case 03:
			cout << "Sword -- 75g" << endl;
			break;
		default:
			break;
		}
	}
	do{
		cout << "+=-------SHOP-------=+" << endl;
		cout << "| 1 --- Rope --- 25g |" << endl;
		cout << "| 2 -- Potion -- 15g |" << endl;
		cout << "| 3 --- Sword -- 75g |" << endl;
		cout << "+=------------------=+" << endl;
		cout << "What would you like to buy? \n.";
		cin >> itemBuy;

		switch (itemBuy)
		{
		case 1:
			if (inventory[0] == 00)
			{
				inventory[0] = ropeID;
			}
			else if (inventory[0] != 00 && inventory[1] == 00)
			{
				inventory[1] = ropeID;
			}
			else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
			{
				inventory[2] = ropeID;
			}
			else
			{
				cout << "You do not have enough space" << endl;
			}
			break;
		case 2:
			if (inventory[0] == 00)
			{
				inventory[0] = potionID;
			}
			else if (inventory[0] != 00 && inventory[1] == 00)
			{
				inventory[1] = potionID;
			}
			else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
			{
				inventory[2] = potionID;
			}
			else
			{
				cout << "You do not have enough space" << endl;
			}
			break;
		case 3:
			if (inventory[0] == 00)
			{
				inventory[0] = swordID;
			}
			else if (inventory[0] != 00 && inventory[1] == 00)
			{
				inventory[1] = swordID;
			}
			else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
			{
				inventory[2] = swordID;
			}
			else
			{
				cout << "You do not have enough space" << endl;
			}
			break;
		default:
			break;
		}

		cout << "Current Inventory :" << endl;
		for (int x = 0; x < 3; x++)
		{
			switch (inventory[x])
			{
			case 00:
				cout << "EMPTY" << endl;
				break;
			case 01:
				cout << "Rope -- 25g" << endl;
				break;
			case 02:
				cout << "Potion -- 15g" << endl;
				break;
			case 03:
				cout << "Sword -- 75g" << endl;
				break;
			default:
				break;
			}
		}
		cout << "Continue?" << endl;
		cin >> cntinue;
	} while (cntinue != -1);

	//system("pause");
	return 0;
}