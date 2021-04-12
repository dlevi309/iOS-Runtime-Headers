/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@interface MGWrapper : NSObject
+(id)sharedMGWrapper;
-(id)deviceClass;
-(BOOL)isHeySiriAlwaysOn;
-(BOOL)isDeviceIPad;
-(BOOL)supportsSideButtonActivation;
-(BOOL)MGIsDeviceOneOfType:(long long)arg1 ;
-(BOOL)isRunningOnSimulator;
-(BOOL)MGIsDeviceOneOfTypes:(id)arg1 ;
-(long long)getSimulatorDevice;
-(id)deviceClassiPad;
-(id)deviceClassiPhone;
-(BOOL)isPlusIPhone;
-(BOOL)isSmallIPhone;
-(BOOL)isSmallestIPhone;
@end

