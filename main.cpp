#include <iostream>
#include <string>

// Template class definition
template <typename T>
class Box {
private:
    T content;

public:
    // Constructor
    Box(T c) : content(c) {}

    // Method to get the content
    T getContent() const {
        return content;
    }

    // Method to set the content
    void setContent(T c) {
        content = c;
    }

    // Overloading << operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Box<T>& box) {
        os << "Box content: " << box.content;
        return os;
    }
};

int main() {
    // Creating a Box of int
    Box<int> intBox(123);
    std::cout << intBox << std::endl;

    // Creating a Box of double
    Box<double> doubleBox(456.78);
    std::cout << doubleBox << std::endl;

    // Creating a Box of string
    Box<std::string> stringBox("Hello, World!");
    std::cout << stringBox << std::endl;

    // Modifying content of the string box
    stringBox.setContent("C++ Templates are powerful!");
    std::cout << stringBox << std::endl;

    return 0;
}
