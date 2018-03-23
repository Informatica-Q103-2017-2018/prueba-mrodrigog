#include "myLib.h"
float volEsfera(float r){
return 4.0/3.0 * PI * eleva3(r);
}
float eleva3(float x){
return x * x * x;
}
