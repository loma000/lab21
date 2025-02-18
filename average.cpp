#include <iostream>
 
 
using namespace std;
 

int main(int argc,char* argv[]){
if (argc==1)
{
    cout<< "Please input numbers to find average.";
}else
{
   
float a;
for (int i = 1; i < argc; i++)
{
   a += atof(argv[i]) ;
}
cout<<"---------------------------------"<<endl;
cout << "Average of "<< argc-1 <<" numbers = "<<a/float(argc-1)<<endl;
cout<<"---------------------------------" ;
}



return 0;

}