#include "Gra.h"


using  namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KiK::Gra forma;
	Application::Run(%forma);
	return 0;
}
  