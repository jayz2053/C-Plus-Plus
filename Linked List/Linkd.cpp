#include <iostream>
#include <cstdlib>
#include "Linkd.h"
using namespace std;

//empty constructor
template <class T>
LinkdList<T>::LinkdList(){
  size = 0;
  head = NULL;
  tail = NULL;
}

//constructors for a single node
template <class T>
LinkdList<T>::LinkdList(T){
  size = 1;
  head = new node()
}

//method for removing nodes at the end of the list
template <class T>
void LinkdList<T>::pop_back(){

  //check for empty list nothing to pop
  if(size == 0)
    return;

  //otherwise get the node previous to the tail
  //and shift the address of tail
  node<T> temp = tail->previous;
  temp->next = NULL;
  delete tail;
  tail = temp;
  size--;
}

//method for removing node at the front of the list
template <class T>
void LinkdList<T>::pop_front(){

  //check for empty list nothing to pop
  if(size == 0)
    return;

  //other wise get the second node in the list
  //and shift the address of head
  node<T> temp = head->next;
  temp->previous = NULL;
  delete head;
  head = temp;
  size--;

}

//method for removing an item in the middle of the list
template <class T>
void LinkdList<T>::remove_at(int index){

  //bounds check
  if(index > size -1){
    cout << "index out of bounds";
    return;
  }

  node<T> temp = head;

  //step through loop until we reach the index
  for(int i = 0; i < index; i++ ){
    temp = temp->next;
  }

  //update the links between the next and previous nodes
  temp->previous->next = temp->next;
  temp->next->previous = temp->previous;

  delete temp;

}

template <class T>
void LinkdList<T>::insert(T value, int index){

}

template <class T>
void LinkdList<T>::push_front(T value){

}

template <class T>
void LinkdList<T>::push_back(T value){

}

template <class T>
T LinkdList<T>::get_front(){

}

template <class T>
T LinkdList<T>::get_back(){
}

template <class T>
T LinkdList<T>::get_at(int index){

}

template <class T>
LinkdList<T>::~LinkdList(){

}
