#include<iostream>
#include<random>
const int DAYANZHISHU = 50;
int GUAXIANG[6];

int f(int x){
    int x_1 = rand() % x;
    int x_2 = x - x_1;
    if(rand() % 2){
        x_2 --;
    }
    else x_1 --;
    x_1 = (x_1 - 1) % 4 + 1;
    x_2 = (x_2 - 1) % 4 + 1;
    return x - 1 - x_1 - x_2;
}


int main(){
    srand(time(0));
    int initial = DAYANZHISHU - 1;
    for(int i = 0; i < 6; i++){
        initial = DAYANZHISHU - 1;
        for(int j = 0; j < 3; j++){
            initial = f(initial);
        }
        GUAXIANG[i] = initial / 4;
    }
    for(int i = 5; i >= 0; i--){
        std::cout << GUAXIANG[i] << " " << i+1 << std::endl;
    }
    return 0;
}