/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPStatePersistence.h>

@protocol HKSPUserDefaults;
@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence> {

	id<HKSPUserDefaults> _userDefaults;

}

@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
-(id)initWithUserDefaults:(id)arg1 ;
-(id<HKSPUserDefaults>)userDefaults;
-(BOOL)savePersistentState:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)loadPersistentStateForIdentifier:(id)arg1 error:(id*)arg2 ;
@end

