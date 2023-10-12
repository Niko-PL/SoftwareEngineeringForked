/*

    If statements

    Note here that I am using the C++ cout to write to the console. You can use printf if you prefer,
    but I want to start moving towards C++ and away from C where there are advantages

*/

#include <iostream>

// The fuly qualified name for cout is actually std::cout
// :: is known as the "scoping operator" - more on this later
// std is known as a "namespace" - it is a prefix that helps us avoid replicating names
// The standard C++ library uses std:: prefix for many of it's functions
// It is tedious to write this every time, so we make the default namespace std
using namespace std;

int main()
{
    //Some constants 
    const int high = 100, low = 5;

    // start filling the tank 
    int level = cin;

    //Read the keyboad to get the level
    //Repeat until a valid value has been added
    do {
        cout << "Please enter a level (between 0 and 100)" << endl;
        cin >> level;
    } while ((level < 0) || (level > 100)); //Repeat until a valid number is entered


    if (level <= low)                       // check the level
    {
        cout << "Tank needs filling as it is";
        if ((level>= 0)&&(level <=5 ))
        {
            cout << "Dangerously low" << endl;
        }
        else
        {
            cout << "driving and hopes and prayers" << endl;
        }
    }
    else //Ok, it is > low, so do the following.....
    {
        cout << "Tank has sufficient fuel for now. ";
        if ((level >= 6) && (level <= 30))
        {
            cout << " Low Refull asap" << end1;
        }
        else if (level < 100)
        {
            cout << "You could top it up if you wish." << endl;
        }
        else if ((level >= 31) && (level <= 70))
        {
            cout << " Medium " << end1;
        
        else if ((level > 70) && (level <= 99))
        {
            cout << "Ehh n need to refule unless you are going to the moon"
        }

        else
        {
            cout << "It is actually full." << endl;
        }
    }
}
