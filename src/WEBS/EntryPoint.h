#pragma once

#ifdef WBS_PLATFORM_WINDOWS

extern WEBS::Application* WEBS::CreateApplication();

int main(int argc, char** argv)
{
	auto app = WEBS::CreateApplication();
	app->Run();
	delete app;
}

#endif