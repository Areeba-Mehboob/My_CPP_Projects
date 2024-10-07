
#include <iostream>
#include <cstdlib> // For rand()
#include <algorithm> // For sort
#include <ctime> // For time
#include<array> 
using namespace std;
void populate_array(int *array, int N);
// this initializes an array of size N with random values.
void print_array(int *array, int N);
// this function prints the entire array.
void sort (int *array, int N);
//sort the elements of array
bool find (int *array, int x,int N);
//find the element in the array

int main() {
    int size;
    int value_to_find;
    // Write C++ code here
    cout << "Enter the number of elements: ";
    cin >> size;
    int *array = new int[size];
    populate_array(array, size);
    print_array(array, size);
    sort (array, size);
    cout << "Enter the element to find: ";
    cin >> value_to_find;
     if (find(array, value_to_find, size)) {
        cout << "Value " << value_to_find << " found in the array." << endl;
    } else {
        cout << "Value " << value_to_find << " not found in the array." << endl;
    }
    return 0;
}
void populate_array(int *array, int N){
    int i;
   for(i=0; i<N; i++) {
       array[i]=rand()%100;
   }
}
void print_array(int *array, int N){
    int i;
    for(i=0; i<N; i++) {
        cout<<"The "<<i<<" element of array is "<<array[i]<<endl;
   }
}
void sort (int *array, int N){
   sort(array,array+N);
   cout<<"/n/n Array after sorting is: ";
   int i;
   for(i=0; i<N; i++) {
        cout<<array[i]<<" ";
   }
   cout<<endl;
}

bool find (int *array, int x, int N){
    int i;
   for (int i = 0; i < N; i++) { 
        if (array[i] == x) {
            return true; // Value found
        }
    }
    return false; // Value not found
}

