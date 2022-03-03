#include "Convert.cpp"
#include "Color_To_GrayScale.cpp"
#include "Grayscale_To_Negative.cpp"
#include "Color_To_Negative.cpp"

int main() {
	Convert_Image* Convert1 = new Color_To_Grayscale("E:/Aimeddoc/Source1.jpg");
	Convert_Image* Convert2 = new Grayscale_To_Negative("E:/Aimeddoc/Source2.jpg");
	Convert_Image* Convert3 = new Color_To_Negative("E:/Aimeddoc/Source3.jpg");
	Convert1->Display();
	Convert2->Display();
	Convert3->Display();
	return 0;
}