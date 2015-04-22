#version 330 core

layout(location = 0) in vec2 v_pos;
layout(location = 1) in int letterCode;
layout(location = 2) in vec2 l_pos;
layout(location = 3) in vec4 colour;
layout(location = 4) in float size;

out vec2 f_textureCoords;
out vec4 f_colour;

void main() {
	gl_Position = vec4(v_pos * size + l_pos, 0, 1);
	f_textureCoords = (vec2(float(letterCode % 16), float(letterCode / 16)) + v_pos) / 8.0;
	f_colour = colour;
}