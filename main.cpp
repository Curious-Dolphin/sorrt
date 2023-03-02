#include <array>
#include <iostream>

#define MAX 6

void bubbleSort(std::array<int, MAX>& input){
    for(auto ex_it = input.begin(); ex_it!= input.end(); ex_it++){
        for (auto it = input.begin(); it!= input.end(); it++){
            if(*it> *(it+1)){
                *it= *it+ *(it+1);
                *(it+1) = *it- *(it+1);
                *it = *it - *(it+1);
            }
        }
    }
}

void selectionSort(){
    
}


int main(){
    std::array<int, MAX> prova{2,4,1,6,7,7};
    bubbleSort(prova);
        for (auto i : prova){
        std::cout << i  << "\n";
    }    

    return 0;
}