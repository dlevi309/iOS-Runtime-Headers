/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTPlatform.h>

@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {

	NSUserDefaults* _userDefaults;
	RTNanoRegistry* _nanoRegistry;

}
-(id)systemVersion;
-(id)init;
-(id)productType;
-(id)deviceClass;
-(BOOL)iPhonePlatform;
-(BOOL)isTinkerPaired;
-(BOOL)simulatorPlatform;
-(BOOL)watchPlatform;
-(BOOL)supportsScenarioTriggers;
-(BOOL)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)macOSPlatform;
-(BOOL)iPhoneDevice;
-(BOOL)internalInstall;
-(id)initWithNanoRegistry:(id)arg1 userDefaults:(id)arg2 ;
-(BOOL)supportsMultiUser;
-(BOOL)lowEndHardware;
@end

