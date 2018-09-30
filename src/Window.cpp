#include "Window.h"

Window::Window()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "vulkan", nullptr, nullptr);
}

bool Window::shouldClose()
{
    return glfwWindowShouldClose(window);
}

Window::~Window()
{
    glfwDestroyWindow(window);

    glfwTerminate();
}