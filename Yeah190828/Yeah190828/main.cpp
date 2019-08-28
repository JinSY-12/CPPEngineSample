#include "Engine.h"
//#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"

int main()
{
	Engine* engine = new Engine();
	engine->AddActor(new Player());
	engine->AddActor(new Monster());
	engine->AddActor(new Goblin());
	engine->AddActor(new Slime());

	engine->Run();

	delete engine;
	engine = nullptr;

	return 0;
}