// Written by Unc0ver <ferhrdzalv@hotmail.com> 
// 		
// 23/02/2025
//
// See licence.txt for licencing information

#pragma once

// The BEST sorting algorithm ever created!
template <typename T>
void KennenSort(T* list, size_t size_of_list)
{
	int a, b = 0;
        T swap;


        std::srand(std::time(nullptr));

	// optimization
        if (size_of_list < 2)
                return;

start:
        a = 0 + std::rand() % size_of_list;
        b = 0 + std::rand() % size_of_list;

        if (b == a)
                goto start; // goto because why not :sigma_face:

        // swap
        swap = list[b];
        list[b] = list[a];
        list[a] = swap;

        // Check!
        // :sigma_face:
        for (size_t i = 0; i < size_of_list - 1; i++) {
                if (list[i] > list[i + 1])
                        goto start;
        }

        // :chad:
        return;
}

// See KennenSort in action!
template <typename T>
void KennenSortD(T* list, size_t size_of_list) 
{
        int a, b = 0;
        size_t run = 0;
        T swap;

        std::srand(std::time(nullptr));

        if (size_of_list < 2)
                return;

start:
        run += 1;

        a = 0 + std::rand() % size_of_list;
        b = 0 + std::rand() % size_of_list;

        if (b == a)
                goto start;

        swap = list[b];
        list[b] = list[a];
        list[a] = swap;

        std::cout << run << ". Array: ";
        for (size_t i = 0; i < size_of_list; i++) {
                std::cout << list[i] << ", ";
        }
        std::cout << std::endl;

        for (size_t i = 0; i < size_of_list - 1; i++) {
                if (list[i] > list[i + 1])
                        goto start;
        }

        return;
}
