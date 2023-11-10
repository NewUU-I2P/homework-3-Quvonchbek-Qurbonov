[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=12830094&assignment_repo_type=AssignmentRepo)
## Simple project structure
The main idea about project structure is that you have at least 2 folders include and src. Folders purpose is:

- `include` - PUBLIC header files (.h files).
- `src` - PRIVATE source files (.h and .m files).
- `test` - tests files if you write tests (indefinitely you should).
- `libs` - third party or your own libraries you depend on.

```
MyProject
 ├── include
 │   └── MyProject
 │       └── Algorithm.h
 ├── src
 │   ├── Algorithm.cpp
 │   ├── FancyMath.h
 │   └── FancyMath.cpp
 └── test
     ├── AlgorithmTests.cpp
     └── FancyMathTests.cpp
```
