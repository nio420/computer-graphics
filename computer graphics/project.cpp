#include<iostream>
#include<graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;
    std::cout << "Choose a pattern to draw:\n";
    std::cout << "1. Rainbow\n";
    std::cout << "2. car\n";
    std::cout << "3. Circles\n";
    std::cout << "4. house\n";
    std::cout << "5. emoji\n";
    std::cin >> choice;

    switch(choice) {
        case 1: {
            int x = getmaxx() / 2;
            int y = getmaxy() / 2;
            for (int i = 20; i < 200; i++) {
                setcolor(i / 10);
                arc(x, y, 0, 180, 10 + i);
            }
            break;
        }
        case 2: {
            for (int i = 0; i < 270; i++) {
                line(20, 250, 60, 200);
                line(60, 200, 100, 250);
                line(10, 250, 110, 250);

                line(110, 250, 110, 200);
                rectangle(90, 200, 110, 210);

                circle(33, 261, 10);
                circle(80, 261, 10);

                line(0, 270, 700, 270);

                setfillstyle(8, 3);
                floodfill(61, 210, BLUE);
                delay(10);
                cleardevice();
            }
            break;
        }
        case 3: {
            for (int i = 0; i <= 100; i++) {
                setcolor(i);
                circle(319, 219 - i, 20 + i);
                circle(319, 219 + i, 20 + i);
                circle(299 - i, 239, 20 + i);
                circle(339 + i, 239, 20 + i);
            }
            break;

             case 4: // Simple House
            // Draw House
            rectangle(200, 300, 400, 500); // Main body
            rectangle(250, 400, 350, 500); // Door
            rectangle(300, 330, 350, 400); // Window
            line(200, 300, 300, 200); // Roof
            line(300, 200, 400, 300); // Roof
            line(400, 300, 200, 300); // Roof
            break;

             case 5: // Smiley Face (Emoji)
            // Draw Smiley Face

            circle(200, 200, 100); // Face
            circle(170, 170, 10);  // Left eye
            circle(230, 170, 10);  // Right eye
            arc(200, 200, 200, 320, 40); // Mouth
            break;

        }
        default:
            std::cout << "Invalid choice!";
    }

    getch();
    closegraph();
    return 0;
}

