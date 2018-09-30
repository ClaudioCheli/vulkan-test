#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class Window
{
public:
  Window();
  ~Window();

  bool shouldClose();

private:
  const int WIDTH = 800;
  const int HEIGHT = 600;

  GLFWwindow *window;
};