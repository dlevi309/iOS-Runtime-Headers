/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTPlatform.h>

@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {

	NSUserDefaults* _userDefaults;
	RTNanoRegistry* _nanoRegistry;

}
-(id)init;
-(id)systemVersion;
-(id)productType;
-(id)deviceClass;
-(BOOL)internalInstall;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)lowEndHardware;
-(BOOL)iPhoneDevice;
-(BOOL)supportsScenarioTriggers;
-(id)initWithNanoRegistry:(id)arg1 userDefaults:(id)arg2 ;
@end

