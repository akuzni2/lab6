//
// Created by Alex Kuznicki on 3/20/18.
//

#include "Heap.h"
#include <iostream>

using namespace std;

//constructor
template<class T>
Heap<T>::Heap() { }

template<class T>
void Heap<T>::deleteMin() {
    if (data.size() != 0){

        data[0] = data[data.size() - 1];
        bubbleDown(0);
    }
}

template <class T>
istream &operator>>(ifstream & inObject, Heap<T> & heap) {

    //TODO read input from inFile to Heap object
    T a;
    while(inObject >> a){
        heap.insert(a);
    }

    return inObject;
}

template <class T>
ostream &operator<<(ofstream & outObject, const Heap<T> & heap) {

    //print out members of heap
    heap.printAll();
    return outObject;
}

//TODO prints all members of vector
template<class T>
void Heap<T>::printAll() const {
    for (int i = 0; i<data.size(); i++){
        cout<<data[i]<<" ";
        }
}

//function for get parent
int getParentIndex(int childIndex){
    return (childIndex -1)/2;
}

//get left child
int getLeftChildIndex(int parentIndex){
    return 2* parentIndex + 1;
}

//get right child
int getRightChildIndex(int parentIndex){
    return 2* parentIndex + 2;
}

template<class T>
void Heap<T>::insert(T value) {

    //inserts at back end of vector
    data.push_back(value);
    //positions element in correct spot in heap
    bubbleUp(static_cast<int>(data.size() - 1));

}

//this function will take the inserted value
//at the end of the array and move it up in the heap till its in correct spot
template<class T>
void Heap<T>::bubbleUp(int insertedIndex) {
    //pass in the index to the last element of the vector i.e. vector.size() -1
    int parentIndex;

    while(insertedIndex != 0){
        parentIndex = getParentIndex(insertedIndex);
        if(data[parentIndex] > data[insertedIndex]){
            swap(parentIndex, insertedIndex);
            insertedIndex = parentIndex;
        }
    }
}

template<class T>
void Heap<T>::bubbleDown(int index) {

    while(hasLeftChild(index)){
        int childIndex = findSmallerChild(index);
        if (data[childIndex] < data[index]){
            swap(childIndex, index);
            bubbleDown(index);
        } else break;
    }
}

template<class T>
bool Heap<T>::hasLeftChild(int index) {

    int childIndex = getLeftChildIndex(index);
    return childIndex < data.size();
}

template<class T>
int Heap<T>::findSmallerChild(int parentIndex) {
    int right = getRightChildIndex(parentIndex);
    int left = getLeftChildIndex(parentIndex);
    return (data[right] > data[left]) ? left : right;
 }

template<class T>
void Heap<T>::swap(int index1, int index2) {
    T temp = data[index1];
    data[index1] = data[index2];
    data[index2] = temp;
}








