## EXAM C BEGINNERS
### LEVEL1
* **int add(int a, int b)**
    - **Description:**  Calculates the sum of two integers.
    - **Example:**
        ```c
        int result = add(5, 3); // result will be 8
        ```
### LEVEL2
* **int find_max(int num1, int num2)**
    - **Description:** Returns the larger of two integers.
    - **Example:**
        ```c
        int max_value = find_max(10, 5);  // max_value will be 10 
        ```
### LEVEL3
* char *reverse_string(char ***str)**
    - **Description:** Reverses a given string in-place.
    - **Example:**
        ```c
        char str[] = "hello"; 
        reverse_string(str); // str will now be "olleh"
        ```
### LEVEL4
* **int is_prime(int number)**
    - **Description:**  Determines if a number is prime (only divisible by 1 and itself).
    - **Example:**
        ```c
        int is_seven_prime = is_prime(7);  // is_seven_prime will be 1
        ```
### LEVEL5
* int is_palindrome(char ***str)**
    - **Description:** Checks if a string is a palindrome (reads the same forwards and backwards, ignoring case).
    - **Example:**
        ```c
        int is_racecar_palindrome = is_palindrome("racecar"); // is_racecar_palindrome will be 1
        ```

## How to Compile and Test

1. **Prerequisites:** Make sure you have a C compiler (like GCC) installed.

2. **Compile:**
   ```bash
   $ gcc exam.c main.c -o test_program
   ```
2. **Test:**
   ```bash
   Usage: ./a.out [grademe | <function_name>]
   ```