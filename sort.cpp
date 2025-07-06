#include <iostream>
#include <vector>

void print(std::vector<int> vec){
    for(auto elem : vec){
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}

void bubble_sort(std::vector<int>& vec){
    for(int i = 0;i<vec.size()-1;i++){
        for(int j=0;j<vec.size()-1-i;j++){
            if(vec[j]>vec[j+1]) std::swap(vec[j],vec[j+1]);
        }
    }
    return;
}
void selection_sort(std::vector<int>& vec){
    int temp=0;
    for(int i =0 ;i<vec.size()-1;i++){
        temp=i;
        for (int j=i+1;j<vec.size();j++){
            if(vec[temp]>vec[j]) temp=j;
        }
        std::swap(vec[i],vec[temp]);
    }
    return;
}
void insertion_sort(std::vector<int>& vec){
    int temp=0;
    int j=0;
    for(int i =1;i<vec.size();i++){
        temp=vec[i];
        j=i-1;
        while(temp<vec[j]&&j>=0){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=temp;
    }
}
int main(){
    std::vector vec{1,2,336,6,9,4,4,1};
    insertion_sort(vec);
    print(vec);
}