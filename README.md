# Handler-Object-Programming
HOP is a way to mix object-oriented programming and functional programming.
## How does it work?
When defining data/variables, HOP is OOP like. When creating systems/behaviours, HOP is FP like.

Example:
***************************************************************************************************
```cpp
struct Player
{
int health;
bool alive;
}
int x = 100; // allowed
bool test(sturct Player *p) 
{
p->health = x;
}
```
***************************************************************************************************
Note: HOP can be used for both C and C++


Now, you might say "Why do we need this ?" and the answer is : you dont ;)
The HOP is not a libray nor a framework:
## It is an Idea

***************************************************************************************************
You can find exemples in Example.c
## Some rules with HOP
- Functions will take only object parameters 
- Handler dosent need to be class/struct object. it can be any type **as long as It's used as object** e.g: vbo from OpenGL
- Functions must have a error-checking system wheter its return value or [other](https://github.com/fedqx/BFU-GL-cpp-Framework) error checking system
- Using class function is not allowed (Constuctor and Destructor is a Exception).
e.g:
***************************************************************************************************
```cpp
bool test(Player *p) 
{
p->Player(); // ok
p->~Player(); //ok
p->initplayer() // Not allowed ! >:(

}
```
***************************************************************************************************
- Multiple object parameters allowed

And last one: These are not laws, these rules are for the proper use of the HOP so don't worry that much ;)
## Comments
- "a fascinating original idea" -MNZ Creative
- " Looks pretty cool" -[@exezin](https://github.com/exezin)(From her/his YouTube comment)
