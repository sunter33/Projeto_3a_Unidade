#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "figurageometrica.h"

using namespace std;

class Interpretador{
    int dimx, dimy, dimz;
    float r, g, b, alpha;
public:
    Interpretador();
    std::vector<FiguraGeometrica *>parse(std::string filename);
    int getDimx();
    int getDimy();
    int getDimz();
};

#endif // INTERPRETADOR_H
