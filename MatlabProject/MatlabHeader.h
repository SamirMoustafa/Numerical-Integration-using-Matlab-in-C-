#pragma once

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "engine.h"
#include "MatlabForm.h"

using namespace System::Windows::Forms;

namespace MatlabForm
{
	public ref class CMatlab : public System::Windows::Forms::NativeWindow
	{
	public:
		Engine *eng = engOpen(NULL);
		CMatlab(System::Windows::Forms::Form ^ parentForm) {
			engSetVisible(eng, 0);		// hide matlab engine
		}
	};
}