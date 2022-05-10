#include <iostream>
using namespace std;

int main()
{
    /* The following code essentially does the following:
    Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr).
    Note that the type of the pointer has to match the type of the variable you're working with.
    Use the & operator to store the memory address of the variable called food, and assign it to the pointer.
    Now, ptr holds the value of food's memory address.*/
    
    string food = "Sushi"; // string variable food
    string* ptr = &food; // Pointer variable ptr, stores address of food

    // Output the value of food (Sushi)
    cout << food << endl;

    // Output the memory address of food
    cout << &food << endl;

    // Output the memory address of food with the pointer (identical functionality to the line above)
    cout << ptr << endl;

    // Dereference: output the value of food with the pointer (Sushi)
    cout << *ptr << endl;

    // Note that the * sign is contextual:
    //  When used in declaration (string* ptr) it creates a POINTER VARIABLE
    //  When NOT used in a declaration (cout << *ptr) it acts as a DEREFERENCE OPERATOR

    return 0;
}
