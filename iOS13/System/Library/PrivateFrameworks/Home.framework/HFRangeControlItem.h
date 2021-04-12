/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class NSSet, NSString, HFNumberValueConstraints, NSNumber;

@interface HFRangeControlItem : HFControlItem {

	NSSet* _targetCharacteristicTypes;
	NSString* _minimumCharacteristicType;
	NSString* _maximumCharacteristicType;

}

@property (nonatomic,copy,readonly) NSSet * targetCharacteristicTypes;                          //@synthesize targetCharacteristicTypes=_targetCharacteristicTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * minimumCharacteristicType;                       //@synthesize minimumCharacteristicType=_minimumCharacteristicType - In the implementation block
@property (nonatomic,copy,readonly) NSString * maximumCharacteristicType;                       //@synthesize maximumCharacteristicType=_maximumCharacteristicType - In the implementation block
@property (nonatomic,readonly) HFNumberValueConstraints * minimumValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * maximumValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * targetValueConstraints; 
@property (nonatomic,copy,readonly) NSNumber * maximumValue; 
@property (nonatomic,copy,readonly) NSNumber * minimumValue; 
@property (nonatomic,copy,readonly) NSNumber * stepValue; 
+(Class)valueClass;
+(id)readOnlyCharacteristicTypes;
+(BOOL)_hasWritableCharacteristicsOfType:(id)arg1 valueSource:(id)arg2 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)stepValue;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 targetCharacteristicTypes:(id)arg2 minimumCharacteristicType:(id)arg3 maximumCharacteristicType:(id)arg4 displayResults:(id)arg5 ;
-(NSSet *)targetCharacteristicTypes;
-(NSString *)minimumCharacteristicType;
-(NSString *)maximumCharacteristicType;
-(id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1 ;
-(unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1 ;
-(id)numberValueFormatter;
-(id)_minimumCharacteristicTypeMetadata;
-(id)_maximumCharacteristicTypeMetadata;
-(id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)arg1 ;
-(id)minimumCharacteristicTypeStepValue;
-(id)maximumCharacteristicTypeStepValue;
-(HFNumberValueConstraints *)minimumValueConstraints;
-(HFNumberValueConstraints *)maximumValueConstraints;
-(HFNumberValueConstraints *)targetValueConstraints;
@end

