/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject {

	unsigned long long _type;
	HMDevice* _customDevice;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HMDevice * customDevice;              //@synthesize customDevice=_customDevice - In the implementation block
+(id)currentDevice;
+(id)FMFDevice;
+(id)customDeviceWithHMDevice:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2 ;
-(HMDevice *)customDevice;
@end

