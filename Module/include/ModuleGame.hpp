#ifndef __MODULE__MODULEGAME_HPP__
#define __MODULE__MODULEGAME_HPP__

#include "ModuleDefines.hpp"
#include "GameObject.hpp"
#include "Book.hpp"
#include "GraphicsInterface.hpp"
#include "ThreadingInterface.hpp"
#include "AudioInterface.hpp"

namespace Module {

/** The main class of Module. The ModuleGame class represents the core of Module. Its functionality ties together
 * that of the different interfaces. End users of Module (game developers) control Module through this class and not
 * by accessing interfaces, as those are meant to be abstracted away from users. Setting up a ModuleGame instance should
 * be the first thing done in a game that uses Module.
 */
class ModuleGame {
private:
	GraphicsInterface* graphics; /**< The GraphicsInterface attached to this game */
	AudioInterface* audio; /**< The AudioInterface attached to this game */
	ThreadingInterface* threading; /**< The ThreadingInterface attached to this game */
	
	Book<GameObject> objects; /**< The book of all GameObjects */
public:
	ModuleGame();
	
	void attachGraphicsInterface(GraphicsInterface* newGraphics);
	void attachAudioInterface(AudioInterface* newAudio);
	void attachThreadingInterface(ThreadingInterface* newThreading);
	
	void startThread(ThreadObject* obj);
	
	void start();
	bool isRunning();
	
	// Game Objects
	GameObject* createGameObject();
	Book<GameObject>::size_type numObjects() const;
	GameObject* getGameObject(Book<GameObject>::size_type index);
	const GameObject* getGameObject(Book<GameObject>::size_type index) const;
	
	// Threading
	Mutex* createMutex();
	
	// Graphics
	void setMesh(GameObject* obj, Mesh* mesh);
	unsigned long getMilliseconds();
};

/**
 * @return The current number of GameObject instances in this game.
 */
inline Book<GameObject>::size_type ModuleGame::numObjects() const
{
	return objects.size();
}

/**
 * @return A reference to the index'th GameObject in this game.
 */
inline GameObject* ModuleGame::getGameObject(Book<GameObject>::size_type index)
{
	return &objects[index];
}

/**
 * @return A const reference to the index'th GameObject in this game.
 */
inline const GameObject* ModuleGame::getGameObject(Book<GameObject>::size_type index) const
{
	return &objects[index];
}

/**
 * Creates a Mutex.
 * @return A pointer to the newly created Mutex
 */
inline Mutex* ModuleGame::createMutex()
{
	return threading->createMutex();
}

/**
 * Sets the Mesh component of a GameObject
 * @param obj The GameObject to set the Mesh component of
 * @param mesh The corresponding Mesh
 */
inline void ModuleGame::setMesh(GameObject* obj, Mesh* mesh)
{
	obj->mesh = mesh;
}

/**
 * @return The number of milliseconds that have elapsed since the start of the current game.
 */
inline unsigned long ModuleGame::getMilliseconds()
{
	return graphics->getMilliseconds();
}

}

#endif