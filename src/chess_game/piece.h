#ifndef PIECE_H
#define PIECE_H

#include "glm/glm.hpp"
#include "glm/gtx/transform.hpp"
#include <shader.h>
#include <vertexarray.h>
#include <camera.h>
#include <renderer.h>
#include <object.h>


class Piece
{
    public:
        Piece(std::string m_color);
        virtual ~Piece();
        std::string color;
        Object* oPiece;
        virtual void move(int x, int y) = 0;
        void Draw(VertexArray& va, Camera& cam, Shader& shader, Renderer& renderer);
};

#endif
