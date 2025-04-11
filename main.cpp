#include "pch.h"
//#include <mfapi.h>
//#include <mfvirtualcamera.h>
//#include <iostream>
//#include "Globals.h"
//
//int main() {
//    IMFVirtualCamera* pVirtualCamera = nullptr;
//
//    HRESULT hr = MFCreateVirtualCamera(
//        MFVirtualCameraType_SoftwareCameraSource,
//        MFVirtualCameraLifetime_System,
//        L"Text Detection Virtual Camera",
//        L"YourCompany",
//        CLSID_TextBlurVCam,
//        &pVirtualCamera);
//
//    if (SUCCEEDED(hr)) {
//        hr = pVirtualCamera->Start();
//
//        if (SUCCEEDED(hr)) {
//            std::cout << "Virtual camera started successfully." << std::endl;
//            std::cin.get(); // Wait for user input to stop the camera.
//
//            pVirtualCamera->Stop();
//        }
//
//        pVirtualCamera->Release();
//    }
//
//    return hr == S_OK ? 0 : -1;
//}