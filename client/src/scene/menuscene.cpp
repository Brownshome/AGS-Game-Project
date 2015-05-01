//GLEW openGL Extension Wrangler Library
#include <GL/glew.h>
//GLFW used for keyboard IO and window creation
#include <GLFW/glfw3.h>

#include <string>
#include <vector>
#include <glm/glm.hpp>

#include "log.hpp"
#include "inputio/keybinds.hpp"
#include "render/renderer.hpp"
#include "scene/menuscene.hpp"
#include "scene/scenemanager.hpp"

using namespace glm;

void spacePressed();

text::Data* menuText;

void MenuScene::init() {
	log(INFO, "Initializing MenuScene");
	
	keybinds::add(spacePressed, GLFW_KEY_SPACE, KEY_DOWN);
	
	menuText = text::add(vec2(-1, 0), vec4(0.5, 1, 1, 1), 0.1, "Press space to continue", 0);
}

void MenuScene::dispose() {
	log(INFO, "Disposing of MenuScene");
	
	keybinds::remove(spacePressed, GLFW_KEY_SPACE, KEY_DOWN);
	
	text::remove(menuText);
}

void MenuScene::update() {

}

void spacePressed() {
	SceneManager::changeScene("Game");
}
