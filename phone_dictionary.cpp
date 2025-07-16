/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Contact
{
    int id;
    string name, nickname, phone, email, relation;
    public:
    void input()
    {
        cout << "Enter ID  ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, name);

        cout << "Enter nickname : ";
        getline(cin, nickname);

        cout << "Enter Phone number : ";
        getline(cin, phone);

        cout << "Enter Email : ";
        getline(cin, email);

        cout << "Enter Relation : ";
        getline(cin, relation);

    }

    void display()
    const
    {
        cout << "ID : " << id << endl << "Name : " << name << endl << "Nickname : " << nickname << endl <<"Phone number : " << endl << "Email : " << email << endl << "Relatiion : " << relation << endl;
    }

    int getID()
    const{return id;}

    void save(ofstream & out)
    const
    {
        out << id << endl << name << endl << nickname << endl << phone << endl << email << endl << relation << endl;
    }

    bool load(istream & in)
    {
        if(!(in >> id)) return false;

        in.ignore();
        getline(in, name);
        getline(in, nickname);
        getline(in, phone);
        getline(in, email);
        getline(in,relation);
        return true;
    }
};

void addContact()
{
    ofstream out ("contacts.txt", ios::app);
    Contact c;
    c.input();
    c.save(out);
    out.close();
    cout << "Contact saved." << endl;
}

void showContacts()
{
    ifstream in("contacts.txt");
    Contact c;
    while(c.load(in))
    {
        c.display();
    }
    in.close();
}

void searchContact(int targetID)
{
    ifstream in("contacts.txt");
    Contact c;
    bool found = false;

    while (c.load(in))
    {
        if (c.getID() == targetID)
        {
            c.display();
            found = true;
            break;
        }
    }

    in.close();
    if(!found)cout << "Contact not found." << endl;
}

void deleteContact(int targetID)
{
    ifstream in("contacts.txt");
    ofstream out("temp.txt");
    Contact c;
    bool deleted = false;

    while (c.load(in))
    {
        if(c.getID() != targetID)
        {
            c.save(out);
        }
        else
        {
            deleted = true;
        }

     in.close();
     out.close();
     remove("contacts,txt");
     rename("temp.txt", "contacts.txt");

     if(deleted)
      cout << "Contact deleted." << endl;

     else
       cout << "Contact not found." << endl;
    }
}
    

    int main()
    {
        int choice, id;
        do
    {
        cout << "\n--- Phone Dictionary Menu ---\n";
        cout << "1. Add Contact" << endl << "2. Show All Contacts" <<endl << "3. Search Contact" << endl << "4. Delete Contact" << endl << "0. Exit" <<endl;
        cout << "Enter choice.";
        cin >> choice;

        switch(choice)
        {
            case 1:addContact();
            break;
            case 2:showContacts();
            break;
            case 3:cout << "Enter ID to search : ";
            cin >> id;
            searchContact(id);
            break;
            case 4:cout << "Enter ID to delete : ";
            cin >> id;
            deleteContact(id);
            break;
            case 0:cout << "Goodbye!" << endl;
            break;
            default: cout << "Invalid choice." << endl;
        }
    }
    while(choice !=0);
    return 0;
}*/
       
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Contact 
{
    int id;
    string name, nickname, phone, email, relation;
    
    public:
    void input()
    {
        cout << "Enter ID : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter Nickname : ";
        getline(cin, nickname);
        cout << "Enter Phone : ";
        getline(cin, phone);
        cout << "Enter email :" ;
        getline(cin, email);
        cout << "Enter Relation : ";
        getline(cin, relation);
    }

    void display()
    const
    {
        cout << endl << "ID : " << id << endl << "Name : " << name << endl << "Nickname : " << nickname << endl << "Phone :" << phone << endl << "Email : " << email << endl << "Relation : " << relation << endl;
    }

    int getID()
    const{return id;}

    void save(ofstream& out)
    const
    {
        out << id << endl << name << endl << nickname << endl << phone << endl << email << endl << relation << endl;
    }

    bool load(ifstream& in)
    {
        if(!(in>>id)) return false;
        in.ignore();
        getline(in, name);
        getline(in,nickname);
        getline(in,phone);
        getline(in,email);
        getline(in,relation);
        return true;
    }
};

void addContact()
{
    ofstream out("contacts.txt",ios::app);
    Contact c;
    c.input();
    c.save(out);
    out.close();
    cout << "Contact saved." << endl;
}

void showContacts()
{
    ifstream in("contacts.txt");
    Contact c;
    while(c.load(in))
    {
        c.display();
    }
    in.close();
}

void searchContact(int targetID)
{
    ifstream in("contacts.txt");
    Contact c;
    bool found = false;
    while (c.load(in))
    {
        if(c.getID() == targetID)
        {
            c.display();
            found = true;
            break;
        }
    }
    in.close();
    if(!found)
    cout << "Contact not found." << endl;
}

void deleteContact(int targetID)
{
    ifstream in("contacts.txt");
    ofstream out("temp.txt");
    Contact c;
    bool deleted = false;

    while(c.load(in))
    {
        if(c.getID()!= targetID)
        {
            c.save(out);
        }
        else
        {
            deleted = true;
        }
    }

    in.close();
    out.close();
    remove("contacts.txt");
    rename("temp.txt","contacts.txt");

    if(deleted)
    cout << "Contact deleted." << endl;
    else
    cout << "Contact not found." << endl;
}

int main()
{
    int choice, id;
    do
    {
        cout << endl << "--- Phone Dictionary Menu ---" << endl;

        cout << "1. Add Contact" << endl << "2. Show All Contact" << endl << "3. Search Contact" << endl << "4. Delete Contact" << endl << "0. Exit" << endl;
        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1: addContact();
            break;
            case 2: showContacts();
            break;
            case 3: cout << "Enter ID to Search : ";
            cin >> id;
            searchContact(id);
            break;
            case 4: cout << "Enter ID to delete : ";
            cin >> id;
            deleteContact(id);
            break;
            case 0: cout << "Goodbye!" << endl;
            break;

            default: cout << "INVALID CHOICE." << endl;
        }
    }
    while (choice != 0);
    return 0;
}
