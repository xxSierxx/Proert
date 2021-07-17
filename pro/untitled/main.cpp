#include <iostream>
#include <fstream>
using namespace std;
int main (int argc, char *argv[])
{

    }
   fstream file;
   file.open(pathToFile);
   char from;
   cout<<"enter zamenyemoy: "<<endl;
    cin>>from;
    char to;
    cout<<"enter zemana: "<<endl;
    cin>>to;
    char ch;
    size_t pos=0;
    if (file.is_open())
    {
       file.unsetf(ios_base::skipws);

         while( file.get(ch) ){
              if (ch==from)
              {
                  file.rdbuf()->pubseekoff(pos, ios::beg, ios::out);
                  file.rdbuf()->sputc(to);
              }
              pos++;
         }
    }
    return 0;
}
