#ifndef MYPHYSICSLIST_HH_
#define MYPHYSICSLIST_HH_

#include "G4VUserPhysicsList.hh"
#include "globals.hh"

class MyPhysicsList: public G4VUserPhysicsList
{
public:
	MyPhysicsList();
	~MyPhysicsList();

protected:
	// Construct particle and physics process
	void ConstructParticle();
	void ConstructProcess();
	void SetCuts();
};

#endif /* MYPHYSICSLIST_HH_ */
