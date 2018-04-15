#include <iostream>
#include <cstdlib>
#include "Linkd.h"
using namespace std;

template <class T>
LinkdList<T>::LinkdList(){
  size = 0;
  head = NULL;
  tail = NULL;
}

template <class T>
LinkdList<T>::LinkdList(T){
  size = 1;
  head = new node()
}

template <class T>
void LinkdList<T>::pop_back(){

}

template <class T>
void LinkdList<T>::pop_front(){

}

template <class T>
void LinkdList<T>::remove_at(){

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
