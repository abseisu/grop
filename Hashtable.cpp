/**
 * Hashtable.cpp
 *
 *      Implementation of Hashtable, using chaining.
 *      Interface mostly follows std::unordered_map
 *
 * Alan Weide
 * CPSC 223
 * Spring 2023
 *
 */
#include "Hashtable.h"
#include <iostream>
#include <vector>
#include <functional>

template <class Value>
Hashtable<Value>::Hashtable() : Hashtable(initial_capacity) {}

template <class Value>
Hashtable<Value>::Hashtable(size_t tablesize)
{
    // TODO: Students write code here
}

template <class Value>
Value *Hashtable<Value>::insert(const Key &key, const Value &to_insert)
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return nullptr;
}

template <class Value>
void Hashtable<Value>::expand()
{
    // TODO: Students write code here
}

template <class Value>
Value &Hashtable<Value>::at(const Key &key)
{
    Value *to_return = find(key);
    if (to_return == nullptr)
    {
        throw std::runtime_error("Key not in table");
    }
    return *to_return;
}

template <class Value>
const Value &Hashtable<Value>::at(const Key &key) const
{
    const Value *to_return = find(key);
    if (to_return == nullptr)
    {
        throw std::runtime_error("Key not in table");
    }
    return *to_return;
}

template <class Value>
Value *Hashtable<Value>::find(const Key &key)
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return nullptr;
}

template <class Value>
const Value *Hashtable<Value>::find(const Key &key) const
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return nullptr;
}

template <class Value>
Value &Hashtable<Value>::operator[](const Key &key)
{
    // TODO: Students write code here

    // These lines of code added so starter code compiles;
    // you may modify or remove them when implementing
    Value v;
    return v;
}

template <class Value>
size_t Hashtable<Value>::index_of(const Key &key) const
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return 0;
}

template <class Value>
size_t Hashtable<Value>::size() const
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return 0;
}

template <class Value>
double Hashtable<Value>::load_factor() const
{
    // TODO: Students write code here

    // This line of code added so starter code compiles;
    // you may modify or remove it when implementing
    return 0;
}

// Explicit template specialization for "string"s
template class Hashtable<std::string>;

// Explicit template specialization for "Entry"s
#include "Entry.h"
template class Hashtable<std::vector<Entry>>;
