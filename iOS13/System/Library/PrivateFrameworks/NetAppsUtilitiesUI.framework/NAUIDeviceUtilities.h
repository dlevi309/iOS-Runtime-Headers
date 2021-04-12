/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/


#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
@interface NAUIDeviceUtilities : NSObject
+(id)operatingSystemName;
+(id)productVersion;
+(id)productBuildVersion;
+(id)productType;
+(id)productHardwareModel;
+(id)productHardwareModelName;
+(id)productClass;
+(int)deviceClass;
+(id)localizedProductName;
+(id)uniqueDeviceIdentifier;
+(BOOL)hasOrbCapability;
+(double)mainScreenScale;
+(BOOL)naui_shouldUseLargeiPadLayout;
+(BOOL)naui_shouldUseLargeiPadLayoutForSize:(CGSize)arg1 ;
+(BOOL)naui_isPad;
+(BOOL)naui_isUsingLandscapeOrientation;
-(id)init;
@end

