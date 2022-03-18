# projOOP

```c++
#include "Vector.h"



Vector::Vector(const Value* rawArray, const size_t size, float coef){
    _size = size;
    _data = new Value[_size];
    for(size_t i = 0; i < size; i++){
        _data[i] = rawArray[i];
    }
    _multiplicativeCoef = static_cast<size_t>(coef);
}

Vector::~Vector(){
    delete [] _data;
}

void Vector::pushBack(const Value& value){
    reserve(_size + 1);
    _size++;
    _data[_size - 1] = value;
}

void Vector::popBack(){
    _size--;
}

void Vector::popFront(){
    for(size_t i = 1; i < _size; i++){
        _data[i - 1] = _data[i];
    }
    _size--;
}

void Vector::reserve(size_t capacity){
    if(capacity > _capacity || _data == nullptr){        
        _capacity *= static_cast<size_t>(_multiplicativeCoef);
        Value* tmp = new Value[capacity];
        for(size_t i = 0; i < _size; i++){
            tmp[i] = _data[i];
        }
        _data = new Value[_capacity];
        for(size_t i = 0; i < _size; i++){
            _data[i] = tmp[i];
        }
        delete[] tmp;
    }
}

size_t Vector::size() const{
    return _size;
}

size_t Vector::capacity() const{
    return _capacity;
}

double Vector::loadFactor() const{
    return static_cast<double>(_size) / _capacity;
}

Value& Vector::operator[](size_t idx){
    return _data[idx];
}

const Value& Vector::operator[](size_t idx) const{
    return _data[idx];
}


void Vector::erase(size_t pos, size_t count){
    if(pos + count > _size){
        for(size_t i = _size - pos; i > 0; i--){
            popBack();
        }
    }
    else{
        for(size_t c = 0; c < count; c++){
            for(size_t i = pos + 1; i < _size; i++){
                _data[i - 1] = _data[i];
            }
            _size--;
        }
    }
}


void Vector::eraseBetween(size_t beginPos, size_t endPos){
    erase(beginPos, endPos - beginPos);
}


long long Vector::find(const Value& value) const{
    for(long long i = 0; i < _size; i++){
        if(_data[i] == value){
            return i;
        }
    }
    return -1;
}
```
