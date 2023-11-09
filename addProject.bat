@echo off
reg add "HKEY_CURRENT_USER\SOFTWARE\Epic Games\Unreal Engine\Builds" /f /v "%1" /t REG_SZ /d "%~dp0\"