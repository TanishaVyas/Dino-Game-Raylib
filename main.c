/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2023 Ramon Santamaria (@raysan5)
*
********************************************************************************************/
#include <stdio.h>
#include <conio.h>
#include "raylib.h"


int main(){
    InitWindow(500,500,"Dino Hopefully");
    SetTargetFPS(60); 
    //Texture2D texture = LoadTexture("C:\\Users\\Admin\\Desktop\\github\\Dino-Game-Raylib\\characters\\stick.png");
    Image stick= LoadImage("characters\\stick.png");
    Image b= LoadImage("characters\\box.png");
    ImageResizeNN(&b, 10,10);
    ImageResizeNN(&stick, 50,50);
    Texture2D stickman = LoadTextureFromImage(stick);
    Texture2D box = LoadTextureFromImage(b);
    //UnloadTexture(texture);
    UnloadImage(stick);
    UnloadImage(b);
    while (!WindowShouldClose())   
    {
        BeginDrawing();
        ClearBackground(GRAY);
        DrawTexture(stickman, 0, 250, WHITE);
        if(IsKeyPressed(KEY_SPACE)){
            DrawTexture(stickman, 0,0, WHITE);
        }
        EndDrawing();
    }

    UnloadTexture(stickman);
    CloseWindow(); 
    return 0;
}
