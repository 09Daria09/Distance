#include"Part_choice.h"

Human::Human()
{
	jump = 100;
	run = 116;
	name = "Ivan";
}

Human::Human(int jump, int run, string name)
{
	this->jump = jump;
	this->run = run;
	this->name = name;
}

void Human::Init()
{
	cout << "Have you chosen a person, what is his name?" << endl;
	cin >> name;
	cout << "How far can he run?" << endl;;
	cin >> run;
	cout << "How high can he jump?" << endl;;
	cin >> jump;
}

Cat::Cat()
{
	jump = 130;
	run = 134;
	name = "Vasya";
}

Cat::Cat(int jump, int run, string name)
{
	this->jump = jump;
	this->run = run;
	this->name = name;
}

void Cat::Init()
{
	cout << "Have you chosen a cat, what's his name?" << endl;;
	cin >> name;
	cout << "How far can he run?" << endl;;
	cin >> run;
	cout << "How high can he jump?" << endl;;
	cin >> jump;
}

Robot::Robot()
{
	jump = 40;
	run = 200;
	name = "Vili";
}

Robot::Robot(int jump, int run, string name)
{
	this->jump = jump;
	this->run = run;
	this->name = name;
}

void Robot::Init()
{
	cout << "You chose a robot, what's his name?" << endl;;
	cin >> name;
	cout << "How far can he run?" << endl;;
	cin >> run;
	cout << "How high can he jump?" << endl;;
	cin >> jump;
}
