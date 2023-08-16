#include <iostream>

int main() {
    int image_width = 256;
    int image_height = 256;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int y = 0; y < image_height; y++) {
        for (int x = 0; x < image_width; x++) {
            int r = int(double(x) / (image_width - 1) * 255.99);
            int g = int(double(y) / (image_height - 1) * 255.99);
            int b = 0;
            std::cout << r << " " << g << " " << b << "\n";
        }
    }
    return 0;
}
