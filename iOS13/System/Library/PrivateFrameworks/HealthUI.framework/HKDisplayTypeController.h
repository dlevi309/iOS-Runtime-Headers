/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

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
-(id)init;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(id)displayTypeForObjectType:(id)arg1 ;
-(id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg1 ;
-(id)displayTypeWithIdentifier:(id)arg1 ;
-(id)displayTypesForCategoryIdentifier:(long long)arg1 ;
-(id)allDisplayTypes;
@end

