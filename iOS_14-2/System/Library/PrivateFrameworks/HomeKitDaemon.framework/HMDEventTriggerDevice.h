/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDDevice *)device;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isCurrentDevice;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurrentDeviceForHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 forHome:(id)arg2 ;
@end

