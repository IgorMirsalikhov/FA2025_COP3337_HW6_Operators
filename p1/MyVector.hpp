#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <iostream>

template <typename T>
class MyVector {
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector& other);
    int getCapacity() const { return capacity; }
    void push_back(const T& value); 
    T pop_back(void); 
    void print() const;
    T& at(int index);
    void clear();
    int getSize() const;
    void push_front(const T& value);
    void insert(int pos, const T& value);
    void erase(int index); 
    void remove_dups();

    // Operators
    bool operator==(const MyVector& other) const;
    bool operator!=(const MyVector& other) const;
    bool operator>(const MyVector& other) const;
    bool operator<(const MyVector& other) const;
    bool operator<=(const MyVector& other) const;
    bool operator>=(const MyVector& other) const;

    MyVector<T> operator+(const MyVector& other) const;
    void operator=(const MyVector& other);
    
    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, MyVector<U>& v);

private:
    void allocate_memory(int memory_size);

    T *elements;
    int size;
    int capacity;
};

#endif
