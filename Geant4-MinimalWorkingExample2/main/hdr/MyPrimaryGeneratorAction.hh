#ifndef MYPRIMARYGENERATORACTION_HH_
#define MYPRIMARYGENERATORACTION_HH_

#include "G4VUserPrimaryGeneratorAction.hh"

class G4ParticleGun;
class G4ParticleDefinition;
class G4Event;

class MyPrimaryGeneratorAction: public G4VUserPrimaryGeneratorAction
{
public:
	MyPrimaryGeneratorAction();
	~MyPrimaryGeneratorAction();

public:
	void GeneratePrimaries(G4Event* anEvent);

private:
	G4ParticleGun *particleGun;
	G4ParticleDefinition *geantino;
	G4ParticleDefinition *electron;
	G4ParticleDefinition *positron;
	G4ParticleDefinition *gamma;
	G4ParticleDefinition *proton;
};

#endif /* MYPRIMARYGENERATORACTION_HH_ */
