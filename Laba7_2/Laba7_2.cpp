﻿// Laba7_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
int kvadr(int countElement, ...) 
{
    int* p = &countElement;
    int resalt = 0;
    
    for (; countElement != 0; countElement--)
    {   
        p += 2;
        int c = *(p);
        int buf = pow(c, 0.5);
        
        bool isCheck = pow(buf, 2) == c;
        
        if (isCheck)resalt++;
    }
    return resalt;
}

int main()
{
    std::cout << kvadr(3,4,6,9)<<"\n"<< kvadr(5, 16, 25, 14, 256, 3)<<"\n"<<kvadr(8,1,2,3,4,5,6,7,8);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
