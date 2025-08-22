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

---

## 🧠 Features

- Modular C++ class design (`ItemTracker`)
- File I/O with input (`items.txt`) and output (`frequency.dat`)
- Menu-driven logic with input validation
- Histogram output using ASCII formatting
- Clear documentation and maintainable structure

---



## 🖥️ How to Compile and Run

### Using g++ (Command Line):
```bash
g++ -o CornerGrocer main.cpp itemTracker.cpp
./CornerGrocer
