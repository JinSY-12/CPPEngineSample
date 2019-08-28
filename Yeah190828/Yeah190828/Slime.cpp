#include "Slime.h"
#include <iostream>


using namespace std;

Slime::Slime()
{
}


Slime::~Slime()
{
}

void Slime::BeginPlay()
{
	cout << "Slime::BeginePlay()" << endl;

}

void Slime::Tick()
{
	cout << "Slime::Tick()" << endl;

}

void Slime::Render()
{
	cout << "Slime::Render()" << endl;
}
