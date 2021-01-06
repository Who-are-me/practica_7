#pragma once

#include <iostream>

template<typename T>
class TemplateClass {
private:
	int size;
	T* arr_T;
public:
	TemplateClass(int size) {
		this->size = size;
	}

	void setArr() {

		arr_T = new T[size];

		for (int i = 0; i < size; i++) {
			std::cout << "Enter arr[" << i << "] = ";
			std::cin >> arr_T[i];
		}
	}

	void showArr() {

		for (int i = 0; i < size; i++) {
			std::cout << arr_T[i] << " ";
		}
	}

	T avg(int size) {

		T temp = 0;

		for (int i = 0; i < size; i++) {
			temp += arr_T[i];
		}

		return temp / size;
	}

	T amax(int size) {

		T temp = arr_T[0];

		for (int i = 0; i < size; i++) {
			if (arr_T[i] > temp) {
				temp = arr_T[i];
			}
		}

		return temp;
	}

	~TemplateClass() {
		delete arr_T;
	}

};

