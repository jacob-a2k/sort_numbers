        // Program sortuje liczby

#include <iostream>

using namespace std;

int draw();
void insert_to_tab(int tab[]);
void display(int tab[]);
void bubble_sort(int tab[]);
void sorting_program();

int main()
{
    sorting_program();

}
int draw(){
    int number = rand()%10 +1;
    return number;
}
void insert_to_tab(int tab[]){
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        tab[i] = draw();
    }
}
void display(int tab[]){
    for(int i = 0; i < 10; i++){
        cout << "Liczba " << i+1 << ". " << tab[i] << endl;
    }
}
void bubble_sort(int tab[]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            int temp = tab[j];
            if(tab[j] > tab[j+1]){
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}
void sorting_program(){
    int tab[10];
    insert_to_tab(tab);
    display(tab);
    bubble_sort(tab);
    cout << endl;
    display(tab);
}
