#include "all.h"

int main()
{
   double height; //身長1.67m
   std::cout << "height.(m)"s;
   std::cin >> height;
   double mass; //体重58kg
   std::cout << "mass.(kg)"s;
   std::cin >> mass;
   double bmi = mass / (height * height);

   auto status = [](double bmi)
   {
      if (bmi < 18.5)
         return "Underweight.\n"s;
      else if (bmi < 25.0)
         return "Normal.\n"s;
      else if (bmi < 30.0)
         return "Overweight.\n"s;
      else
         return "Obese.\n"s;
   };
   // std::cout << "BMI="s << bmi << "\n"s;
   std::cout << status(bmi);
}