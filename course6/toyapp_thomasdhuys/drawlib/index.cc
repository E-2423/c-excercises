#include "index.h"
#include "rgb.h"

namespace Draw {

Vertex::~Vertex() { std::cout << "Vtx destructed: " << *this << std::endl; }

std::ostream& operator<<(std::ostream& s, const Vertex& v) { return s << v.vector << " " << v.color; }

}
