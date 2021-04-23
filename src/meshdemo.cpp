#include "AGL.h"
#include "AGLM.h"
#include "mesh.h"

using namespace std;
using namespace glm;
using namespace agl;
int main(int argc, char** argv)
{
   // TODO: Your demo here
   Mesh temp;
   temp.loadPLY("../models/cube.ply");
   cout<< "numTriangles: " << temp.numTriangles() << endl;
   cout<< "vertices: " << temp.numVertices() << endl;
   cout<< "maxbound: " << temp.getMaxBounds() << endl;
   cout<< "minbound: " << temp.getMinBounds() << endl;
   return 0;
}


