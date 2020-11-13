//
//  stacq.h
//  stacq
//  Created by Burak  on 12.11.2020.

#ifndef STACQ_H
#define STACQ_H

#include <iostream>
#include <fstream>
#include <vector>

const int max_size = 10; // maximum stacq size

using namespace std;

class stacq {
private:
   int count;          // number of items on the stacq
   vector <int> data;  // vector holding the stacq items
 
public:
   stacq(void);                     // constructor of an empty stacq
   void push(int item);             // push the item into the stacq
   void pop(void);                  // remove the top or front item
   int front(void) const;           // return the front item
   int top(void) const;             // return the top item
   int size(void) const;            // return count
   bool empty(void) const;          // check for empty stacq
   void write(ostream & out) const; // send the stored data to out
};


#endif /* STACQ_H */
