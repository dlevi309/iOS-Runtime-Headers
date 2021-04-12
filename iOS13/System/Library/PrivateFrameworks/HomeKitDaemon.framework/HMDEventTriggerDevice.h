/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject {

	BOOL _currentDevice;
	HMDDevice* _device;

}

@property (nonatomic,readonly) HMDDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (getter=isCurrentDevice,nonatomic,readonly) BOOL currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HMDDevice *)device;
-(BOOL)isCurrentDevice;
-(id)initWithCurrentDeviceForHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 forHome:(id)arg2 ;
@end

