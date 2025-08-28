# Count Numbers Entered in C

This program counts how many numbers the user enters until they type **-1** to stop. It uses a **do-while loop** so that the program runs at least once, asks for input repeatedly, and increases the count each time a valid number is entered. Finally, it prints the total count of numbers entered (excluding -1).

### How to Run

1. Save the code as `count_numbers.c`
2. Compile the program:

   ```bash
   gcc count_numbers.c -o count_numbers
   ```
3. Run the program:

   ```bash
   ./count_numbers
   ```

### Example Run

```
Enter a number (-1 to stop): 5
Enter a number (-1 to stop): 8
Enter a number (-1 to stop): 3
Enter a number (-1 to stop): -1
Total numbers entered: 3
```
