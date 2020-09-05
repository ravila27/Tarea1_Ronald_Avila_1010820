#include "MyForm.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Tarea1RonaldAvila1010820::MyForm mainform;
	Application::Run(% mainform);


	return 0;
}

