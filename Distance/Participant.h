#pragma once
#include<iostream>
using namespace std;
class Participant
{
public:
	int jump;
	int run;
	string name;
	Participant();
	virtual void Init() = 0;
};