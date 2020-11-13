//
//  teststacq.cpp
//  stacq
//
//  Created by Burak  on 12.11.2020.
//
#include "stacq.h"

int main(void)
{
    ofstream fout("testStacqOut.txt");
    stacq mystacq;
    char ch;
    int x;
 
    while(true) {
        // print a little menu
        cout << endl << "p = push" << endl;
        cout << "o = pop" << endl;
        cout << "s = size" << endl;
        cout << "d = display" << endl;
        cout << "f = file" << endl;
        cout << "q = quit" << endl << endl;
      
        cin >> ch;
      
        if (ch == 'p') {
            cout << endl << "data to push :";
            cin >> x;
            mystacq.push(x);
        } else if(ch == 'o') {
            if(mystacq.empty()) {
                cout << "stacq is empty" << endl;
            } else {
                if (mystacq.size()%2 == 1) { // count is odd; remove top item like a stack (LIFO)
                    x = mystacq.top();
                }
                else {                       // count is even; remove front item like a queue (FIFO)
                    x = mystacq.front();
                }
                mystacq.pop();
                cout << endl << endl << "data popped : " << x;
            }
        } else if(ch == 's') {
            cout << "size = " << mystacq.size() << endl;
        } else if(ch == 'd') {
            cout << "top-->  ";
            mystacq.write(cout);
            cout << "<--front" << endl;
        } else if(ch == 'f') {
            fout << "top-->  ";
            mystacq.write(fout);
            fout << "<--front" << endl;
        } else if(ch == 'q') {
            break;
        }
    }
   fout.close();
   return 0;
}
