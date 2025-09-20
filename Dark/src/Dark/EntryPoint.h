#pragma once

#ifdef DARK_PLATFORM_WINDOWS

extern Dark::Application* Dark::CreateApplication();
	
int main(int argc, char** argv)
{
	Dark::Log::Init();
	DARK_CORE_WARN("Initialized Log!");
	DARK_INFO("Hello! This is Dark Engine!");

	auto app = Dark::CreateApplication();
	app->Run();
	delete app;
}

#endif