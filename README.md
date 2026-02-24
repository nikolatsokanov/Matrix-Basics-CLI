# Matrix-Basics-CLI

Matrix Basics CLI is a simple C++ console program that lets you explore small matrices (up to 5×5) using basic operations.  
It’s designed for beginners learning arrays, loops, and conditional statements in C++.

## Features

- Print the matrix
- Sum of each row
- Sum of each column
- Sum of the main diagonal
- Find the maximum and minimum element
- Exit the program

## How to Use

1. Run the program.
2. Enter the number of rows and columns (both ≤ 5).
3. Enter the elements of the matrix.
4. Choose an operation from the menu by typing its name (case-insensitive).


## Note on Variable-Length Arrays (VLA)

Originally, the program used variable-length arrays (e.g., `int matrix[m][n];`), which work on some compilers like GCC/Clang (used in CLion), but **do not work on Microsoft Visual Studio**, because VLAs are **not standard in C++**.  

