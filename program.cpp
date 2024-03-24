#include<iostream>

using namespace std;

void hearth(int size){
    std::cout << "Result:" << std::endl;
    std::cout << "---------------------" << std::endl;
    int n = size%2 ==0?size:size+1;
    string str = "";
    for(int i = n/2;i<n;i+=2){
        for(int j = 1; j < n - i;j+=2){
            str += " ";
        }
        for(int j = 1; j < i + 1;j++){
            str += "*";
        }
        for(int j = 1; j < n- i + 1;j++){
            str += " ";
        }
        for(int j = 1; j < i + 1;j++){
            str += "*";
        }
        str += "\n";
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n - i;j++){
            str+=" ";
            
        }
        for(int j = 1; j < i*2;j++){
            str+="*";
        }
        str+="\n";
    }
    std::cout << str << std::endl;
    std::cout << "---------------------" << std::endl;
}

int main(){
    int size;
    std::cout << "Write the size og the hearth" << std::endl;
    std::cin >> size;
    hearth(size); 
    return 0;
}