/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

