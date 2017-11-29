//
//  main.cpp
//  Raylib_Starter_CPlusPlus
//
//  Created by Braeden Foster on 29/11/17.
//  Copyright © 2017 Braeden Foster. All rights reserved.
//

#include "raylib.h"

int main() {
    //Initialise
    int screenWidth = 800;
    int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Raylib - Empty Project");
    
    //Main game loop
    while (!WindowShouldClose()) {
        //Update game loop
        
        BeginDrawing(); //start
            ClearBackground(RAYWHITE); //Every frame clear background with white
            DrawText("Start your game here...", 190, 200, 20, LIGHTGRAY);
        EndDrawing();//end
    }
    //De-Initialise
    CloseWindow();
}
