#include "MatlabForm.h"

using namespace MatlabProject;

[STAThreadAttribute]

void main(array<System::String ^> ^args)
{
	// Enabling Windows 10 visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MatlabProject::MatlabForm());

}