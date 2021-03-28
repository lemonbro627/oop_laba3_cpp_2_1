#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ooplaba3cpp;
// »м€пространстваимениз MyForm.h
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // MyForm Цим€классаформы
}