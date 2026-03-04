#ifndef BILIST_H
#define BILIST_H

#include <iostream>

template< class T >
struct BiList {
    T data;             // T должен иметь конструктор по умолчанию
    BiList<T>* next;
    BiList<T>* prev;
};
