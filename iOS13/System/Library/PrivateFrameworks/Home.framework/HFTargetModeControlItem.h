/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFMultiStateControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@class NSString, HFMultiStateValueSet, HFPowerStateControlItem;

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFTogglableControlItem> {

	NSString* _targetModeCharacteristicType;
	HFMultiStateValueSet* _targetModeValueSet;
	HFPowerStateControlItem* _primaryPowerStateControlItem;

}

@property (nonatomic,readonly) NSString * targetModeCharacteristicType;                             //@synthesize targetModeCharacteristicType=_targetModeCharacteristicType - In the implementation block
@property (nonatomic,readonly) HFMultiStateValueSet * targetModeValueSet;                           //@synthesize targetModeValueSet=_targetModeValueSet - In the implementation block
@property (nonatomic,readonly) HFPowerStateControlItem * primaryPowerStateControlItem;              //@synthesize primaryPowerStateControlItem=_primaryPowerStateControlItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4 ;
-(id)toggleValue;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5 ;
-(HFPowerStateControlItem *)primaryPowerStateControlItem;
-(NSString *)targetModeCharacteristicType;
-(HFMultiStateValueSet *)targetModeValueSet;
@end

