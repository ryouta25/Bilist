#ifndef BILIST_H
#define BILIST_H

#include <iostream>

template< class T >
struct BiList {
    T data;             // T должен иметь конструктор по умолчанию
    BiList<T>* next;
    BiList<T>* prev;
};

template< class T >
BiList<T>* add_front(BiList<T>* head, const T& val) {
    BiList<T>* newNode = new BiList<T>;
    newNode->data = val; // T должен поддерживать оператор присваивания
    newNode->prev = nullptr;
    newNode->next = head;

    if (head) {
        head->prev = newNode;
    }
    return newNode;
}

template< class T >
BiList<T>* add_back(BiList<T>* head, const T& val) {
    BiList<T>* newNode = new BiList<T>;
    newNode->data = val; // T должен поддерживать оператор присваивания
    newNode->next = nullptr;

    if (!head) {
        newNode->prev = nullptr;
        return newNode;
    }

    BiList<T>* current = head;
    while (current->next) current = current->next;

    current->next = newNode;
    newNode->prev = current;

    return head;
}
