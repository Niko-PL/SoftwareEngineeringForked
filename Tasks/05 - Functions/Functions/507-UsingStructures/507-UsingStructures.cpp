#include <iostream>
using namespace std;

// Create a new data type Point, made up of existing data types (2 integers and a float)
struct Point {
    int x;
    int y;
    float length;
};

//Function prototypes
void displayPoint(Point p);
float calculateLength(Point p);
Point flipPoint(Point p);
Point addition(Point p1,Point p2);


int main()
{
    //Create two variables of type Point
    Point p1 = { 3, 4, 5.0f };      //Initialised inline
    Point p2;                       //Not initialised
    p2.x = 4;                       //Set the member x to 4
    p2.y = 6;                       //Set the member y to 6
    p2.length = calculateLength(p2);    //Calculate the length of p2, and set the member length to this value

    cout.precision(2);
    cout.setf(cout.fixed);

    Point p3 = addition(p1, p2);    //send them to be added and make p3 
    displayPoint(p1);               // show them all :)
    displayPoint(p2);
    displayPoint(p3);


    /*
    //Display both points
    displayPoint(p1);
    cout << endl;
    displayPoint(p2);
    cout << endl;
    
    //Copy and display
    Point p3 = p1;                  //member-by-member copy
    p1 = { 0 };                     //Set all members of p1 to zero (they are all numerical, so this works)
    
    displayPoint(p1);               //Confirm p1 is zero set to all zeros
    displayPoint(p3);               //Showing that p3 is indepdnent of p1
    cout << endl;
    
    //Fix display precision to 2 decimal places
    cout.precision(2);
    cout.setf(cout.fixed);
    
    //Output the length
    cout << "The length = " << p3.length << endl;

    //Now demonstrate returning a structure
    displayPoint(p3);               //Showing p3
    Point p4 = flipPoint(p3);
    displayPoint(p4);               //Showing p4
    */
}


Point addition(Point p1,Point p2)           //We be adding here
{
    Point Temp;

    int x1Pos = p1.x;                       //adding x's
    int x2Pos = p2.x;
    int Resultx = x1Pos + x2Pos;
    cout << x1Pos, " + ",x2Pos, " = ", Resultx;
    cout << endl;
    Temp.x = Resultx;

    int y1Pos = p1.y;                      //adding y's
    int y2Pos = p2.y;
    int Resulty = y1Pos + y2Pos;
    cout << y1Pos, " + ", y2Pos, " = ", Resulty;
    cout << endl;

    Temp.y = Resulty;
    Temp.length = calculateLength(Temp);
    return Temp;                    // sending it away. Goodbye ;(
}




// Displays a point as an x,y coordinate
void displayPoint(Point p)
{
    int xPos = p.x;
    int yPos = p.y;

    cout << "(" << xPos << "," << yPos << ")";
}

// Calculate and return the distance of p from the origin (0,0)
float calculateLength(Point p)
{
    float h = sqrt(p.x * p.x + p.y * p.y);
    return h;
}

// Return a new structure with the the x and y coordinates swapped
Point flipPoint(Point p)
{
    Point result;
    result.x = p.y;
    result.y = p.x;
    result.length = p.length;
    return result;
}