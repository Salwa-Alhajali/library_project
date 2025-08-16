#include <iostream>
//#include <string>
using namespace std;
bool aveabel=true;
string books_info[3][10]={
        {"Beyond the Stars", "Code of Shadows","Whispers of the Mind","The Silent Ocean","null","null","null","null","null","null"},
        { "Beyond the Stars","Sophia Bennett","Liam Carter","Emma Reynolds","null","null","null","null","null","null"},
        {"101","102","103","104","null","null","null","null","null","null"}
    };
string Book,author,ID;
int column,count=0;
string choice;
int add(string Book){
        for(int i=0;i<10;i++){
        if (books_info[0][i]=="null"){
           books_info[0][i]=Book;
           cout <<"Enter the author's name\n";
           cin >>author;
           books_info[1][i]=author;
           cout<<"Enter the book ID\n";
           cin>>ID;
           books_info[2][i]=ID;
           cout <<"It has been entered successfully\n";
           break;
        }
        

    }return 0;}
    //*******************
    void Display(){
        for (int i=0 ;i<10;i++){
            if (books_info[0][i]!="null"){
            cout<<"Author Name:\n"<<books_info[0][i]<<endl;
            cout<<"Book Title:\n"<<books_info[1][i]<<endl;
            cout<<"Book ID: \n"<<books_info[2][i]<<endl<<endl;
            }}
        }
        
    
    //***********************
    void Search( string Book,int column){
    for (int i=0;i<10;i++){
        if (Book==books_info[column][i]){
            cout<<"Author Name:\n"<<books_info[0][i]<<endl;
            cout<<"Book Title:\n"<<books_info[1][i]<<endl;
            cout<<"Book ID: \n"<<books_info[2][i]<<endl;
            break;
        }
        else {
            cout <<"Sorry, the book is not available in the library.\n";
         break;
        aveabel=false;
        }
    }
    }
   
    //**********
    int Delete(string Book){
        for (int i=0;i<10;i++){
        if (Book==books_info[2][i]){
            books_info[0][i]="null";
            books_info[1][i]="null";
            books_info[2][i]="null";
            cout <<"*The book deleted successfully* ";
            cout <<"\n===============================";
             break;
        }
        else {cout <<"Sorry, the book is not available in the library.\n";
            cout <<"\n===============================";

      break;  } 
    } return 0;
}
//*************
int Update(string Book){
       
        for(int i=0;i<10;i++){
        if (books_info[2][i]==ID){
             cout <<"enter the new book name\n";
           cin>>Book;
             books_info[1][i]=Book;
           cout <<"Enter the author's name\n";
           cin >>author;
           books_info[0][i]=author;
           cout <<"It has been entered successfully\n";
           cout <<"\n===============================";

           break; 
        }
    else {
        cout << "Sorry, the book is not available in the library.\n";
        cout <<"\n===============================";
        break;
        
    }
}return 0;}
    //**************
    int  Count(){
        for (int i=0 ;i<10;i++){
            if (books_info[0][i]!="null"){
                count++;
        }
    }return 0;
        
    }
//******************** *
int main(){
   cout<<"===============================\n";
    cout<<"Welcome to the Library\n===============================";
    do{

cout <<"\n1. Add a new book";
cout <<"\n2. Display all books";
cout <<"\n3. Search for a book by ID";
cout <<"\n4. Search for a book by Title";
cout <<"\n5. Delete a book";
cout <<"\n6. Update book information";
cout <<"\n7. Count total number of books";
cout <<"\n8. Exit";
cout <<"\n===============================";
cout <<"\nPlease enter your choice (1-8):"<<endl;
cin>>choice;

 if (choice=="1"){
cout <<"Enter the book title\n";
cin >>Book;
add(Book);
}
else if (choice=="2"){
    cout <<"\n ****************\n";
   cout<<"the books in the library\n";
   cout<<" ******************\n";
    Display();
}
else if (choice=="3"){
    cout << "Enter the book ID to search for:\n";
    cin>>ID;
    column=2;
    Search( ID, column);
}
else if (choice=="4"){
    cout <<"Enter the book title to search for:\n";
    cin >>Book;
    column=0;
     Search(Book,column);
}else if (choice=="5"){
    cout <<"Enter the book title to search for:\n";
    cin >>Book;
    Delete(Book);
}
else if (choice=="6"){
   
     cout<<"Enter the book ID you wont to chang\n";
           cin>>ID; 
           Update(Book);
            
}
else if (choice=="7"){
   Count();
cout <<count<<"-books"<<endl;
}

else{
    cout << "Invalid choice, please enter a number between 1 and 8.\n";
}
}
while (choice!="8");
return 0;

}

