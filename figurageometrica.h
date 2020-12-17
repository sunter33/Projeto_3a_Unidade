#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
/**
 * @brief classe abstrata que serve para representar objetos primitivos genericos.
 */
class FiguraGeometrica{
protected:
    float r, g, b, alpha;
public:
    virtual ~FiguraGeometrica(){};
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
