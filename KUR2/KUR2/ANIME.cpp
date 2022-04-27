#include "ANIME.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    KUR2::ANIME form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}

