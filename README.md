# 🧠 Custom C Preprocessor – Macro Processing & Comment Removal

> ⚡ A simplified implementation of a C Preprocessor that performs comment removal and macro expansion using file handling and string processing techniques

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Concept-FileHandling-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Feature-MacroProcessing-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge">
</p>

---

## 🌟 Project Overview

This project simulates the core functionality of a **C Preprocessor**, focusing on:

- Removing comments (`//`, `/* */`)
- Performing macro substitution
- Processing input files and generating cleaned output

💡 It demonstrates how preprocessing works internally before compilation.

---

## 🎯 Objective

- Understand how C preprocessing works
- Implement comment removal logic
- Simulate macro expansion using string manipulation
- Work with file handling in C

---

## ⚙️ Workflow
Input C File → Comment Removal → Macro Processing → Final Output File

---

## 🛠️ Technologies Used
- C Programming
- File Handling (fopen, fgetc, fgets)
- String Manipulation (strstr, strcpy, strcat)
- Dynamic Processing Logic

---

## ✨ Features
- 🧹 Removes single-line and multi-line comments
- 🔁 Performs macro substitution
- 📂 Reads from input file and generates output file
- ⚡ Lightweight and efficient processing
- 📌 Handles real C code structure

## 📂 Project Structure

```bash
Custom-C-Preprocessor/
│
├── preprocessor.c      # Main program
├── abc.c               # Sample input file
├── output.c            # Generated output
├── images/             # Screenshots
│   ├── input.png
│   └── output.png
└── README.md
```

## ▶️ How to Run
```bash
gcc preprocessor.c -o pre
./pre abc.c
```

📸 Screenshots
📝 Input File
📤 Output File

## 📈 Example Output
```c
#include<stdio.h>

int main() {
    int k = 3456;

    printf("%d %d\n", k, 65);
}
```

## 💥 Why This Project Matters
- Demonstrates understanding of compiler design basics
- Strong use of file handling and string manipulation
- Shows ability to build low-level system logic
- Goes beyond basic CRUD projects

## 🧠 Key Learnings
- Working with file streams in C
- String parsing and manipulation
- Understanding preprocessing stages
- Debugging and handling edge cases

## 🔮 Future Enhancements
- Support dynamic macro definitions (#define parsing)
- Implement #include file handling
- Add tokenization logic
- Build a mini compiler pipeline

## 👨‍💻 Author

Mahidhar Reddy
🚀 Backend Developer | Embedded Systems Enthusiast

💼 GitHub: https://github.com/Code-with-Mahidhar

🔗 LinkedIn: https://www.linkedin.com/in/mahidhar-reddy-bandre-009894264

📧 Email: mahidharreddybandre@gmail.com
