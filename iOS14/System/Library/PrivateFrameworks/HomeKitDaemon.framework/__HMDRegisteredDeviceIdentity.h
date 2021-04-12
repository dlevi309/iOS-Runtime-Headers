/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity {

	HMDDevice* _device;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithIdentity:(id)arg1 device:(id)arg2 ;
@end

