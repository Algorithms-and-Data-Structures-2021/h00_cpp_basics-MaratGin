#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

//  Задание 1
void swap_args(int *lhs, int *rhs) {

    if  ((lhs!= nullptr)&&(rhs!= nullptr)) {
        int a = *lhs;
        *lhs = *rhs;
        *rhs = a;

    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ((num_rows<1)||(num_cols<1)){
        return nullptr;
    }
    int **array=new int *[num_rows];
    for (int i = 0; i < num_rows; ++i) {
        array[i]=new int[num_cols];

    }
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            array[i][j]=init_value;

        }
    }
    return array;

}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    //if (((num_rows<1)||(num_cols<1))&&!arr_2d_source&&!arr_2d_target){
    //      return false;
    // }
    if (num_rows>0&&num_cols>0&&arr_2d_source&&arr_2d_target){
        for (int i = 0; i < num_rows; ++i) {
            for (int j = 0; j < num_cols; ++j) {
                arr_2d_target[i][j]=arr_2d_source[i][j];
            }

        }


    } else{
        return false;
    }
    return true;

}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int i = 0; i < arr.size()/2; ++i) {
        int a=arr[i];
        arr[i]=arr[arr.size()-i-1];
        arr[arr.size()-i-1]=a;

    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    //
    if((!arr_end) && (!arr_begin)){
        return;
    } else{
        while (arr_end>=arr_begin){
            swap_args(arr_begin, arr_end);
            arr_begin=arr_begin+1;
            arr_end=arr_end-1;

        }
    }
    // напишите код здесь ...
}

// Задание 6
int *find_max_element(int *arr, int size) {
    int *k=arr;
    if ((arr== nullptr)||(size<=0)){
        return nullptr;
    } else{
        for (int i=0;i <size;i++){
            if (*arr>*k){
                k=arr;
            }
            arr=arr+1;
        }

    }


    // напишите код здесь ...
    return k;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int > odd={};
    int d=0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i]%2 !=0){
            //odd[d]=arr[i];
            //d=d+1;
            odd.emplace_back(arr[i]);
        }
    }
    // напишите код здесь ...
    return odd;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    //int k=0;
    vector<int> common={};
    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_b[j] == arr_a[i]){
                //common[k]=arr_a[i];
                //k=k+1;
                common.emplace_back(arr_a[i]);
            }

        }

    }

    // напишите код здесь ...
    return common;
}
