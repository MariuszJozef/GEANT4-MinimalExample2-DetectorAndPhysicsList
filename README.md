# GEANT4-MinimalWorkingExample2WithEclipseIDE
This builds on top of the previous example GEANT4-BareBonesExampleWithEclipseIDE by adding the three essential but minimal classes: DetectorConstruction, PhysicsList, PrimaryGeneratorAction. The simulation lab is a cuboid filled with air; electrons are fired off in somewhat randomised directions and are propagated without any interactions. For now some values like position, size are hardcoded. Even particle type and energy cannot be adjusted at runtime but this will be remedied in the next example.

The unresolved inclusions seem to be false warnings issued by Eclipse; they can be safely ignored. Excuse also some code  indenting issues in MyDetectorConstruction.cc whilst pushing from Eclipse to GitHub and my file suffix inconsistency (.cpp and .cc).

<img width="1020" alt="image" src="https://user-images.githubusercontent.com/51378175/58921484-46114a00-8737-11e9-8ea4-68cb8bd4c0e3.png">

<img width="1293" alt="image" src="https://user-images.githubusercontent.com/51378175/58921711-2af30a00-8738-11e9-9cd7-9e0482150f81.png">

<img width="1097" alt="image" src="https://user-images.githubusercontent.com/51378175/58921798-8e7d3780-8738-11e9-9ad6-d00ee86b7a00.png">

<img width="1116" alt="image" src="https://user-images.githubusercontent.com/51378175/58922227-57a82100-873a-11e9-8d74-746aeb4e98a8.png">

(This example is named "GEANT4-MinimalWorkingExample2WithEclipseIDE" because the previous one "GEANT4-BareBonesExampleWithEclipseIDE" should be thought of as synonymous with "GEANT4-MinimalWorkingExample1WithEclipseIDE").
