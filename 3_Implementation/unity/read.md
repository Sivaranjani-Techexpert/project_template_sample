# Project Folder Structure

The project is organized into the following folder structure:

| Folder   | Description                                    |
|----------|------------------------------------------------|
| **inc**  | All header files                               |
| **src**  | Main source code for the temperature converter |
| **test** | All source code and data for testing purposes  |
| **build**| Build output (Not included in git)             |

## Folder Structure Breakdown

- **inc/**  
  This folder contains all the header files needed for the project. Each module or functionality of the project has its own header file.

- **src/**  
  This folder contains the main source code for the temperature converter application. It includes all the implementation logic of the project.

- **test/**  
  This folder includes the source code for testing the project. It uses unit testing (Unity framework) to ensure that all functionalities of the application work as expected.

- **build/**  
  The build output is placed in this folder. The build files, including executables, object files, and compiled libraries, are stored here. This folder should be ignored by git (usually added to `.gitignore`).
