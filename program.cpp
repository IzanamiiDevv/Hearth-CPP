#include<iostream>

using namespace std;

void hearth(int size){
    std::cout << "Result:" << std::endl;
    std::cout << "---------------------" << std::endl;
    int n = size%2 ==0?size:size+1;
    std::cout << "---------------------" << std::endl;
}

int main(){
    int size;
    std::cin >> size;
    hearth(size); 
    return 0;
}