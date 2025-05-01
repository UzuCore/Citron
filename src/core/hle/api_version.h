// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
// SPDX-FileCopyrightText: Copyright 2025 citron Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/common_types.h"

// This file contains citron's HLE API version constants.

namespace HLE::ApiVersion {

// Horizon OS version constants.

constexpr u8 HOS_VERSION_MAJOR = 20;
constexpr u8 HOS_VERSION_MINOR = 0;
constexpr u8 HOS_VERSION_MICRO = 0;

// NintendoSDK version constants.

constexpr u8 SDK_REVISION_MAJOR = 1;
constexpr u8 SDK_REVISION_MINOR = 0;

constexpr char PLATFORM_STRING[] = "NX";
constexpr char VERSION_HASH[] = "7147e1386c9b6c15d8f14e6ed68c4b9a7f28fb9b";
constexpr char DISPLAY_VERSION[] = "20.0.0";
constexpr char DISPLAY_TITLE[] = "NintendoSDK Firmware for NX 20.0.0-9.0";

// Atmosphere version constants.

constexpr u8 ATMOSPHERE_RELEASE_VERSION_MAJOR = 1;
constexpr u8 ATMOSPHERE_RELEASE_VERSION_MINOR = 8;
constexpr u8 ATMOSPHERE_RELEASE_VERSION_MICRO = 0;

constexpr u32 AtmosphereTargetFirmwareWithRevision(u8 major, u8 minor, u8 micro, u8 rev) {
    return u32{major} << 24 | u32{minor} << 16 | u32{micro} << 8 | u32{rev};
}

constexpr u32 AtmosphereTargetFirmware(u8 major, u8 minor, u8 micro) {
    return AtmosphereTargetFirmwareWithRevision(major, minor, micro, 0);
}

constexpr u32 GetTargetFirmware() {
    return AtmosphereTargetFirmware(HOS_VERSION_MAJOR, HOS_VERSION_MINOR, HOS_VERSION_MICRO);
}

} // namespace HLE::ApiVersion
