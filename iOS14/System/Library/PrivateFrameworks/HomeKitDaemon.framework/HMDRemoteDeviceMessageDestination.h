/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination {

	HMDDevice* _device;
	HMDDeviceHandle* _preferredHandle;

}

@property (nonatomic,copy) HMDDeviceHandle * preferredHandle;              //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
+(id)shortDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(HMDDevice *)device;
-(id)description;
-(HMDDeviceHandle *)preferredHandle;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setPreferredHandle:(HMDDeviceHandle *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTarget:(id)arg1 device:(id)arg2 ;
-(id)remoteDestinationString;
@end

