/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

