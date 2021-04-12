/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class NSString, HFMultiStateValueSet;

@interface HFMultiStateControlItem : HFControlItem {

	NSString* _multiStateCharacteristicType;
	HFMultiStateValueSet* _possibleValueSet;

}

@property (nonatomic,copy,readonly) NSString * multiStateCharacteristicType;              //@synthesize multiStateCharacteristicType=_multiStateCharacteristicType - In the implementation block
@property (nonatomic,copy,readonly) HFMultiStateValueSet * possibleValueSet;              //@synthesize possibleValueSet=_possibleValueSet - In the implementation block
+(Class)valueClass;
+(id)na_identity;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(HFMultiStateValueSet *)possibleValueSet;
-(id)initWithValueSource:(id)arg1 multiStateCharacteristicType:(id)arg2 allCharacteristicOptions:(id)arg3 possibleValueSet:(id)arg4 displayResults:(id)arg5 ;
-(NSString *)multiStateCharacteristicType;
@end

