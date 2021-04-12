/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class HMAccessory;

@interface HFAccessoryControlItem : HFControlItem {

	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(Class)valueClass;
-(HMAccessory *)accessory;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3 ;
@end

