/******************************************************************************
4. Define a class Name_value that holds a string and a value. Rework exercise
19 in Chapter 4 to use a vector<Name_value> instead of two vectors.

19. Write a program where you first enter a set of name-and-value pairs, such
as Joe 17 and Barbara 22. For each pair, add the name to a vector called
names and the number to a vector called scores (in corresponding positions,
so that if names[7]=="Joe" then scores[7]==17). Terminate input
with NoName 0. Check that each name is unique and terminate with an
error message if a name is entered twice. Write out all the (name,score)
pairs, one per line
*******************************************************************************/
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Maharaj
 */

#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	/*vector for the string*/
    std::vector<string> words;
    string names;
    std::cin >> names;
    words.push_back(names);
    
    /*While loop to determine when a name is repeated or when NoName0 is entered*/
    while (std::cin >> names)
    {
        for(int i=0; i<names.size(); i++){
        	
    	/*If a name is repeated an error message appears*/
        if(names==words[i]){
            cout << "error\n";
            cout << "this name was alreday enterd";
            exit(1);
        }
        }
        /*Ends program when NoName0 is entered*/
        words.push_back(names);
        if (names == "NoName0")
        {
            break;
        }
    }
}

