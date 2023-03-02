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

void selectionSort(std::array<int, MAX>& input){
    for(auto ex_it = input.begin(); ex_it!= input.end(); ex_it++){
        auto min = ex_it;
        for (auto it = ex_it+1; it!= input.end(); it++){
            if(*it< *ex_it){
                min = it;
            }
        }
        if (*ex_it != *min) {
            *ex_it= *ex_it+ *min;
            *min = *ex_it- *min;
            *ex_it = *ex_it - *min;
        }

    }
}
    



int main(){
    std::array<int, MAX> prova{2,4,1,6,7,6};
    selectionSort(prova);
        for (auto i : prova){
        std::cout << i  << "\n";
    }    

    return 0;
}