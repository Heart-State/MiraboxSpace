//==============================================================================
/**
@file       ESDSDKDefines.h

@brief      Defines used for the Stream Dock communication

@copyright  (c) 2018, Corsair Memory, Inc.
      This source code is licensed under the MIT-style license found in the
LICENSE file.

**/
//==============================================================================

#pragma once

//
// Common base-interface
//

#define kESDSDKCommonAction "action"
#define kESDSDKCommonEvent "event"
#define kESDSDKCommonContext "context"
#define kESDSDKCommonPayload "payload"
#define kESDSDKCommonDevice "device"
#define kESDSDKCommonDeviceInfo "deviceInfo"

//
// Events
//

#define kESDSDKEventKeyDown "keyDown"
#define kESDSDKEventKeyUp "keyUp"
#define kESDSDKEventWillAppear "willAppear"
#define kESDSDKEventWillDisappear "willDisappear"
#define kESDSDKEventDeviceDidConnect "deviceDidConnect"
#define kESDSDKEventDeviceDidDisconnect "deviceDidDisconnect"
#define kESDSDKEventApplicationDidLaunch "applicationDidLaunch"
#define kESDSDKEventApplicationDidTerminate "applicationDidTerminate"
#define kESDSDKEventSystemDidWakeUp "systemDidWakeUp"
#define kESDSDKEventTitleParametersDidChange "titleParametersDidChange"
#define kESDSDKEventDidReceiveSettings "didReceiveSettings"
#define kESDSDKEventDidReceiveGlobalSettings "didReceiveGlobalSettings"
#define kESDSDKEventPropertyInspectorDidAppear "propertyInspectorDidAppear"
#define kESDSDKEventPropertyInspectorDidDisappear \
  "propertyInspectorDidDisappear"
#define kESDSDKEventDialRotate "dialRotate"
#define kESDSDKEventDialDown "dialDown"
#define kESDSDKEventDialUp "dialUp"
#define kESDSDKEventTouchTap "touchTap"

//
// Functions
//

#define kESDSDKEventSetTitle "setTitle"
#define kESDSDKEventSetImage "setImage"
#define kESDSDKEventShowAlert "showAlert"
#define kESDSDKEventShowOK "showOk"
#define kESDSDKEventGetSettings "getSettings"
#define kESDSDKEventSetSettings "setSettings"
#define kESDSDKEventGetGlobalSettings "getGlobalSettings"
#define kESDSDKEventSetGlobalSettings "setGlobalSettings"
#define kESDSDKEventSetState "setState"
#define kESDSDKEventSwitchToProfile "switchToProfile"
#define kESDSDKEventSendToPropertyInspector "sendToPropertyInspector"
#define kESDSDKEventSendToPlugin "sendToPlugin"
#define kESDSDKEventOpenURL "openUrl"
#define kESDSDKEventLogMessage "logMessage"
#define kESDSDKEventSetFeedback "setFeedback"

//
// Payloads
//

#define kESDSDKPayloadSettings "settings"
#define kESDSDKPayloadCoordinates "coordinates"
#define kESDSDKPayloadState "state"
#define kESDSDKPayloadUserDesiredState "userDesiredState"
#define kESDSDKPayloadTitle "title"
#define kESDSDKPayloadTitleParameters "titleParameters"
#define kESDSDKPayloadImage "image"
#define kESDSDKPayloadURL "url"
#define kESDSDKPayloadTarget "target"
#define kESDSDKPayloadProfile "profile"
#define kESDSDKPayloadApplication "application"
#define kESDSDKPayloadIsInMultiAction "isInMultiAction"
#define kESDSDKPayloadMessage "message"

#define kESDSDKPayloadCoordinatesColumn "column"
#define kESDSDKPayloadCoordinatesRow "row"

//
// Device Info
//

#define kESDSDKDeviceInfoID "id"
#define kESDSDKDeviceInfoType "type"
#define kESDSDKDeviceInfoSize "size"
#define kESDSDKDeviceInfoName "name"

#define kESDSDKDeviceInfoSizeColumns "columns"
#define kESDSDKDeviceInfoSizeRows "rows"

//
// Title Parameters
//

#define kESDSDKTitleParametersShowTitle "showTitle"
#define kESDSDKTitleParametersTitleColor "titleColor"
#define kESDSDKTitleParametersTitleAlignment "titleAlignment"
#define kESDSDKTitleParametersFontFamily "fontFamily"
#define kESDSDKTitleParametersFontSize "fontSize"
#define kESDSDKTitleParametersCustomFontSize "customFontSize"
#define kESDSDKTitleParametersFontStyle "fontStyle"
#define kESDSDKTitleParametersFontUnderline "fontUnderline"

//
// Connection
//

#define kESDSDKConnectSocketFunction "connectElgatoStreamDeckSocket"
#define kESDSDKRegisterPlugin "registerPlugin"
#define kESDSDKRegisterPropertyInspector "registerPropertyInspector"
#define kESDSDKPortParameter "-port"
#define kESDSDKPluginUUIDParameter "-pluginUUID"
#define kESDSDKRegisterEventParameter "-registerEvent"
#define kESDSDKInfoParameter "-info"
#define kESDSDKRegisterUUID "uuid"

#define kESDSDKApplicationInfo "application"
#define kESDSDKPluginInfo "plugin"
#define kESDSDKDevicesInfo "devices"
#define kESDSDKColorsInfo "colors"
#define kESDSDKDevicePixelRatio "devicePixelRatio"

#define kESDSDKApplicationInfoVersion "version"
#define kESDSDKApplicationInfoLanguage "language"
#define kESDSDKApplicationInfoPlatform "platform"

#define kESDSDKApplicationInfoPlatformMac "mac"
#define kESDSDKApplicationInfoPlatformWindows "windows"

#define kESDSDKColorsInfoHighlightColor "highlightColor"
#define kESDSDKColorsInfoMouseDownColor "mouseDownColor"
#define kESDSDKColorsInfoDisabledColor "disabledColor"
#define kESDSDKColorsInfoButtonPressedTextColor "buttonPressedTextColor"
#define kESDSDKColorsInfoButtonPressedBackgroundColor \
  "buttonPressedBackgroundColor"
#define kESDSDKColorsInfoButtonMouseOverBackgroundColor \
  "buttonMouseOverBackgroundColor"
#define kESDSDKColorsInfoButtonPressedBorderColor "buttonPressedBorderColor"

typedef int ESDSDKTarget;
enum {
  kESDSDKTarget_HardwareAndSoftware = 0,
  kESDSDKTarget_HardwareOnly = 1,
  kESDSDKTarget_SoftwareOnly = 2
};

typedef int ESDSDKDeviceType;
enum {
  kESDSDKDeviceType_StreamDeck = 0,
  kESDSDKDeviceType_StreamDeckMini = 1,
  kESDSDKDeviceType_StreamDeckXL = 2,
  kESDSDKDeviceType_StreamDeckMobile = 3,
  kESDSDKDeviceType_CorsairGKeys = 4,
  kESDSDKDeviceType_StreamDeckPedal = 5,
  kESDSDKDeviceType_CorsairVoyager = 6,
  kESDSDKDeviceType_StreamDeckPlus = 7// From volume controller manifest.json
};
