#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#define FILAS 23
#define COLUMNAS 25
using namespace std;
using namespace System;

struct {
    char color;
    string nombre;
    char forma;

} jugador1, jugador2;


int logoupc[25][85]{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,2,2,2,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,3,3,3,3,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,2,2,0,0,0,0,3,0,0,0,3,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,3,0,3,3,0,3,3,3,0,2,2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,2,2,2,0,0,3,3,3,3,3,0,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,0,3,3,0,0,0,3,0,3,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,2,2,2,0,0,3,0,0,0,3,0,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,3,0,0,0,0,3,0,3,0,2,2,2,2,0,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0,0,2,2,2,2,0,0,3,0,0,0,3,3,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,3,3,3,0,2,2,2,2,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,2,2,2,2,0,0,3,3,3,3,3,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0,2,0,0,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int table[FILAS][COLUMNAS]{
    {1,1,1,3,1,1,1,4,1,1,1,5,1,1,1,6,1,1,1,7,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {8,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {8,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {8,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {8,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {8,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void bienvenidoAscii() {
    Console::SetCursorPosition(0, 1);
    cout << " 888888b.   d8b                                              d8b      888          " << endl;
    cout << " 888   88b  Y8P                                              Y8P      888          " << endl;
    cout << " 888  .88P                                                            888          " << endl;
    cout << " 8888888K.  888  .d88b.  88888b.  888  888  .d88b.  88888b.  888  .d88888  .d88b.  " << endl;
    cout << " 888   Y88b 888 d8P  Y8b 888  88b 888  888 d8P  Y8b 888  88b 888 d88  888 d88  88b " << endl;
    cout << " 888    888 888 88888888 888  888 Y88  88P 88888888 888  888 888 888  888 888  888 " << endl;
    cout << " 888   d88P 888 Y8b.     888  888  Y8bd8P  Y8b.     888  888 888 Y88b 888 Y88..88P " << endl;
    cout << " 8888888P   888  Y8888   888  888   Y88P    Y8888   888  888 888  Y888888   Y88P   " << endl;
}

void borde() {
    Console::ForegroundColor = ConsoleColor::Blue;
    Console::SetCursorPosition(0, 0); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);

    Console::SetCursorPosition(0, 1); cout << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(186) << endl << char(200);

    Console::SetCursorPosition(1, 14); cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

    Console::SetCursorPosition(74, 1); cout << char(186); Console::SetCursorPosition(74, 2); cout << char(186); Console::SetCursorPosition(74, 3); cout << char(186); Console::SetCursorPosition(74, 4); cout << char(186); Console::SetCursorPosition(74, 5); cout << char(186); Console::SetCursorPosition(74, 6); cout << char(186); Console::SetCursorPosition(74, 7); cout << char(186); Console::SetCursorPosition(74, 8); cout << char(186); Console::SetCursorPosition(74, 9); cout << char(186); Console::SetCursorPosition(74, 10); cout << char(186); Console::SetCursorPosition(74, 11); cout << char(186); Console::SetCursorPosition(74, 12); cout << char(186); Console::SetCursorPosition(74, 13); cout << char(186); Console::SetCursorPosition(74, 14);
}

void bienvenida() {
    char tecla;
    borde();
    string nombre1, nombre2;
    Console::SetCursorPosition(13, 6);
    Console::ForegroundColor = ConsoleColor::White;
    cout << "Por favor ingrese el nombre del jugador 1: ";
    cin >> jugador1.nombre;
    nombre1 = jugador1.nombre;

    do {
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(13, 7); cout << jugador1.nombre << " Seleccione el color de sus fichas " << endl;
        Console::ForegroundColor = ConsoleColor::Blue;
        Console::SetCursorPosition(13, 8); cout << " A = Azul ";
        Console::ForegroundColor = ConsoleColor::Magenta;
        Console::SetCursorPosition(13, 9); cout << " M = Magenta " << endl;

        jugador1.color = getch();
        jugador1.color = toupper(jugador1.color);

    } while (jugador1.color != 'A' && jugador1.color != 'M');
    system("CLS");
    borde();
    Console::ForegroundColor = ConsoleColor::White;
    Console::SetCursorPosition(13, 6); cout << "Genial! Ahora ingrese el nombre del jugador 2: ";
    cin >> jugador2.nombre;
    do {
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(13, 7); cout << jugador2.nombre << " Seleccione el color de sus fichas " << endl;
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(13, 8); cout << " V = Verde ";
        Console::ForegroundColor = ConsoleColor::Red;
        Console::SetCursorPosition(13, 9); cout << " R = Rojo " << endl;

        jugador2.color = getch();
        jugador2.color = toupper(jugador2.color);

    } while (jugador2.color != 'R' && jugador2.color != 'V');
    while (1) {
        Console::SetCursorPosition(14, 12);
        Console::ForegroundColor = ConsoleColor::White;
        cout << "Perfecto! Presione";
        Console::ForegroundColor = ConsoleColor::Green;
        cout << " Enter ";
        Console::ForegroundColor = ConsoleColor::White;
        cout << "para comenzar con el juego" << endl;
        if (kbhit()) break;
    }
}


void borrar_jugador(int& x, int& y) {
    Console::ForegroundColor = ConsoleColor::White;
    Console::BackgroundColor = ConsoleColor::Yellow;
    Console::SetCursorPosition(x + 1, y + 1); cout << char(219) << char(219) << char(219);
    Console::SetCursorPosition(x + 1, y + 2); cout << char(219) << char(219) << char(219);
    Console::SetCursorPosition(x + 1, y + 3); cout << char(219) << char(219) << char(219);
}

void pintar_jugador1(int& x, int& y) {
    if (jugador1.color == 'M') {
        Console::ForegroundColor = ConsoleColor::Magenta;
        Console::BackgroundColor = ConsoleColor::Magenta;
    }
    if (jugador1.color == 'A') {
        Console::ForegroundColor = ConsoleColor::Blue;
        Console::BackgroundColor = ConsoleColor::Blue;
    }
    jugador1.forma = 178;
    Console::SetCursorPosition(x + 0, y + 0); cout << char(178);
    Console::SetCursorPosition(x - 1, y + 0); cout << char(178);
    Console::SetCursorPosition(x + 1, y + 0); cout << char(178);
    Console::SetCursorPosition(x + 0, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 0, y - 1); cout << char(178);
}

void pintar_jugador2(int& x, int& y) {
    if (jugador2.color == 'V') {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::BackgroundColor = ConsoleColor::Green;
    }
    if (jugador2.color == 'R') {
        Console::ForegroundColor = ConsoleColor::Red;
        Console::BackgroundColor = ConsoleColor::Red;
    }

    jugador2.forma = 177;
    Console::SetCursorPosition(x + 0, y + 0); cout << char(177);
    Console::SetCursorPosition(x - 1, y + 0); cout << char(177);
    Console::SetCursorPosition(x + 1, y + 0); cout << char(177);
    Console::SetCursorPosition(x + 0, y + 1); cout << char(177);
    Console::SetCursorPosition(x + 0, y - 1); cout << char(177);
}

void seleccionadorFicha(int x, int y) {
    Console::SetCursorPosition(x, y);
    Console::ForegroundColor = ConsoleColor::Gray;
    cout << char(219) << char(219) << char(219) << char(219) << char(219);
    Console::SetCursorPosition(x, y + 4);
    Console::ForegroundColor = ConsoleColor::Gray;
    cout << char(219) << char(219) << char(219) << char(219) << char(219);
}

void borrarSeleccionador(int x, int y) {
    Console::SetCursorPosition(x - 1, y);
    Console::ForegroundColor = ConsoleColor::DarkGray;
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    Console::SetCursorPosition(x - 1, y + 4);
    Console::ForegroundColor = ConsoleColor::DarkGray;
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
}

void movimiento(int& x, int& y, char tecla) {
    switch (tecla) {
    case 'W': y -= 4; break;
    case 'D': x += 4; break;
    case 'A': x -= 4; break;
    case 'S': y += 4; break;
    }
}

void imprimirtable(int table[FILAS][COLUMNAS]) {
    Console::SetCursorPosition(0, 0);
    int cont = 1;
    for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 25; j++) {
            if (table[i][j] == 1) {
                Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << char(219);
            }
            if (table[i][j] == 2) {
                Console::ForegroundColor = ConsoleColor::White;
                cout << char(219);
            }
            if (table[i][j] == 3) {
                Console::BackgroundColor = ConsoleColor::DarkGray;
                Console::ForegroundColor = ConsoleColor::White;
                cout << char('A');
            }
            if (table[i][j] == 4) {
                Console::ForegroundColor = ConsoleColor::White;
                Console::BackgroundColor = ConsoleColor::DarkGray;
                cout << char('B');
            }
            if (table[i][j] == 5) {
                Console::ForegroundColor = ConsoleColor::White;
                Console::BackgroundColor = ConsoleColor::DarkGray;
                cout << char('C');
            }
            if (table[i][j] == 6) {
                Console::ForegroundColor = ConsoleColor::White;
                Console::BackgroundColor = ConsoleColor::DarkGray;
                cout << char('D');
            }
            if (table[i][j] == 7) {
                Console::BackgroundColor = ConsoleColor::DarkGray;
                Console::ForegroundColor = ConsoleColor::White;
                cout << char('E');
            }
            if (table[i][j] == 8) {
                Console::BackgroundColor = ConsoleColor::DarkGray;
                Console::ForegroundColor = ConsoleColor::White;
                cout << cont++;
            }


        }
        cout << endl;
    }
}

void imprimirlogo(int logoupc[25][85]) {
    Console::SetCursorPosition(79, 10);
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            if (logoupc[i][j] == 1) {
                Console::ForegroundColor = ConsoleColor::White;
                cout << char(219);
            }
            if (logoupc[i][j] == 2) {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << char(219);
            }
            if (logoupc[i][j] == 3) {
                Console::ForegroundColor = ConsoleColor::Gray;
                cout << char(219);
            }
            if (logoupc[i][j] == 0) {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << char(219);
            }
        }
        cout << endl;
    }
}

void coutfinal() {
    Console::ForegroundColor = ConsoleColor::Black;
    Console::BackgroundColor = ConsoleColor::Black;
    Console::SetCursorPosition(30, 10); cout << "                                                            ";
    Console::SetCursorPosition(30, 11); cout << "                                                            ";
    Console::SetCursorPosition(30, 12); cout << "                                                            ";
    Console::SetCursorPosition(30, 13); cout << "                                                            ";
    Console::SetCursorPosition(30, 14); cout << "                                                            ";
}

void colocarFicha() {
    int x = 9, y = 9, cont1 = 0, cont2 = 0, xaux = 0, yaux = 0;
    seleccionadorFicha(x, y);
    while (true) {
        if (cont1 == 10 && cont2 == 10) {
            break;
        }
        Console::SetCursorPosition(30, 10);
        Console::ForegroundColor = ConsoleColor::White;
        Console::BackgroundColor = ConsoleColor::Black;
        cout << "Presione las teclas W, A, S ,D para mover el seleccionador." << endl;
        Console::SetCursorPosition(30, 11);
        Console::ForegroundColor = ConsoleColor::Blue;
        Console::BackgroundColor = ConsoleColor::Black;
        Console::SetCursorPosition(30, 13);
        if (jugador1.color == 'M') {
            Console::ForegroundColor = ConsoleColor::Magenta;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        if (jugador1.color == 'A') {
            Console::ForegroundColor = ConsoleColor::Blue;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        cout << jugador1.nombre << ", presione la tecla 'M' para colocar una ficha." << endl;
        Console::SetCursorPosition(30, 14);
        if (jugador2.color == 'V') {
            Console::ForegroundColor = ConsoleColor::Green;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        if (jugador2.color == 'R') {
            Console::ForegroundColor = ConsoleColor::Red;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        cout << jugador2.nombre << ", presione la tecla 'N' para colocar una ficha." << endl;
        if (_kbhit()) {
            char tecla = toupper(getch());
            borrarSeleccionador(x, y);
            movimiento(x, y, tecla);
            Console::SetCursorPosition(30, 9);
            if (x < 0)
                x = 1;
            if (x >= 18)
                x = 17;
            if (y < 0)
                y = 1;
            if (y >= 18)
                y = 17;
            seleccionadorFicha(x, y);
            int z = x, c = y;
            z += 2;
            c += 2;
            do {
                if (c == 11 && z == 11) {
                    Console::BackgroundColor = ConsoleColor::White;
                }
                else {
                    if (tecla == 'M' && cont1 <= 10) {
                        pintar_jugador1(z, c);
                        cont1++;
                    }
                    if (tecla == 'N' && cont2 <= 10) {
                        pintar_jugador2(z, c);
                        cont2++;
                    }
                    if (cont1 == 10 && cont2 == 10) break;
                }
            } while (cont1 == 10 && cont2 == 10);
        }
    }
    int auxil1, auxil2;
    auxil1 = x;
    auxil2 = y;
    borrarSeleccionador(auxil1, auxil2);
    coutfinal();
    Console::SetCursorPosition(30, 5); cout << "FASE 2: YA PUEDE MOVER SUS FICHAS";
}

void moverFicha(int& cj1, int& cj2) {
    int x = 9, y = 9, cont1 = 0, cont2 = 0, xaux = 0, yaux = 0;
    seleccionadorFicha(x, y);
    while (true) {
        Console::SetCursorPosition(27, 2);
        Console::ForegroundColor = ConsoleColor::White;
        Console::BackgroundColor = ConsoleColor::Black;
        Console::SetCursorPosition(27, 4);
        Console::ForegroundColor = ConsoleColor::White;
        Console::BackgroundColor = ConsoleColor::Black;

        Console::ForegroundColor = ConsoleColor::Magenta;
        Console::SetCursorPosition(27, 2); cout << "----------------- FASE DOS YA PUEDE COMENZAR :) ----------------" << endl;
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(27, 7); cout << "-------------------TECLAS PARA JUGAR--------------------" << endl;
        Console::SetCursorPosition(27, 8); cout << "Presione la letra B para SELECCIONAR la ficha que desea mover." << endl;

        if (jugador1.color == 'M') {
            Console::ForegroundColor = ConsoleColor::Magenta;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        if (jugador1.color == 'A') {
            Console::ForegroundColor = ConsoleColor::Blue;
            Console::BackgroundColor = ConsoleColor::Black;
        }

        Console::SetCursorPosition(27, 9); cout << jugador1.nombre << " presione la letra J para COLOCAR la ficha que deseada." << endl;

        if (jugador2.color == 'V') {
            Console::ForegroundColor = ConsoleColor::Green;
            Console::BackgroundColor = ConsoleColor::Black;
        }

        if (jugador2.color == 'R') {
            Console::ForegroundColor = ConsoleColor::Red;
            Console::BackgroundColor = ConsoleColor::Black;
        }

        Console::SetCursorPosition(27, 10); cout << jugador2.nombre << " presione la letra L para COLOCAR la ficha que deseada." << endl;


        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(27, 12); cout << "-------------------TECLAS PARA ELIMINAR--------------------" << endl;

        if (jugador1.color == 'M') {
            Console::ForegroundColor = ConsoleColor::Magenta;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        if (jugador1.color == 'A') {
            Console::ForegroundColor = ConsoleColor::Blue;
            Console::BackgroundColor = ConsoleColor::Black;
        }

        Console::SetCursorPosition(27, 13); cout << jugador1.nombre << " presione la letra Z para ELIMINAR la ficha capturada" << endl;

        if (jugador2.color == 'V') {
            Console::ForegroundColor = ConsoleColor::Green;
            Console::BackgroundColor = ConsoleColor::Black;
        }
        if (jugador2.color == 'R') {
            Console::ForegroundColor = ConsoleColor::Red;
            Console::BackgroundColor = ConsoleColor::Black;
        }

        Console::SetCursorPosition(27, 14); cout << jugador2.nombre << " presione la letra Q para ELIMINAR la ficha capturada" << endl;

        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(27, 16); cout << "--------------COMO SABER SI CAPTURASTE UNA FICHA--------" << endl;
        Console::SetCursorPosition(27, 17); cout << "Si al colocar una ficha tuya encarcelas a tu oponente" << endl;
        Console::SetCursorPosition(27, 18); cout << "verticalmente o horizonatlmente, felicidades, capturaste tu oponente" << endl;
        if (_kbhit()) {
            char tecla = toupper(getch());
            borrarSeleccionador(x, y);
            movimiento(x, y, tecla);
            Console::SetCursorPosition(30, 9);
            if (x < 0)
                x = 1;
            if (x >= 18)
                x = 17;
            if (y < 0)
                y = 1;
            if (y >= 18)
                y = 17;
            seleccionadorFicha(x, y);
            int z = x, c = y;
            z += 2;
            c += 2;
            if (tecla == 'B') {
                xaux = x;
                yaux = y;
                Console::ForegroundColor = ConsoleColor::Cyan;
                Console::SetCursorPosition(z - 1, c - 1);
                cout << char(219);
                Console::SetCursorPosition(z + 1, c - 1);
                cout << char(219);
                Console::SetCursorPosition(z - 1, c + 1);
                cout << char(219);
                Console::SetCursorPosition(z + 1, c + 1);
                cout << char(219);
            }
            if (tecla == 'J') {
                int aux1 = x, aux2 = y;
                aux1 += 2;
                aux2 += 2;
                borrar_jugador(xaux, yaux);
                pintar_jugador1(aux1, aux2);
            }
            if (tecla == 'L') {
                int aux1 = x, aux2 = y;
                aux1 += 2;
                aux2 += 2;
                borrar_jugador(xaux, yaux);
                pintar_jugador2(aux1, aux2);
            }
            if (tecla == 'Z') {
                Console::SetCursorPosition(z - 1, c - 1);
                Console::ForegroundColor = ConsoleColor::White;
                cout << char(219) << char(219) << char(219);
                Console::SetCursorPosition(z - 1, c);
                cout << char(219) << char(219) << char(219);
                Console::SetCursorPosition(z - 1, c + 1);
                cout << char(219) << char(219) << char(219);
                cj1++;
                Console::SetCursorPosition(30, 1); cout << "Puntaje de " << jugador1.nombre << ": " << cj1;
            }
            if (tecla == 'Q') {
                Console::SetCursorPosition(z - 1, c - 1);
                Console::ForegroundColor = ConsoleColor::White;
                cout << char(219) << char(219) << char(219);
                Console::SetCursorPosition(z - 1, c);
                cout << char(219) << char(219) << char(219);
                Console::SetCursorPosition(z - 1, c + 1);
                cout << char(219) << char(219) << char(219);
                cj2++;
                Console::SetCursorPosition(30, 3); cout << "Puntaje de " << jugador2.nombre << ": " << cj2;
            }
            if (cj1 >= 12 || cj2 >= 12) break;
        }
        if (cj1 >= 12 || cj2 >= 12) break;
    }
}

void guiajugador() {
    Console::ForegroundColor = ConsoleColor::White;

    cout << "GUIA BASICA PARA JUGAR ";
    Console::ForegroundColor = ConsoleColor::Magenta;
    cout << "SEEGA" << endl << endl;

    Console::ForegroundColor = ConsoleColor::Yellow;
    cout << "PRIMERA FASE" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << "Ingrese su nombre y escoja su color en la siguiente pantalla." << endl;
    cout << "Apareceran dos fichas de cada jugador en sus correspondientes casillas" << endl;
    cout << "Una vez elegido, tomen turnos para seleccionar el lugar donde desean poner sus ultimas 10 casillas fichas." << endl;
    Console::ForegroundColor = ConsoleColor::Blue;
    cout << "El jugador uno debera poner la tecla 'M' para poner la ficha donde desea." << endl;
    Console::ForegroundColor = ConsoleColor::Green;
    cout << "El jugador dos debera poner la tecla 'N' para poner la ficha donde desea." << endl;
    cout << "Presione la tecla para INICIAR el juego" << endl << endl << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << "Presione cualquier tecla para continuar...";
    Console::ForegroundColor = ConsoleColor::Black;
    system("pause");
    system("CLS");
    Console::ForegroundColor = ConsoleColor::Yellow;
    cout << "SEGUNDA FASE" << endl << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << "Presione una tecla para mover sus fichas durante el juego." << endl;
    cout << "Juege con las reglas que se dictaran en la siguiente pantalla." << endl << endl << endl;
    cout << "Presione cualquier tecla para continuar...";
    Console::ForegroundColor = ConsoleColor::Black;
    system("pause");

    system("CLS");

    Console::ForegroundColor = ConsoleColor::Yellow;
    cout << "REGLAS DEL JUEGO " << endl;
    Console::ForegroundColor = ConsoleColor::Magenta;
    cout << "SEEGA" << endl;
    Console::ForegroundColor = ConsoleColor::Yellow;
    cout << "---------------------------------------------------------------------------" << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << "  1. Las fichas se mueven de manera vertical y horizontal." << endl;
    cout << "  2. Cada jugador tiene 12 fichas." << endl;
    cout << "  3. En la primera fase NO debe colocar una ficha en el centro." << endl;
    cout << "  4. No puede mover una ficha del oponente." << endl;
    cout << "  5. No puede colocar una ficha donde se encuentra la ficha del oponente." << endl;
    cout << "  6. Si su oponente mueve una ficha de manera que su ficha queda entre  \n     dos fichas del oponente, su ficha desaparece." << endl << endl << endl;
    cout << "Presione cualquier tecla para continuar...";
    Console::ForegroundColor = ConsoleColor::Black;
    system("pause");

    system("CLS");
}

int main() {
    char skip;
    char tecla;
    int x1 = 11, y1 = 3;
    int x2 = 11, y2 = 19;
    int turno = 1, cont1 = 12, cont2 = 12;
    int cj1 = 0, cj2 = 0;
    Console::SetWindowSize(84, 39);
    Console::SetBufferSize(84, 9000);
    Console::CursorVisible = false;
    Console::BackgroundColor = ConsoleColor::Black;
    Console::Title = " JUEGO || SEEGA ";
    while (1) {
        Console::ForegroundColor = ConsoleColor::Blue;
        bienvenidoAscii();
        Console::ForegroundColor = ConsoleColor::Red;
        _sleep(300);
        bienvenidoAscii();
        imprimirlogo(logoupc);
        _sleep(300);
        Console::SetCursorPosition(0, 36);
        Console::ForegroundColor = ConsoleColor::DarkGray;
        cout << "Grupo: Los Pro Cubitos || Sede: Monterrico || Docente: Luis Vives || Seccion: CC1F" << endl;
        cout << "Por favor presionar cualquier tecla para seguir ->";
        if (kbhit()) break;
    }
    system("CLS");
    Console::SetWindowSize(75, 15);
    Console::SetBufferSize(75, 9000);

    guiajugador();
    bienvenida();
    system("CLS");

    Console::SetWindowSize(95, 24);
    Console::SetBufferSize(95, 9000);
    imprimirtable(table);

    _sleep(500);
    pintar_jugador1(x1, y1);
    pintar_jugador2(x2, y2);
    x1 += 8;
    y1 += 8;
    pintar_jugador1(x1, y1);
    x2 -= 8;
    y2 -= 8;
    pintar_jugador2(x2, y2);
    _sleep(500);
    colocarFicha();
    moverFicha(cj1, cj2);

    Console::SetWindowSize(40, 5);
    system("CLS");
    if (cj1 >= 12) {
        cout << "Felicidades " << jugador1.nombre << " usted ha ganado!!!" << endl;
    }
    if (cj2 >= 12) {
        cout << "Felicidades " << jugador2.nombre << " usted ha ganado!!!" << endl;
    }
    getch();
}
