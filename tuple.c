#include "tuple.h"

unsigned int is_point(Tuple t){
    if (t.w == 1){
        return 1;
    } else {
        return 0;
    }
}

unsigned int is_vector(Tuple t){
    if (t.w == 0){
        return 1;
    } else {
        return 0;
    }
}

Tuple tuple(double x, double y, double z, double w){
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = w;
    return t;
}

Tuple point(double x, double y, double z){
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = 1;
    return t;
}

Tuple vector(double x, double y, double z){
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = 0;
    return t;
}

Tuple addTuples(Tuple tup1, Tuple tup2){
    Tuple sum;

    sum.x = tup1.x + tup2.x;
    sum.y = tup1.y + tup2.y;
    sum.z = tup1.z + tup2.z;
    sum.w = tup1.w + tup2.w; 
    
    return sum;
}

Tuple subTuples(Tuple tup1, Tuple tup2){
    Tuple diff;

    diff.x = tup1.x - tup2.x;
    diff.y = tup1.y - tup2.y;
    diff.z = tup1.z - tup2.z;
    diff.w = tup1.w - tup2.w; 

    return diff;
    
}

Tuple negateTuple(Tuple t){
    Tuple tup;
    tup.x = t.x * -1;
    tup.y = t.y * -1;
    tup.z = t.z * -1;
    tup.w = t.w * -1;
    return tup;
}

Tuple scalarMultTuple(double a, Tuple t){
    Tuple tup;
    tup.x = t.x * a;
    tup.y = t.y * a;
    tup.z = t.z * a;
    tup.w = t.w * a;
    return tup;
}

Tuple scalarDivideTuple(Tuple t, double a){
    Tuple tup;
    tup.x = t.x / a;
    tup.y = t.y / a;
    tup.z = t.z / a;
    tup.w = t.w / a;
    return tup;
}

double magnitudeOfVector(Tuple t){
    double mag = 0.0;
    mag = sqrt((t.x * t.x) + (t.y * t.y) + (t.z * t.z));
    return mag;
}

Tuple normalizeVector(Tuple t){
    Tuple tup;
    tup.x = t.x;
    tup.y = t.y;
    tup.z = t.z;
    double mag = magnitudeOfVector(tup);
    tup.x /= mag;
    tup.y /= mag;
    tup.z /= mag;
    return tup;
}

double dotProduct(Tuple tup1, Tuple tup2){
    double dot = 0.0;
    dot = ((tup1.x * tup2.x) +(tup1.y * tup2.y) + (tup1.z * tup2.z));
    return dot;
}