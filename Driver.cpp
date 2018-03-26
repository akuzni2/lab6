/*
 * Driver.cpp
 *
 *  Created on: Feb 18, 2018
 *      Author: kamilla
 */
#include <vector>
#include <fstream>
#include <iostream>
#include "Heap.h"
using namespace std;

int main()
{// test from the textbook
	ifstream fin;
	fin.open("in.txt");
	ofstream fout;
	fout.open("out.txt");
	Heap<int> h;
//    fin>>h;
//    int item = 31;
//    h.insert(item);
//    fout<<h;
//    fout<<"\n";
//    item = 14;
//    h.insert(item);
//    fout<<h;
//    fout<<"\n";
//    h.deleteMin();
//
//    fout<<h;
//	fin.close();
//	fout.close();
//	// insert 10 random, delete 10 min random,measure CPU time
//	ifstream fin2;
//	fin2.open("in3.txt");
//	ofstream fout2;
//	fout2.open("out3.txt");
//	Heap<int> h2;
//	fin2>>h2;
//	int item2 = 31;
//	h2.insert(item2);
//	fout2<<h2;
//	fout2<<"\n";
//	item2 = 14;
//	h2.insert(item2);
//	fout2<<h2;
//	fout2<<"\n";
//	h2.deleteMin();
//
//	fout2<<h2;
//	fin2.close();
//	fout2.close();
}
