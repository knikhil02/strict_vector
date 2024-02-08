# strict_vector:

## Introduction
This C++ program allows users to create and manipulate vectors of various data types (int, float, string, double, char). Users have the option to either specify the size of the vector beforehand or proceed without specifying the size and terminate input with a sentinel value. The program provides functionality to add elements to vectors, display vectors, and remove elements from vectors.
## Prerequisites:
To run this C++ program, you'll need a C++ compiler installed on your system. This code was written and tested using the C++ standard library.

## Getting Started:
1. Clone the repository or download the source code file.
2. Compile the source code using a C++ compiler.
3. Execute the compiled program.
4. Follow the prompts to create and manipulate vectors.

## instruction
Upon starting, you will be presented with a menu where you have to choose from given option 1. Enter the size of vector & 2.Proceed the vector. if user choose option  1 then you will be asked for the size of the vector. And if you choose option 2 then you use a sentinel value (-1) to terminate your input in this case.  We create a vector with no initialize size provided until the sentinel value is entered.

## How to create the vector
Upon execution, the program will prompt you with two options:
1. Enter the size of your vector.
2. Proceed without specifying the size.

(Option 1):

If you choose to enter the size of your vector, input the desired size when prompted.

After specifying the size, you will be prompted to choose the data type for your vector:

1. int    2. float    3. string    4. double    5. char
 
Proceed to enter the elements for your chosen data type. For each element, the program will prompt you accordingly.

(Option 2):

If you choose to proceed without specifying the size, enter the elements for your vector. Use -1 as a sentinel value to indicate the end of input.

After creating the vector, you have the option to remove the last element by entering 1 when prompted. Error handling is implemented for invalid input.
Follow these steps to create and manipulate vectors using the provided C++ program.

## Code Structure
- `display(vector<T> &v)`: Template function to display the contents of a vector.
- `main()`: Main function containing the program logic.
