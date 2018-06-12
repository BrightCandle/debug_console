enableDebugConsole = 2;

class CfgPatches
{
	class cf_debugConsole
		{
			units[] = { };
			weapons[] = { };
			requiredAddons[] = {};
			version = "1.0";
			versionStr = "1.0";
			versionDesc="CFO_DEBUGCONSOLE";
			versionAr[] = {1,0};
			author = "BrightCandle";
		};
};

class CfgFunctions
{
	class cf_debugConsole
	{
		class init
		{
			class cf_debugconsole_init
			{
				file ="cf_debugConsole\init.sqf";
				postInit = 1;
			};
		};
	};
};