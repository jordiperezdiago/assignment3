//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================
#include "List.h" // include the header file needed to use the linked list List class.
#include <string>

// function fillList which takes a string and a char list as argument and fills that list with the chars from the string.
void fillList(std::string input, List<char> & l){
    for ( char c : input )
    {
        l.insertAtBack(c);
    }
}

int main() {

    List<char> l1; //empty linked lists (char)

    List<char> l2;//empty linked lists (char)
    
    fillList("singlylinkedlist",l1); //fill the list instantiated in the main function with strings
    l1.print(); //print the list to the string 

    fillList("abcdefg",l2); //fill the list instantiated in the main function with strings
    l2.print(); //print the list to the string 

    //---------  exercise e)

    List<char> l3; //empty linked lists (char)
    fillList("hijklmnop",l3); //fill the list instantiated in the main function with strings
    l3.print(); //print the list to the string 

    List<char> l4;//empty linked lists (char)
    fillList("qrstuvw",l4); //fill the list instantiated in the main function with strings
    l4.print(); //print the list to the string 

    std::cout << "result exercise e)";
    l2.concatenate(l3);
    l2.print(); //print the list to the string 

    l2.concatenate(l4);
    l2.print(); //print the list to the string 

    return 0;
}
