#include <iostream>

int main () {

    int n = 5; //Regular variable 

    std::cout << "\nThe value of n is "<< n << std::endl;
    std::cout << "The address of n is " << &n << std::endl;

    int& nReference = n; //Reference that is bound to the original variable (alias)
    
    std::cout << "\nThe value of nReference is "<< nReference << std::endl;
    std::cout << "The address of nReference is " <<&nReference << std::endl;

    std::cout << "\nNow, we will edit the value of n and see if nReference changes as well.\n";
    n = 10;
    std::cout << "The new value of n is now 10.\n";
    std::cout << "Print n: " << n << std::endl;
    std::cout << "Print nReference: " << nReference << std::endl;
    std::cout << "Both variables display the updated value.\n";

    std::cout << "\nNow we will create a pointer pointing to n's address.\n";
    int* nptr = &n; //Pointers must always point to a memory address, hence '&'
    std::cout << "The value of the pointer nptr is: " << nptr << std::endl;
    std::cout << "\nNow, theoretically if I dereference the pointer, I should obtain the value of n.\n";
    std::cout << "The value of *nptr is: " << *nptr << std::endl;

    std::cout << "\nNow, we will attempt to mutate the value once more, this time through the pointer.\n";
    *nptr = 15;
    std::cout << "We now have set *nptr = 15. Let's print *nptr and its address.\n";
    std::cout << "The value stored in *nptr is: " << *nptr <<std::endl;
    std::cout << "The address stored in nptr is: " << nptr << std::endl;
    std::cout << "The address of nptr itself (&nptr) is: " << &nptr << std::endl;

    std::cout << "\nPerfect! Now let's see if the updated value is visible.\n";
    std::cout << "The value of n is: " << n << std::endl;
    std::cout << "The value of nReference is: " << nReference << std::endl;


    std::cout << "\nIt worked! End of lesson. " << std::endl;

    return 0;
}