#pragma once
// define the main function

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Engine Start!\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

	// this is going to create the application by calling the function in the sandboxapp , then will call the Run() from the Application.cpp... 
	// ...doing the while loop and at the end it is going to delete it.
}

#endif

