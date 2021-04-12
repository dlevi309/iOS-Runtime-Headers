/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSArray;

@interface HMDAccessorySettingTarget : HMFObject {

	HMDAccessory* _systemOwnerAccessory;
	HMDAccessory* _settingOwnerAccessory;
	NSArray* _others;

}

@property (nonatomic,readonly) HMDAccessory * systemOwnerAccessory;               //@synthesize systemOwnerAccessory=_systemOwnerAccessory - In the implementation block
@property (nonatomic,readonly) HMDAccessory * settingOwnerAccessory;              //@synthesize settingOwnerAccessory=_settingOwnerAccessory - In the implementation block
@property (nonatomic,readonly) NSArray * others;                                  //@synthesize others=_others - In the implementation block
-(id)initWithMediaSystem:(id)arg1 ;
-(id)initWithMediaSystem:(id)arg1 accessory:(id)arg2 ;
-(HMDAccessory *)systemOwnerAccessory;
-(HMDAccessory *)settingOwnerAccessory;
-(NSArray *)others;
@end

