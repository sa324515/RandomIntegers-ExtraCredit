/*
 *        File: array_ec.cc
 *      Author: Sam Adams
 *        Date: March 26, 2019
 * Description: This program generates 20 integers and stores them in an array.
 * The user is then prompted to selected an integer to be searched for,
 * then the location of that integer is outputted. 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
int search (const int randomInteger[], int size, int target); 

int main(int argc, char const *argv[]) {
    int randomInteger[20]; //initializes array to store random integers
    int size = 20;
    int target;
    srand(time(NULL));
    for(size_t i = 0; i < 20; i++) //loop to generate 20 random integers
    {
        randomInteger[i] = rand();
        cout << randomInteger[i] << endl;
    }
    cout << "Enter your target number: ";
    cin >> target; //user input for int to be searched for
    search(randomInteger, size, target); //calls search function
    int location = search(randomInteger, size, target); 
    if(location < 0){ //outputs location or an error if not found
        cout << "Number not found" << endl;
    } else {
        cout << "The location of " << target << " is " << location << endl;
    }

    return 0;
}// main

//sequential search function to search for user input
int search(const int randomInteger[], int size, int target) {
    for (size_t i = 0; i < size; i++) {
        if (target == randomInteger[i])
            return i; 
        }
    return -1;
}