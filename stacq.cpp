//
//  main.cpp
//  stacq
//
//  Created by Burak  on 12.11.2020.
//

#include "stacq.h"


stacq::stacq(void): data(max_size){
    count=0;
}
void stacq::push(int item){
    if(count< max_size){
        data[count]=item;
        count++;
    }else{
        cout<<"stack is full"<<endl;
    }
}
void stacq::pop(void){
    
    if(count%2==1){
        count--;
    }else{
        for(int i=0;i<count-1;i++){
            data[i]=data[i+1];
        }
        count--;
    }
    
}
int stacq:: front(void)const {
    int x= data[0];
    return x;
    
}
int stacq::top(void)const{
    
    return data[count-1];
}
int stacq::size(void) const{

    return count;
}
bool stacq:: empty(void) const{
return (count ==0);

}
void stacq::write(ostream & out) const{
    int i;
    for(i=count-1; i>=0;i--){
        out<<data[i]<<"  ";
    }

}

