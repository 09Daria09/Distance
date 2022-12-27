#include<iostream>
#include"Participant.h"
#include"Obstacles.h"
#include"Part_choice.h"
#include"Choice_obst.h"
#include <vector>
#include"Windows.h"
using namespace std;


int main()
{
	bool check = true;
	int str;
	srand(time(NULL));
	vector<Obstacles*>ob_ptr;

	while (true)
	{

		system("cls");
		for (int i = 0; i < 5; i++)
		{
			int a = 1 + rand() % -10;
			if (a % 2 == 0)
			{
				ob_ptr.push_back(new Wall);
			}
			else
			{
				ob_ptr.push_back(new Treadmill);
			}
		}
		Participant* ptr = nullptr;
		int choose;
		cout << "Choose your participants \n1.Human\n2.Cat\n3.Robot" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			ptr = new Human;
			break;
		case 2:
			ptr = new Cat;
			break;
		case 3:
			ptr = new Robot;
			break;
		default:
			cout << "You entered an invalid number" << endl;
			break;
		}
		ptr->Init();
		for (int i = 0; i < 5; i++)
		{
			if (ptr->jump < ob_ptr[i]->height)
			{
				cout << ptr->name << " lack of jumping power" << endl;
				cout << "The game is over" << endl;
				delete ptr;
				cout << "Would you like to play again? \n1.Yes\n2.NO" << endl;
				cin >> str;
				if (str == 2)
				{
					return 0;
				}
			}
			if (ptr->run < ob_ptr[i]->lenght)
			{
				cout << ptr->name << " not enough stamina to run" << endl;
				cout << "The game is over" << endl;
				delete ptr;
				cout << "Would you like to play again? \n1.Yes\n2.NO" << endl;
				cin >> str;
				if (str == 2)
				{
					return 0;
				}
			}
			else
			{
				cout <<"   "<<ptr->name << " has overcome the hurdle number " << i + 1 << endl;
				cout << "You have:" << endl;
				ptr->run -= ob_ptr[i]->lenght;
				ptr->jump -= ob_ptr[i]->height;
				cout << "       Jump " << ptr->jump << " Run " << ptr->run << endl;
				Sleep(3000);
			}
			system("cls");

		}
		cout << ptr->name << " WIN this game" << endl;
		delete ptr;
		cout << "Would you like to play again? \n1.Yes\n2.NO" << endl;
		cin >> str;
		if (str == 2)
		{
			return 0;
		}
	}
}