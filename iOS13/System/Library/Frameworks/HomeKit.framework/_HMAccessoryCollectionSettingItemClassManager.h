/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

