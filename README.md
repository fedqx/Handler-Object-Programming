# Handler-Object-Programming
HOP is a way to mix object-oriented programming and functional programming.
## How does it work?
In functional programming, we program (nearly) everything with functions!
In Object-oriented programming, we program (nearly) everything with objects!
In Handler Object Programming we program (nearly) everything with functions that take object parameters!
Wanna see in action ?
***************************************************************************************************
```cpp
bool test(sturct Player *p) // You can use it with classes to!
{
// do stuff
}
```
***************************************************************************************************
Now, you might say "Why do we need this ?" and the answer is : you dont ;)
The HOP is not a libray nor a framework:
## It is an Idea
Its made for programmers who cant decide wheter use fp or oop 
***************************************************************************************************
You can find exemples in exemple.cpp
## Some rules with HOP
- Functions will take only 1 parameter(Object) more is not allowed
- Functions must have a error-checking system wheter its return value or [other](https://github.com/fedqx/BFU-GL-cpp-Framework) error checking system
- Using class function is not allowed (Constuctor and Destructor is a Exeption).
e.g:
***************************************************************************************************
```cpp
bool test(Player *p) 
{
p.Player(); // ok
p.~Player(); //ok
p.initplayer() // Not allowed ! >:(

}
```
***************************************************************************************************
And last one : These are not laws, these rules are for proper use of the HOP so dont worry that much ;)
