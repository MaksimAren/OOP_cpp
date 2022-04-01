#ifndef Array_h
#define Array_h

#include <cassert>

template <class T>
class Array
{
private:
    int m_length;
    T *m_data;
    
public:
    Array():
        m_length(0), m_data(nullptr)
    {
    }
    
    Array(int length):
        m_length(length)
    {
        assert(length >= 0);
        
        if (length > 0)
            m_data = new T[length];
        else
            m_data = nullptr;
    }
    
    ~Array()
    {
        delete[] m_data;
    }
    
    void erase()
    {
        delete[] m_data;
        
        m_data = nullptr;
        m_length = 0;
    }
    
    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
    
    int getLength();
    
};

template <typename T>
int Array<T>::getLength() {return m_length;}

#endif
