# Лабораторна робота №2 — варіант 15

Класи й об’єкти в C++

Варіант 15. Створити клас Fraction для роботи з дробовими числами. Число подати двома закритими полями: ціла частина — довге ціле зі знаком (long), дробова частина — беззнакове коротке ціле (unsigned short). Реалізувати додавання, віднімання, множення й операції порівняння. Обов’язкові Init(), Read(), Display() і toString().

## Збирання і запуск у Windows

Потрібен GCC MinGW-w64 з підтримкою C++14. Додайте каталог `bin` компілятора до `PATH` або передайте його скрипту через параметр `-CompilerDirectory`.

```powershell
.\build.ps1
Get-Content .\input.txt | .\lab02.exe
```

Команди збирання

```text
g++ -std=c++14 -O2 -Wall -Wextra -pedantic -static-libgcc -static-libstdc++ fraction.cpp main.cpp -o lab02.exe
```

У `input.txt` збережені тестові вхідні дані, а в `expected_output.txt` — вивід перевіреного запуску.
