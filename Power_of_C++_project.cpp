/*#include<iostream>
using namespace std;
class Person_information
{
    public:
    string name, city;
    int age;

    void display()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter City : ";
        cin >> city;
    }

    void display1()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "City : " << city << endl;
    }
};

int main()
{
    Person_information P, P1;
    P.display();
    P1.display();
    P.display1();
    P1.display1();

    return 0;
}*/

/*#include<iostream>
using namespace std;
class Person
{
    public:
    string name, city;
    int age;

    public:
    Person(string n, string c, int a)
    {
        name = n;
        city = c;
        age = a;
    }

    friend void display(Person)
};

void display(Person p)
{
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "City : " << p.city << endl;
}

int main()
{
    Person person1("Sumedh", 16, "Nagpur");

    display Person(person1);
    return 0;

}*/

/*#include<iostream>
using namespace std;
class User
{
    public:
    void show()
    {
        cout << "This is a general user." << endl;
    }
};

class Admin:
public User
{
    public:
    void show ()
    {
        cout << "This is an admin user." << endl;
    }
};

int main()
{
    Admin a;
    a.show();

    return 0;
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("sample_file.txt");
    if(outfile.is_open())
    {
        outfile << "Hello World!" << endl;
        outfile << "This is Sumedh Confidential file detail" << endl;
        outfile << "This is a example file of Sumedh." << endl;
        outfile.close();

        cout << "data written to file." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    ifstream infile("sample_file.txt");
    string line;
    if(infile.is_open())
    {
        while(getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname, lastname;

    cout << "Ener first name : ";
    cin >> firstname;
    cout << "Enter last name : ";
    cin >> lastname;
    
    cout << "Length of first name : " << firstname.length() << endl;
    cout << "Length of last name : " << lastname.length() << endl;
    cout << "First leter of first name : " << firstname.at(0) << endl;
    cout << "First letter of last name : " << lastname.at(0) << endl;
    cout << "Substring(first 3 letters of first name) : " << firstname.substr(0,3) << endl;
    cout << "Substring(first 4 letters of last name) : " << lastname.substr(0,4) << endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

double division(float a, float b)
{
    cout << "Enter Divident value : ";
    cin >> a;
    cout << "Enter Divisor value : ";
    cin >> b;

    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a/b);
}

int main()
{
    float a;
    float b;
    double c;

    try 
    {
        c = division(a,b);
        cout << c << endl;
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
    return 0;
}*/

#include<iostream>
using namespace std;

double multiplication(float radius)
{
    cout << "Enter radius : ";
    cin >> radius;

    if(radius < 0)
    {
        throw "Radius can't be negative!";
    }
    return (3.14*radius*radius);
}

int main()
{
    float radius, area;
    
    try
    {
        area = multiplication(radius);
        cout << "Area of the Circle : " << area << endl;
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
    return 0;
}