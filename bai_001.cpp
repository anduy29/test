#include<iostream>
using namespace std;
class sophuc{
    int a,b;
    public: 
        void getvalue(){
            cout<<"nhap hai so: "<<endl;
            cin>>a>>b;
        }
        sophuc operator+(sophuc ob){
            sophuc t;
            t.a = a+ob.a;
            t.b = b+ob.b;
            return(t);
        }
        sophuc operator-(sophuc ob){
            sophuc t;
            t.a = a-ob.a;
            t.b = b-ob.b;
            return (t);
        }
        void dislay(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        
        
};

int main(){
    sophuc obj1,obj2,result,result1;
    obj1.getvalue();
    obj2.getvalue();

    result = obj1+obj2;
    result1=obj1-obj2;
    cout<<"gia tri nhap vao: "<<endl;
    obj1.dislay();
    obj2.dislay();
    cout<<"ket qua: "<<endl;
    result.dislay();
    result1.dislay();

}