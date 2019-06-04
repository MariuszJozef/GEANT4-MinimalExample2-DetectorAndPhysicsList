#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"

#include "MyDetectorConstruction.hh"
#include "MyPhysicsList.hh"
#include "MyPrimaryGeneratorAction.hh"

int main(int argc, char** argv)
{
	G4RunManager *runManager = new G4RunManager;

	runManager->SetUserInitialization(new MyDetectorConstruction);
    runManager->SetUserInitialization(new MyPhysicsList);

	G4VUserPrimaryGeneratorAction *generatorAction = new MyPrimaryGeneratorAction;
	runManager->SetUserAction(generatorAction);

	G4VisManager *visManager = new G4VisExecutive;
	visManager->Initialize();

	G4UImanager *uiManager = G4UImanager::GetUIpointer();
	G4UIExecutive *uiExecutive = new G4UIExecutive(argc, argv);

	uiManager->ApplyCommand("/control/execute visualisation.macro");
	uiExecutive->SessionStart();

	delete uiExecutive;
	delete visManager;
    delete runManager;
	return 0;
}
