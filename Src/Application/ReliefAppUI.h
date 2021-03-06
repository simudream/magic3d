#pragma once
#include "MyGUI.h"

namespace MagicApp
{
    class ReliefAppUI
    {
    public:
        ReliefAppUI();
        ~ReliefAppUI();

        void Setup();
        void Shutdown();

    private:
        void ImportMesh3D(MyGUI::Widget* pSender);
        void GenerateRelief(MyGUI::Widget* pSender);
        void ExportReliefMesh(MyGUI::Widget* pSender);
        void BackHome(MyGUI::Widget* pSender);
        void Contact(MyGUI::Widget* pSender);

    private:
        MyGUI::VectorWidgetPtr mRoot;
    };
}