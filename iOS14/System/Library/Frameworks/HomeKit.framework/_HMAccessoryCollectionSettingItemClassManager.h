/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSMutableDictionary;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;

}
+(id)sharedManager;
+(id)defaultItemValueClasses;
-(id)init;
-(id)itemValueClassesForKeyPath:(id)arg1 ;
-(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
@end

