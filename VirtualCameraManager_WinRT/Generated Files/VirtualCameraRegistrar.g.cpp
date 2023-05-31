// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

void* winrt_make_VirtualCameraManager_WinRT_VirtualCameraRegistrar()
{
    return winrt::detach_abi(winrt::make<winrt::VirtualCameraManager_WinRT::factory_implementation::VirtualCameraRegistrar>());
}
WINRT_EXPORT namespace winrt::VirtualCameraManager_WinRT
{
    winrt::VirtualCameraManager_WinRT::VirtualCameraProxy VirtualCameraRegistrar::RegisterNewVirtualCamera(winrt::VirtualCameraManager_WinRT::VirtualCameraKind const& virtualCameraKind, winrt::VirtualCameraManager_WinRT::VirtualCameraLifetime const& lifetime, winrt::VirtualCameraManager_WinRT::VirtualCameraAccess const& access, param::hstring const& friendlyName, param::hstring const& wrappedCameraSymbolicLink)
    {
        return VirtualCameraManager_WinRT::implementation::VirtualCameraRegistrar::RegisterNewVirtualCamera(virtualCameraKind, lifetime, access, friendlyName, wrappedCameraSymbolicLink);
    }
    winrt::VirtualCameraManager_WinRT::VirtualCameraProxy VirtualCameraRegistrar::RetakeExistingVirtualCamera(winrt::VirtualCameraManager_WinRT::VirtualCameraKind const& virtualCameraKind, winrt::VirtualCameraManager_WinRT::VirtualCameraLifetime const& lifetime, winrt::VirtualCameraManager_WinRT::VirtualCameraAccess const& access, param::hstring const& friendlyName, param::hstring const& symbolicLink, param::hstring const& wrappedCameraSymbolicLink)
    {
        return VirtualCameraManager_WinRT::implementation::VirtualCameraRegistrar::RetakeExistingVirtualCamera(virtualCameraKind, lifetime, access, friendlyName, symbolicLink, wrappedCameraSymbolicLink);
    }
    winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Enumeration::DeviceInformation> VirtualCameraRegistrar::GetExistingVirtualCameraDevices()
    {
        return VirtualCameraManager_WinRT::implementation::VirtualCameraRegistrar::GetExistingVirtualCameraDevices();
    }
}