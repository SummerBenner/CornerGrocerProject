# 🛒 CornerGrocerProject

A menu-driven C++ application that tracks grocery item frequencies using file I/O and histogram output. Built with modular class design and clean separation of logic.

---

## 📌 Project Overview

CornerGrocerProject allows users to:
- View all purchased items and their frequencies
- Search for a specific item’s frequency
- Display a histogram of item frequencies
- Exit the program gracefully

The program reads from `items.txt`, processes item frequencies, and writes results to `frequency.dat`. It uses a class-based design for dynamic menu interaction and file handling.
This functionality supports small business inventory tracking and basic data analysis.

The CornerGrocerProject is a C++ application designed to track and analyze grocery item purchases. It reads transaction data from a file, counts item frequencies, and presents the results through a menu-driven interface and a histogram display. This project demonstrates my ability to design modular, readable, and rubric-compliant code using object-oriented principles and file I/O operations.
---

## 🧠 Features

- Modular C++ class design (`ItemTracker`)
- File I/O with input (`items.txt`) and output (`frequency.dat`)
- Menu-driven logic with input validation
- Histogram output using ASCII formatting
- Clear documentation and maintainable structure


## 🎯 Problem Solved  
The program solves the problem of organizing and visualizing purchase data in a user-friendly format. It enables users to:
- View the frequency of all purchased items
- Search for the frequency of a specific item
- Display a histogram of item frequencies
- Exit the program gracefully

This functionality supports small business inventory tracking and basic data analysis.

## ✅ What I Did Well  
- Designed modular classes with clear responsibilities and scoped variables  
- Implemented readable, well-commented code aligned with rubric and industry standards  
- Ensured consistent menu logic and intuitive user interaction  
- Validated output formatting for both console and histogram display  
- Documented the project thoroughly, including ethical considerations

## 🔍 Areas for Enhancement  
- **Efficiency**: Replace vector-based tracking with `unordered_map` for faster lookup  
- **Security**: Add input validation and exception handling to prevent crashes from malformed input  
- **Scalability**: Refactor for dynamic file paths and support for larger datasets  
These improvements would enhance performance, robustness, and adaptability.

## 🧠 Challenges and Solutions  
- **File I/O inconsistencies across IDEs**: Resolved by testing in both Eclipse and Visual Studio, adjusting relative paths, and using command-line arguments  
- **Menu logic edge cases**: Addressed with conditional checks and loop control  
- **Histogram formatting**: Fine-tuned spacing and alignment for readability  
I expanded my support network with IDE documentation, GitHub discussions, and Stack Overflow threads.

## 🔁 Transferable Skills  
- Object-oriented design and modular architecture  
- File handling and data parsing  
- Menu-driven logic and user interaction  
- Rubric interpretation and technical documentation  
- Ethical reasoning and standards-based reflection

These skills are foundational for future coursework and professional development.

## 🛠️ Maintainability and Readability  
- Consistent naming conventions and inline comments  
- Modular functions with single responsibilities  
- Clear separation of logic, input/output, and data structures  
- README includes technical summary, challenges, and ethical reflection for future reference



## 🖥️ How to Compile and Run

### Using g++ (Command Line):
```bash
g++ -o CornerGrocer main.cpp itemTracker.cpp
./CornerGrocer


