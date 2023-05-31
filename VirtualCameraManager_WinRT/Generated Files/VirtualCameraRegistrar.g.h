// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#include "winrt/VirtualCameraManager_WinRT.h"
namespace winrt::VirtualCameraManager_WinRT::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) VirtualCameraRegistrar_base : implements<D, VirtualCameraManager_WinRT::VirtualCameraRegistrar, I...>
    {
        using base_type = VirtualCameraRegistrar_base;
        using class_type = VirtualCameraManager_WinRT::VirtualCameraRegistrar;
        using implements_type = typename VirtualCameraRegistrar_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"VirtualCameraManager_WinRT.VirtualCameraRegistrar";
        }
    };
}
namespace winrt::VirtualCameraManager_WinRT::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) VirtualCameraRegistrarT : implements<D, winrt::Windows::Foundation::IActivationFactory, winrt::VirtualCameraManager_WinRT::IVirtualCameraRegistrarStatics, I...>
    {
        using instance_type = VirtualCameraManager_WinRT::VirtualCameraRegistrar;

        hstring GetRuntimeClassName() const
        {
            return L"VirtualCameraManager_WinRT.VirtualCameraRegistrar";
        }
        auto RegisterNewVirtualCamera(winrt::VirtualCameraManager_WinRT::VirtualCameraKind const& virtualCameraKind, winrt::VirtualCameraManager_WinRT::VirtualCameraLifetime const& lifetime, winrt::VirtualCameraManager_WinRT::VirtualCameraAccess const& access, hstring const& friendlyName, hstring const& wrappedCameraSymbolicLink)
        {
            return T::RegisterNewVirtualCamera(virtualCameraKind, lifetime, access, friendlyName, wrappedCameraSymbolicLink);
        }
        auto RetakeExistingVirtualCamera(winrt::VirtualCameraManager_WinRT::VirtualCameraKind const& virtualCameraKind, winrt::VirtualCameraManager_WinRT::VirtualCameraLifetime const& lifetime, winrt::VirtualCameraManager_WinRT::VirtualCameraAccess const& access, hstring const& friendlyName, hstring const& symbolicLink, hstring const& wrappedCameraSymbolicLink)
        {
            return T::RetakeExistingVirtualCamera(virtualCameraKind, lifetime, access, friendlyName, symbolicLink, wrappedCameraSymbolicLink);
        }
        auto GetExistingVirtualCameraDevices()
        {
            return T::GetExistingVirtualCameraDevices();
        }
        [[noreturn]] winrt::Windows::Foundation::IInspectable ActivateInstance() const
        {
            throw hresult_not_implemented();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_VIRTUALCAMERAREGISTRAR_XAML_G_H) || __has_include("VirtualCameraRegistrar.xaml.g.h")

#include "VirtualCameraRegistrar.xaml.g.h"

#else

namespace winrt::VirtualCameraManager_WinRT::implementation
{
    template <typename D, typename... I>
    using VirtualCameraRegistrarT = VirtualCameraRegistrar_base<D, I...>;
}

#endif