#pragma once
#include "MyGUI.h"

namespace MagicApp
{
    class PointShopAppUI
    {
    public:
        PointShopAppUI();
        ~PointShopAppUI();

        void Setup();
        void Shutdown();
        void SetupFromPointsetInput(bool hasNormal, int pointNum);

    private:
        void OpenPointSet(MyGUI::Widget* pSender);
        void SavePointSet(MyGUI::Widget* pSender);
        void CalPointSetNormal(MyGUI::Widget* pSender);
        void FlipPointSetNormal(MyGUI::Widget* pSender);
        void FilterPointSet(MyGUI::Widget* pSender);
        void SmoothPointSet(MyGUI::Widget* pSender);
        void SamplePointSet(MyGUI::Widget* pSender);
        void RemoveOutlier(MyGUI::Widget* pSender);
        void Reconstruction(MyGUI::Widget* pSender);
        void AddNoise(MyGUI::Widget* pSender);
        void ViewPointSet(MyGUI::Widget* pSender);
        void SelectPointSet(MyGUI::Widget* pSender);
        void RectangleSelect(MyGUI::Widget* pSender);
        void CycleSelect(MyGUI::Widget* pSender);
        void ClearSelect(MyGUI::Widget* pSender);
        void DeleteSelect(MyGUI::Widget* pSender);
        void SetPickIgnoreBack(MyGUI::Widget* pSender);
        void BackToHome(MyGUI::Widget* pSender);
        void Contact(MyGUI::Widget* pSender);

    private:
        MyGUI::VectorWidgetPtr mRoot;
        bool mPickIgnoreBack;
    };


}