//
// Created by Alex Kuznicki on 3/20/18.
//

#ifndef LAB6HEAPSTUBASSIGNMENT_HEAP_H
#define LAB6HEAPSTUBASSIGNMENT_HEAP_H

#include <iostream> // mostly for debugging purposes
#include <fstream>
#include <vector>
using namespace std;

template <class T>
class Heap {
public:

    Heap(); // constructor
    void insert(T value);
    void deleteMin();
    void printAll() const ;
    friend ostream & operator << (ofstream &, const Heap & );
    friend istream & operator >> (ifstream &, Heap & );

private:

    vector<T> data; // heap vector
    void bubbleUp(int insertedIndex); // used inside insert()
    void bubbleDown(int index); //used inside deleteMin()
    void swap(int index1, int index2);
    bool hasLeftChild(int index); // used in bubbleDown() which is used in deleteMin()
    int findSmallerChild(int index); // used in bubbleDown() which is used in deleteMin()

};




#endif //LAB6HEAPSTUBASSIGNMENT_HEAP_H
