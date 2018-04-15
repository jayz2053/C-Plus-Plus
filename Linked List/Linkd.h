#ifndef LINKD_H
#define LINKD_H
/*******************************************************************************
The humble node is the basis of all data structures. It can can be used with
one or two pointers to make singlely or doublely linked lists. Slight modification
also allows the node the to used in graphs and trees, which are more advanced structures.

The instance variables are public which violates encapsulation; however, the node
is wrapped up in the larger data structure abstracting it away from the user
keeping instance variable allows for easier access via the -> operator
*******************************************************************************/
template<class T>
class node{
  public:
    T value;
    node *next;

    node(T nodeValue){
      value = nodeValue;
      next = NULL;
    }
}

/*******************************************************************************
Linked Lists can be implemented in a variety of different ways. The most basic
of which is the singlely linked and only the location of the head is known. The
most advanced is a doublely linked list where the head and tail is recorded. My
Implementation splits the difference allowing easy access to the front or rear
*******************************************************************************/
template<class T>
class LinkdList{
  private:
    node *head;
    node *tail;
    int size;

  public:
    //constructors
    LinkdList();
    LinkdList(T);

    //methods for removing nodes from the list
    void pop_back();
    void pop_front();
    void remove_at(int);

    //methods for inserting nodes into the list
    void insert(T, int);
    void push_front(T);
    void push_back(T);

    //methods for getting values from the list
    T get_front();
    T get_rear():
    T get_at(int);

    //destructor
    ~LinkdList();
}

#endif
