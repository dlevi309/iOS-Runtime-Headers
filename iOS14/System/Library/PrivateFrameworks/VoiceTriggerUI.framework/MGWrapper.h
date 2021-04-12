/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@interface MGWrapper : NSObject
+(id)sharedMGWrapper;
-(BOOL)isHeySiriAlwaysOn;
-(id)deviceClass;
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
-(BOOL)isDeviceIPhone;
-(BOOL)isDeviceIPod;
@end

