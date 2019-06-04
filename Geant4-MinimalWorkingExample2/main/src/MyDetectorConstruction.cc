#include "MyDetectorConstruction.hh"

#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"

#include "G4NistManager.hh"
#include "G4VisAttributes.hh"

MyDetectorConstruction::MyDetectorConstruction()
: G4VUserDetectorConstruction()
{
	// Be careful of this hard-coded value, position of particle gun in
	// MyPrimaryGeneratorAction.cc
	// is also hard-coded and must be within lab dimensions.
	halfLabSize = G4ThreeVector(5*cm, 6*cm, 7*cm);
}

MyDetectorConstruction::~MyDetectorConstruction() {}

G4VPhysicalVolume* MyDetectorConstruction::Construct()
{
	DefineMaterials();
	return ConstructDetector();
}

void MyDetectorConstruction::DefineMaterials()
{
	G4NistManager *nist = G4NistManager::Instance();
	G4Material *air = nist->FindOrBuildMaterial("G4_AIR");
	G4Material *Pb = nist->FindOrBuildMaterial("G4_Pb");
	labMaterial = air;
}

G4VPhysicalVolume* MyDetectorConstruction::ConstructDetector()
{
	G4bool checkOverlaps = true;
	G4double opacity = 0.4;

	G4VisAttributes *orange = new G4VisAttributes(G4Colour(1, 0.65, 0, opacity));
	orange->SetVisibility(true);
	orange->SetForceWireframe(true);	// Whichever is last overwrites the previous one!
	orange->SetForceSolid(true);		// Whichever is last overwrites the previous one!

	G4VisAttributes *yellow = new G4VisAttributes(G4Colour(1, 1, 0, opacity));
	yellow->SetVisibility(true);
	yellow->SetForceSolid(true);
	yellow->SetForceWireframe(true);

	solidLab = new G4Box("Lab",          //its name
						 halfLabSize.x(), halfLabSize.y(), halfLabSize.z());	//its size

	logicalLab = new G4LogicalVolume(solidLab,    //its solid
									labMaterial, //its material
									"Lab");      //its name

	physicalLab = new G4PVPlacement(0,   			//no rotation
								   G4ThreeVector(), //at (0,0,0)
								   logicalLab,      //its logical volume
								   "Lab",           //its name
								   0, //NULL,        //its mother  volume
								   false,            //no boolean operation
								   0);               //copy number

	return physicalLab;
}
