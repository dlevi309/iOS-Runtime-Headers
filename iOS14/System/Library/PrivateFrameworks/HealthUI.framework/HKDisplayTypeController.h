/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/_HKWheelchairUseCharacteristicCacheObserver.h>

@class _HKWheelchairUseCharacteristicCache, NSArray, NSDictionary;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {

	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	NSArray* _displayTypes;
	NSDictionary* _displayTypesByIdentifier;
	NSDictionary* _displayTypesByCategoryIdentifier;
	NSDictionary* _displayTypesByObjectType;

}
+(id)sharedInstance;
+(id)sharedInstanceForHealthStore:(id)arg1 ;
+(id)controllers;
+(os_unfair_lock_s)controllersLock;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(id)displayTypeForObjectType:(id)arg1 ;
-(id)displayTypeWithIdentifier:(id)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg1 ;
-(id)allDisplayTypes;
-(id)displayTypesForCategoryIdentifier:(long long)arg1 ;
@end

