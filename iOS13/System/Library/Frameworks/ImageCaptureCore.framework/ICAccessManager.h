/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@interface ICAccessManager : NSObject
+(id)bundleIdentifiersAccessingExternalMediaDevices;
+(void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
+(void)updateBundleIdentifierAccessingExternalMediaDevices:(id)arg1 withStatus:(BOOL)arg2 ;
+(id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+(void)addBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
+(BOOL)validateBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
@end

