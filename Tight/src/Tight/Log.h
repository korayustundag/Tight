#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"


namespace Tight {
	class TIGHT_API Log
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

// Core Log Macros
#define TIGHT_CORE_TRACE(...)	::Tight::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TIGHT_CORE_INFO(...)	::Tight::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TIGHT_CORE_WARN(...)	::Tight::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TIGHT_CORE_ERROR(...)	::Tight::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TIGHT_CORE_FATAL(...)	::Tight::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define TIGHT_TRACE(...)		::Tight::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TIGHT_INFO(...)			::Tight::Log::GetClientLogger()->info(__VA_ARGS__)
#define TIGHT_WARN(...)			::Tight::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TIGHT_ERROR(...)		::Tight::Log::GetClientLogger()->error(__VA_ARGS__)
#define TIGHT_FATAL(...)		::Tight::Log::GetClientLogger()->fatal(__VA_ARGS__)