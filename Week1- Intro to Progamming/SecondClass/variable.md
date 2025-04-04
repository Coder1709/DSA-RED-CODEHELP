# Variables and Data Types

## What is a Variable?
A variable is a named storage location in memory that holds a value. It allows programmers to store, retrieve, and manipulate data during program execution.

## Types of Variables
1. **Local Variables**: Declared inside a function and accessible only within that function.
2. **Global Variables**: Declared outside any function and accessible throughout the program.
3. **Static Variables**: Retain their value between function calls.

## Data Types
Data types define the type of data a variable can hold. Common data types include:
- **Integer**: Whole numbers (e.g., `int` in C/C++).
- **Float/Double**: Decimal numbers (e.g., `float`, `double`).
- **Character**: Single characters (e.g., `char`).
- **Boolean**: True or false values (e.g., `bool`).
- **String**: Sequence of characters (e.g., `string`).

## How Variables are Stored
Variables are stored in memory, and their location is determined by the operating system. The memory is divided into:
- **Stack**: Stores local variables.
- **Heap**: Stores dynamically allocated variables.
- **Data Segment**: Stores global and static variables.

## Symbol Table
A symbol table is a data structure used by compilers to store information about variables, such as:
- Variable name
- Data type
- Memory location
- Scope and lifetime

## Naming Conventions
1. Use meaningful names (e.g., `age`, `totalPrice`).
2. Start with a letter or underscore (e.g., `_count`).
3. Avoid reserved keywords (e.g., `int`, `class`).
4. Use camelCase or snake_case for readability (e.g., `userName`, `user_name`).

## Example
```c
int age = 25;       // Integer variable
float price = 99.99; // Float variable
char grade = 'A';    // Character variable
bool isPassed = true; // Boolean variable
```





