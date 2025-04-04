# Homework Explanation

## 1. Alternative to `endl`
`endl` is used in C++ to insert a newline and flush the output buffer. Alternatives include:

### Example:
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello" << '\n'; // Using '\n'
    cout << "World" << std::flush; // Using std::flush
    return 0;
}
```
- `\n` (newline character) is preferred as it does not flush the buffer automatically.
- `std::flush` flushes the buffer but does not insert a newline.

## 2. Characters of 32-bit and 64-bit Systems
- **32-bit**: Can handle 4GB (2^32) memory space.
- **64-bit**: Can handle 16 exabytes (2^64) memory space.
- Data types, pointers, and addresses are stored differently.

### Example:
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Size of int (32-bit vs 64-bit): " << sizeof(int) << " bytes\n";
    cout << "Size of pointer (32-bit vs 64-bit): " << sizeof(void*) << " bytes\n";
    return 0;
}
```

## 3. Difference Between 32-bit and 64-bit
| Feature  | 32-bit  | 64-bit  |
|----------|---------|---------|
| Max Memory | 4GB | 16EB |
| Registers  | 32-bit | 64-bit |
| Processing Speed | Slower | Faster |

## 4. Difference in Storage of +ve and -ve Integers
- **Positive Integers** are stored in binary normally.
- **Negative Integers** use Two's Complement representation.

### Example:
```cpp
int a = 5;  // 0000 0101 (Binary)
int b = -5; // 1111 1011 (Two's complement)
```

## 5. Signed and Unsigned Variables
- **Signed**: Can store negative and positive values.
- **Unsigned**: Only stores positive values.

### Example:
```cpp
unsigned int x = 10; // Range: 0 to 4,294,967,295 (32-bit)
signed int y = -10;  // Range: -2,147,483,648 to 2,147,483,647
```

## 6. 1's Complement and 2's Complement
- **1’s Complement**: Inverts bits (0->1, 1->0).
- **2’s Complement**: 1’s complement + 1.

### Example:
```cpp
int a = 5;  // 0000 0101
int b = ~a; // 1111 1010 (1's complement)
int c = b + 1; // 2's complement (-5)
```

## 7. How it gets Converted
Binary conversion follows:
1. Convert to binary.
2. Apply Two’s Complement for negative numbers.
3. Convert back to decimal if needed.

## 8. Open Object File and Read It
Object files are compiled but not linked.

### Example (Linux):
```sh
objdump -d file.o
```

## 9. Open Executable File and Read It
Executables contain machine code.

### Example (Linux):
```sh
hexdump -C file
```

## 10. High-Level Language and Its Conversions
### High-Level Language to Low-Level Language
Compiler translates C++/Java to Assembly.

### High-Level Language to Machine Code
Compiled code converts to binary machine instructions.

### High-Level Language to Assembly Code
Use a compiler to see Assembly:
```sh
gcc -S program.c
```

### High-Level Language to Object Code
Object files are generated using:
```sh
gcc -c program.c -o program.o
```

### High-Level Language to Binary Code
Binary files are created after compilation.

### High-Level Language to Executable Code
```sh
gcc program.c -o program
```

### High-Level Language to Source Code
Source code is the original file.

## 11. Unsigned Char Storage (8-bit)
An `unsigned char` stores values 0-255 in 8 bits.

### Example:
```cpp
unsigned char ch = 255; // Stored as 1111 1111
```



## 12. 1's Complement and 2's Complement

### 1's Complement
1's complement is a method of representing negative binary numbers. To find the 1's complement of a binary number:
1. Invert all the bits (change `0` to `1` and `1` to `0`).

#### Example:
For the 8-bit binary number `00001101` (decimal 13):
1. Invert all bits: `11110010` (this is the 1's complement).

### 2's Complement
2's complement is another method of representing negative binary numbers, widely used in computer systems. To find the 2's complement of a binary number:
1. Find the 1's complement of the number.
2. Add `1` to the least significant bit (LSB) of the 1's complement.

#### Example:
For the 8-bit binary number `00001101` (decimal 13):
1. Find the 1's complement: `11110010`.
2. Add `1` to the LSB: `11110010 + 1 = 11110011` (this is the 2's complement, representing -13 in decimal).

### Key Points:
- In 1's complement, there are two representations for zero (`00000000` and `11111111`).
- In 2's complement, there is only one representation for zero (`00000000`).
- 2's complement simplifies arithmetic operations in binary systems.

