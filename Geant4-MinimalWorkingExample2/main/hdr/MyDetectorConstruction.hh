#ifndef HDR_MYDETECTORCONSTRUCTION_HH_
#define HDR_MYDETECTORCONSTRUCTION_HH_

#include "G4VUserDetectorConstruction.hh"

class G4LogicalVolume;
class G4VPhysicalVolume;
class G4Material;
class G4Box;

#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"
#include "globals.hh"
#include "G4ThreeVector.hh"

class MyDetectorConstruction: public G4VUserDetectorConstruction
{
public:
	MyDetectorConstruction();
	virtual ~MyDetectorConstruction();
	virtual G4VPhysicalVolume* Construct();

private:
	G4ThreeVector halfLabSize;
	G4Box *solidLab{nullptr};
	G4LogicalVolume *logicalLab{nullptr};
	G4VPhysicalVolume *physicalLab{nullptr};
	G4Material *labMaterial{nullptr};

	void DefineMaterials();
	G4VPhysicalVolume* ConstructDetector();
};

#endif /* HDR_MYDETECTORCONSTRUCTION_HH_ */
