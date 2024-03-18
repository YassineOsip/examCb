#include "exam.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s [grademe | <function_name>]\n", argv[0]);
        return 1;
    }
    
    int grade_mode = strcmp(argv[1], "grademe") == 0;
    char *function_name = argv[1];
    char *argument = argv[2];
    int final_grade = 0;

    int (*func_add)(int, int) = NULL;
    int (*func_max)(int, int) = NULL;
    char *(*func_reverse)(char *) = NULL;
    int (*func_prime)(int) = NULL;
    int (*func_palindrome)(char *) = NULL;

    if (!grade_mode)
    {
        if (strcmp(function_name, "add") == 0)
        {
            func_add = add;
        }
        else if (strcmp(function_name, "reverse_string") == 0)
        {
            func_reverse = reverse_string;
        }
        else if (strcmp(function_name, "find_max") == 0)
        {
            func_max = find_max;
        }
        else if (strcmp(function_name, "is_prime") == 0)
        {
            func_prime = is_prime;
        }
        else if (strcmp(function_name, "is_palindrome") == 0)
        {
            func_palindrome = is_palindrome;
        }
        else
        {
          printf("Invalid function name.\n");
          return 1;
        }   
    }
    else
    {
        func_add = add;
        if (!func_add)
            printf("add: Function not defined\n");
        func_reverse = reverse_string;
        if (!func_reverse)
            printf("reverse_string: Function not defined\n");
        func_max = find_max;
        if (!func_max)
            printf("find_max: Function not defined\n");
        func_prime = is_prime;
        if (!func_prime)
            printf("is_prime: Function not defined\n");
        func_palindrome = is_palindrome;
        if (!func_palindrome)
            printf("is_palindrome: Function not defined\n");
    }

    if (func_add)
    {
      int tests_passed = 0;
      tests_passed += (func_add(4, 5) == 9);
      tests_passed += (func_add(0, 10) == 10);
      tests_passed += (func_add(-3, 8) == 5);
      if (grade_mode && tests_passed == 3)
        final_grade += 4;
      printf("%s: %s\n", function_name, (tests_passed == 3) ? "Passed" : "Failed");
    }
    if (func_reverse)
    {
      int tests_passed = 0;
      tests_passed += (strcmp(func_reverse("hello"), "olleh") == 0);
      tests_passed += (strcmp(func_reverse("madam"), "madam") == 0);
      tests_passed += (strcmp(func_reverse("racecar"), "racecar") == 0);
      if (grade_mode && tests_passed == 3)
        final_grade += 4;
      printf("%s: %s\n", function_name, (tests_passed == 3) ? "Passed" : "Failed");
    }
    if (func_max)
    {
        int tests_passed = 0;
        tests_passed += (func_max(10, 5) == 10);
        tests_passed += (func_max(-8, -3) == -3);
        tests_passed += (func_max(15, 15) == 15);
        if (grade_mode && tests_passed == 3)
            final_grade += 4;
        printf("%s: %s\n", function_name, (tests_passed == 3) ? "Passed" : "Failed");
        
    }
    if (func_prime)
    {
        int tests_passed = 0;
        tests_passed += (func_prime(7) == 1);
        tests_passed += (func_prime(1) == 0);
        tests_passed += (func_prime(47) == 1);
        if (grade_mode && tests_passed == 3)
            final_grade += 4;
        printf("%s: %s\n", function_name, (tests_passed == 3) ? "Passed" : "Failed");
    }
    if (func_palindrome)
    {
        int tests_passed = 0;
        tests_passed += (func_palindrome("racecar") == 1);
        tests_passed += (func_palindrome("yassine") == 0);
        tests_passed += (func_palindrome("") == 1);
        if (grade_mode && tests_passed == 3)
            final_grade += 4;
        printf("%s: %s\n", function_name, (tests_passed == 3) ? "Passed" : "Failed");
    }
    
    if (grade_mode) {
        printf("------------------------------\nFinal Grade: %d (out of 20)\n------------------------------\n", final_grade);
    }
    return 0;
}
