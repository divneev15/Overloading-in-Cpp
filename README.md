# 🚀 Overloading in C++

## 🎯 Aim

To study and implement **constructor overloading**, **function overloading**, and **operator overloading** in C++, demonstrating how the same function/operator can exhibit different behaviors based on context.

---

## 🧰 Software Used

* **IDE**: Visual Studio Code
  
---

## 📚 Theory

### ➤ What is Overloading?

**Overloading** allows you to define **multiple functions or operators with the same name** but different **parameter lists** or **operand types**. It is a form of **compile-time polymorphism (static polymorphism)** in C++.

---

## 1️⃣ Constructor Overloading

### ✅ Overview:

Allows a class to have **multiple constructors** with different parameter sets to initialize objects in various ways.

### 🧠 Key Points:

* Constructors must have the **same name as the class**.
* Must differ in **number** or **types** of parameters.
* Helps ensure objects are **properly initialized**.

---

## 2️⃣ Function Overloading

### ✅ Overview:

Same function name used with different **parameter types or counts** within the same scope.

### 🧠 Key Points:

* Functions must differ by **parameter list** (not just return type).
* Resolved at **compile time**.

---

## 3️⃣ Operator Overloading

### ✅ Overview:

Customizes how operators like `+`, `-`, `*`, `==`, `<<`, etc. work with **user-defined classes**.

### 🧠 Key Points:

* Defined using the `operator` keyword.
* Can be member or friend functions.
* At least **one operand** must be a **user-defined type**.

---

## 🧩 Algorithms & Sample Outputs

---

### 🔹 Constructor Overloading – `Add` Class

#### 📜 Algorithm:

```cpp
1. Define class Add with private data members: intResult, floatResult.
2. Create 3 overloaded constructors:
    a. Add(int, int): Adds two integers.
    b. Add(float, float): Adds two floats.
    c. Add(int, int, int): Adds three integers.
3. Define displayResults() to print the result.
4. In main():
    a. Create objects using each constructor.
    b. Call displayResults().
```

#### 🖥️ Sample Output:

```
Sum of integers: 15
Sum of floats: 11.3
Sum of three integers: 60
```

---

### 🔹 Constructor Overloading – `Volume` Class (Cuboid and Cube)

#### 📜 Algorithm:

```cpp
1. Define a class Volume.

2. Inside the class, define two overloaded constructors:
   a. Volume(float l, float b, float h)
      - Calculates volume of a cuboid: vol = l * b * h
      - Display the result.
   
   b. Volume(float s)
      - Calculates volume of a cube: vol1 = s * s * s
      - Display the result.

3. In the main() function:
   a. Create an object v1 using 3 float values → calls the cuboid constructor.
   b. Create an object v2 using 1 integer value → calls the cube constructor.
```

#### 🖥️ Sample Output:

```
the volume of the cuboid is : 19.5

The volume of cube is : 125
```

---

### 🔹 Operator Overloading – `Complex` Class

#### 📜 Algorithm:

```cpp
1. Define class Complex with real and imag as private members.
2. Constructor to initialize values.
3. Overload + operator to add two Complex objects.
4. Define print() to display complex number.
5. In main():
    a. Create two Complex objects.
    b. Add using overloaded +.
    c. Display result.
```

#### 🖥️ Sample Output:

```
First Complex Number: 3 + 2i
Second Complex Number: 1 + 7i
Sum: 4 + 9i
```

---

### 🔹 Operator Overloading – `Box` Class (`+` and `-` Operators)

#### 📜 Algorithm:

```cpp
1. Start

2. Define a class named Box:
   a. Declare private data members:
      - double length
      - double width
      - double height

3. Define a constructor:
   a. Accepts three parameters (l, w, h) with default values as 0.
   b. Initialize length = l, width = w, height = h

4. Overload the '+' operator:
   a. Define operator+() as a member function.
   b. Accept another Box object as parameter (const reference).
   c. Create a new Box object 'result'.
   d. Add corresponding dimensions:
      - result.length = this->length + otherBox.length
      - result.width  = this->width + otherBox.width
      - result.height = this->height + otherBox.height
   e. Return the 'result' Box object.

5. Overload the '-' operator:
   a. Define operator-() as a member function.
   b. Accept another Box object as parameter (const reference).
   c. Create a new Box object 'result'.
   d. Subtract corresponding dimensions:
      - result.length = this->length - otherBox.length
      - result.width  = this->width - otherBox.width
      - result.height = this->height - otherBox.height
   e. Return the 'result' Box object.

6. Define a member function display():
   a. Print length, width, and height.

7. In main():
   a. Create two Box objects:
      - box1(5, 5, 2)
      - box2(2, 4, 1)

   b. Display box1 and box2 dimensions.

   c. Add boxes using:
      - totalBox1 = box1 + box2

   d. Subtract boxes using:
      - totalBox2 = box1 - box2

   e. Display dimensions of totalBox1 and totalBox2

8. End

```

#### 🖥️ Sample Output:

```
Box 1: Length: 5, Width: 5, Height: 2
Box 2: Length: 2, Width: 4, Height: 1
Total Box (box1 + box2): Length: 7, Width: 9, Height: 3
Total Box (box1 - box2): Length: 3, Width: 1, Height: 1
```

---

## ✅ Conclusion

This experiment clearly demonstrates the utility of overloading in C++:

### ✳️ Constructor Overloading:

* Provides **flexibility** in object creation.
* Reduces the need for **manual initialization**.

### ✳️ Function Overloading:

* Promotes **code reusability** and **readability**.
* Allows the same function to handle **multiple data types**.

### ✳️ Operator Overloading:

* Allows **custom behavior** for operators with user-defined types.
* Makes class usage **intuitive and natural**.

Overloading is a core concept in C++ that enhances **polymorphism**, supports **maintainable code**, and enables **clean abstraction** in object-oriented programming.

---

