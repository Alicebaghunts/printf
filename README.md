
## Features

- Prototype: `int ft_printf(const char *, ...);`
- Handles the following conversions:
  - `%c` : Prints a single character.
  - `%s` : Prints a string (as defined by the common C convention).
  - `%p` : Prints a `void *` pointer in hexadecimal format.
  - `%d` : Prints a decimal (base 10) integer.
  - `%i` : Prints an integer in base 10.
  - `%u` : Prints an unsigned decimal (base 10) number.
  - `%x` : Prints a number in hexadecimal (base 16) lowercase format.
  - `%X` : Prints a number in hexadecimal (base 16) uppercase format.
  - `%%` : Prints a percent sign.
- Evaluated against the behavior of the original `printf`, ensuring compatibility.

## Requirements

1. **Buffer Management**: Do not implement the original `printf`'s buffer management.
2. **Library Creation**:
   - Use the `ar` command to create the library.
   - The use of the `libtool` command is strictly forbidden.
   - The library file `libftprintf.a` must be created at the root of the repository.
3. **Compilation**: Ensure your implementation compiles and functions as intended.
4. **Naming**: Use the function name `ft_printf` for all implementations.

## Implementation Details

- **Variadic Arguments**: The function uses variadic arguments to process the format string and corresponding arguments passed to `ft_printf`.
- **Output Management**: The behavior mimics `printf`, ensuring correct formatting, precision, and output for all supported conversions.
- **Edge Cases**: Your implementation will be tested against various edge cases to ensure robustness and compatibility with `printf`.

### Why ft_printf?

`ft_printf` was created because standard functions like `ft_putnbr()` and `ft_putstr()` are not sufficient for complex formatted output. This project provides a deeper understanding of how formatting works and demonstrates the process of creating a robust, reusable library.

## Usage

1. Clone the repository and navigate to the root directory.
2. Compile the library by running:
   ```bash
   make
   ```
   This will create `libftprintf.a` in the root directory.
3. Include the library in your project by linking it during compilation:
   ```bash
   gcc -o your_program your_program.c -L. -lftprintf
   ```
4. Call `ft_printf` in your code just like the original `printf`.

## Example

```c
#include "ft_printf.h"

int main() {
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", (void *)&main);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 12345);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Percent Sign: %%\n");
    return 0;
}
```

## Constraints

- You **cannot** use the `libtool` command.
- The library must be created using `ar` and placed in the root directory as `libftprintf.a`.

## Testing

To test your implementation, compare the outputs of `ft_printf` and the original `printf` with the same format strings and arguments. Ensure edge cases are handled gracefully.
