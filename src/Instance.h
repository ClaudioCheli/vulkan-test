#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <stdexcept>

class Instance
{
  public:
	Instance(const char *appName, const char *engineName);
	~Instance();

  private:
	VkInstance instance;
};