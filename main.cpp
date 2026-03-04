#include <iostream>
#include "biList.h"

int main() {
    BiList<char>* head = nullptr;

    try {
        char arr[] = {'A', 'B', 'C', 'D'};
        int count = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < count; ++i) {
            head = add_back(head, arr[i]);
        }

        std::cout << "Содержимое списка: ";
        show_list(head);

    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        return 1;
    }

    head = clear_all(head);

    return 0;
}
