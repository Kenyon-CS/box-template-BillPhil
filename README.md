# BoxTemplate
A simple template for storing values of different types.

# Notes:
1. Template Declaration:
  - The `template <typename T>` line declares that the Box class is a template class that can work with any type T.
2. Class Definition:
  - `Box` is defined to store a single piece of data of type `T` (which could be `int`, `double`, `std::string`, etc.).
  - The class includes methods to get and set the content, along with an overloaded `<<` operator for printing the content.
3. Main Function:
  - `Box<int> intBox(123);` creates a Box object that holds an int.
  - `Box<double> doubleBox(456.78);` creates a Box object that holds a double.
  - `Box<std::string> stringBox("Hello, World!");` creates a Box object that holds a std::string.
  - The program demonstrates how the same `Box` template can be used for different data types without rewriting the class.

#Advantages of Using Templates:
  - **Code Reusability**: Templates allow you to write generic code that works with any data type, reducing code duplication.
  - **Type Safety**: The compiler ensures that the correct types are used, preventing type errors.
  - **Flexibility**: Templates provide a way to create classes and functions that can work with any type, including user-defined types.
