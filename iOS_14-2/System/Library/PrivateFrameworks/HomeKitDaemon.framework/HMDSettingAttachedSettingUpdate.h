/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMSettingValue;

@interface HMDSettingAttachedSettingUpdate : HMFObject {

	NSString* _keyPath;
	HMSettingValue* _settingValue;

}

@property (readonly) NSString * keyPath;                         //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) HMSettingValue * settingValue;              //@synthesize settingValue=_settingValue - In the implementation block
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 settingValue:(id)arg2 ;
-(HMSettingValue *)settingValue;
@end

