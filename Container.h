#ifndef Container_h
#define Container_h

#include <cassert>

template <class T>
class Container
{
public:
    Container():
        m_length(0), m_data(nullptr)
    {
    }
    
    Container(int length):
        m_length(length)
    {
        assert(length >= 0);
        
        if (length > 0)
            m_data = new T[length];
        else
            m_data = nullptr;
    }
    
    ~Container()
    {
        delete[] m_data;
    }
    
    void insert(T value, int where)
    {
        assert(where >= 0 && where <= m_length);
        
        int *data = new int[m_length + 1];
        
        for (int before = 0; before < where; ++before)
            data[before] = m_data[before];
        
        data[where] = value;
        
        for (int after = where; after < m_length; ++after)
            data[after + 1] = m_data[after];
        
        delete[] m_data;
        m_data = data;
        ++ m_length;
    }
    
    void insertAtBeginning(T value);
    
    void insertAtEnd(T value);
    
    void erase(int where)
    {
        assert(where >= 0 && where < m_length);
        
        if (m_length == 1)
        {
            clear();
            return;
        }
        
        int *data = new int[m_length - 1];
        
        for (int before = 0; before < where; ++before)
            data[before] = m_data[before];
        
        for (int after = where + 1; after < m_length; ++after)
            data[after - 1] = m_data[after];
        
        delete[] m_data;
        m_data = data;
        -- m_length;
    }
    
    void eraseAtBeginning();
    
    void eraseAtEnd();
    
    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        
        return m_data[index];
    }
    
    T& getValueAtBeginning()
    {
        assert (m_length > 0);
        
        return m_data[0];
    }
    
    T& getValueAtEnd()
    {
        assert (m_length > 0);
        
        return m_data[m_length - 1];
    }
    
    int getLength()
    {
        return m_length;
    }
    
    bool isEmpty()
    {
        return (getLength() == 0);
    }
    
    void swap(Container<T>& container) //реализовать
    {
        std::cout << "swapTEST length = " << container.getLength() << "\n";
    }
    
    void reverse()
    {
        if (m_length > 1)
        {
            int *data = new int[m_length];
            for (int i = 0; i < m_length; ++i)
                data[i] = m_data[m_length - 1 - i];
            
            delete[] m_data;
            m_data = data;
        }
    }
    
    void clear()
    {
        delete[] m_data;
        
        m_data = nullptr;
        m_length = 0;
    }
    
private:
    int m_length;
    T *m_data;
 
};

template <typename T>
void Container<T>::insertAtBeginning(T value) { insert(value, 0); }

template <typename T>
void Container<T>::insertAtEnd(T value) { insert(value, m_length); }

template <typename T>
void Container<T>::eraseAtBeginning() { erase(0); }

template <typename T>
void Container<T>::eraseAtEnd() { erase(m_length - 1); }

#endif
