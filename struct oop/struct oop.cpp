// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    string message;

private:

public:
    void HearSomething()
    {
        cout << message << "\n";
    }
};

class Parrot
{
public:
    string name;
    string action;
public:
    void DoSomething()
    {
        cout << action << "\n";
    }
};

class Room
{
public:
    string action;
public:
    void MakeSomething()
    {
        cout << action << "\n";
    }
};

class IPhone
{
public:
    string name;

public:
    void Something(Human who)
    {
        cout << "After that the phone unexpectedly rang\n";
        who.HearSomething();

    }
};

class Music
{
public:
    string name;
    string lyrics;

public:
    void PlaySound()
    {
        cout << "And the music suddenly started playing\n";
        cout << lyrics << "\n";
    }
};


int main()
{
    int x;
    double d;

    Room r;
    r.action = "The doors to the room opened\n";
    r.MakeSomething();

    Parrot p;
    p.name = "Sarah";
    p.action = "Sarah crashed into the window\n";
    p.DoSomething();

    Human h;
    h.name = "Alice";
    h.message = "Surprised Alice entered the room\n";
    h.HearSomething();

    IPhone i;
    i.name = "13 mini";
    i.Something(h);

    Music m;
    m.name = "Circus";
    m.lyrics = "...Welcome to the zone...\n";
    m.PlaySound();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
