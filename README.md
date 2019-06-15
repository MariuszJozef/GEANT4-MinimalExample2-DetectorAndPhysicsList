# GEANT4-MinimalExample2-DetectorAndPhysicsList
This builds on top of the previous example by adding the three essential (though minimal) classes: DetectorConstruction, PhysicsList, PrimaryGeneratorAction. The simulation lab is a cuboid filled with air; electrons are fired off in somewhat randomised directions and are propagated without any interactions. For now some values like electron gun position and lab size are hardcoded; this will be remedied in the next example.

The unresolved inclusions seem to be false warnings issued by Eclipse; they can be safely ignored. Excuse also some code  indenting issues in MyDetectorConstruction.cc whilst pushing from Eclipse to GitHub and my file suffix inconsistency (.cpp and .cc).

<img width="1020" alt="image" src="https://user-images.githubusercontent.com/51378175/58921484-46114a00-8737-11e9-8ea4-68cb8bd4c0e3.png">

![/run/beamOn demo](GEANT4-MinimalWorkingExample2_beamOn.gif)

<img width="1097" alt="image" src="https://user-images.githubusercontent.com/51378175/58921798-8e7d3780-8738-11e9-9ad6-d00ee86b7a00.png">

<img width="1116" alt="image" src="https://user-images.githubusercontent.com/51378175/58922227-57a82100-873a-11e9-8d74-746aeb4e98a8.png">

# N.B.
In GEANT4 not every instance of a class with "new" needs to be explicitly deleted by the user, this is handled by the GEANT4 kernel. (Refer online to "Geant4 User's Guide for Application Developers".)
