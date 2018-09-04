#include<iostream>
using namespace std;

int passByValue(int val1)
{
    cout<<"\nPass by value\n";
    val1 = 2;
    cout<<"New val1 "<< val1;
}

int passByRef(int* pVal1)
{
    cout<<"\nPass by reference\n";
    *pVal1 = 50;
    cout<<"New *pVal1 "<<*pVal1;
}

int main()
{
    int num1, numx = 27;
    int* pNum = &numx;

    num1 = 3;
    *pNum = 5;

    cout<<"Before pass by value :"<< num1 <<endl;
    passByValue(num1);
    cout<<"After pass by value :"<< num1 <<endl;

    cout<<"Before pass by ref :"<< num1 <<endl;
    passByRef(&num1);
    cout<<"After pass by ref :"<< num1 <<endl;

}

// g++ edx_pointerslab_1.cpp -o edx_pointerslab_1.o && ./edx_pointerslab_1.o

// Create a new C++ console application called PointersLab
// In your main() function, create two variables.  One variable needs to be an intrinsic integer variable named num1 and the second needs to be a pointer to an int variable that you will call pNum.  (Note, pNum should NOT be a pointer to num1 which means you need to create another variable for pNum to point to.)
// Assign the value 3 to num1.
// Assign the value 5 to the memory location stored in pNum.  (Hint, there is a special operator used for this)
// Create a function called PassByValue that accepts an integer argument.
// Inside PassByValue, output a text string indicating the name of the function you are in.
// Call PassByValue and pass in num1 as the argument.
// Modify the value of num1 inside the PassByValue function and output the new value to the console window.
// After the call returns to main(), output the value of num1 to the console window again.
// Create a function called PassByRef that accepts a reference variable as an argument
// Call PassByRef and send pNum as the argument.
// Output a statement indicating the current function name.
// Modify the value of pNum, setting it to 50,  and output the value to the console.
// After the call returns to main(), output the value of pNum to the console.
// Call PassByValue and pass in pNum as an argument.
// Document any error messages for the lab assessment that might occur during your lab.
// Create a pointer variable to a double, and allocate memory for it using the new keyword.
// Assign a value to the memory location.
// Use the dereference operator, get the value and output it to the console.
// Deallocate the memory for that variable.
// Output the value stored in the memory location for that variable again.
// Document any errors experienced for the lab assessment.
// Create a simple class in your C++ application called Person.
// Give Person member variables for name, age, height, and weight.  Feel free to make these private with public accessors or make them public without accessors.  It is not important for this exercise.
// Create a function in your application called ModifyPerson() that accepts a Person object as an argument.  NOTE: This function should be in the application area and not inside the Person class.
// Instantiate a Person object in your main() method and assign values to the member variables.
// Output the values stored in the member variables to the console window
// Call the ModifyPerson() function, passing in your Person object you just created.
// Inside the ModifyPerson() function, change the value in the name member variable.
// Back in main(), output the values stored in the Person object you created.  Did the name change?  It should have if you passed the object correctly to the function.
// Close Visual Studio and take the lab assessment