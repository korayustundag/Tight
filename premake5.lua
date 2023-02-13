workspace "Tight"
	architecture "x64"

	configirations
	{
		"Debug",
		"Release",
		"Dist"
	}

outdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Tight"
	location "Tight"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outdir .. "")

NOT FINISED

	TIGHT_PLATFORM_WINDOWS;TIGHT_BUILD_DLL;