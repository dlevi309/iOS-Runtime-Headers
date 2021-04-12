/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaAccessoryAdvertisement.h>

@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement {

	HMDDevice* _device;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
-(id)description;
-(HMDDevice *)device;
-(id)initWithOutputDevice:(id)arg1 device:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 device:(id)arg4 ;
@end

