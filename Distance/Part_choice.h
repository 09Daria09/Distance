#pragma once
#include"Participant.h"

class Human : public Participant
{
public:
	Human();
	Human(int, int, string);
	void Init();
};

class Cat : public Participant
{
public:
	Cat();
	Cat(int, int, string);
	void Init();
};

class Robot : public Participant
{
public:
	Robot();
	Robot(int, int, string);
	void Init();
};