#pragma once
#include <iostream>
#include <cstdlib>

template <typename T>
T minimum(size_t _size) {

}
class ArregloInt
{
private:
	size_t m_count = 0;

	int* data;

public:
	size_t count() {
		return m_count;
	}

	ArregloInt(size_t _size) {
		data = (int*)malloc(_size * sizeof(float));
		m_count = _size;

		memset(data, 0, m_count * sizeof(float));
		printInt();
	}

	void setvalInt(size_t index, int value) {
		if (index > m_count) {
			std::cout << "Error: index > arreglo count \n";
			return;
		}
		else {
			*(data + index) = value;
		}
	}

	int getvalInt(size_t index) {
		if (index > m_count) {
			std::cout << "Error: index > arreglo count \n";
			return 0;
		}
		else {
			return *(data + index);
		}
	}

	void printInt() {
		for (int i = 0; i < m_count; i++) {
			printf("[%i] = %E \n", i, getvalInt(i));
		}
	}

	bool SetSizeInt(size_t newSize) {
		void* buffer = malloc(newSize * sizeof(int));

		if (buffer != NULL) {
			memcpy(buffer, data, newSize * sizeof(int));

			data = (int*)buffer;
			m_count = newSize;
			return 1;
		}
		else {
			std::cout << "ERROR no se puede redimensionar arreglo \n";
			return 0;
		}
	}
};
