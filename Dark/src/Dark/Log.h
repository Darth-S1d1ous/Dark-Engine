#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Dark {

	class DARK_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define DARK_CORE_FATAL(...)	::Dark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DARK_CORE_ERROR(...)	::Dark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DARK_CORE_WARN(...)		::Dark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DARK_CORE_INFO(...)		::Dark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DARK_CORE_TRACE(...)	::Dark::Log::GetCoreLogger()->error(__VA_ARGS__)

// Client log macros
#define DARK_FATAL(...)			::Dark::Log::GetClientLogger()->error(__VA_ARGS__)
#define DARK_ERROR(...)			::Dark::Log::GetClientLogger()->error(__VA_ARGS__)
#define DARK_WARN(...)			::Dark::Log::GetClientLogger()->error(__VA_ARGS__)
#define DARK_INFO(...)			::Dark::Log::GetClientLogger()->error(__VA_ARGS__)
#define DARK_TRACE(...)			::Dark::Log::GetClientLogger()->error(__VA_ARGS__)