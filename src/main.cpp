#include "Window.h"

#include <iostream>

int main()
{
    Window window;

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::cout << extensionCount << " extensions supported" << std::endl;

    while (!window.shouldClose())
    {
        glfwPollEvents();
    }

    window.~Window();

    return 0;
}