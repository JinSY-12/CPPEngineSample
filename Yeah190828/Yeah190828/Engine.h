#pragma once
#include <vector>

using namespace std;

class Engine
{
public:
	Engine();
	~Engine();

	bool GetIsRunning();
	void SetIsRunning(bool NewState);

	void Run();
	void AddActor(class Actor* NewActor);

protected:
	void Input();
	void Process();
	void Render();
	
	bool bIsRunning;

	vector<class Actor*> Actors;
};