#pragma once

#ifdef DARK_PLATFORM_WINDOWS

extern Dark::Application* Dark::CreateApplication();
	
int main(int argc, char** argv)
{
	auto app = Dark::CreateApplication();
	app->Run();
	delete app;
}

#endif