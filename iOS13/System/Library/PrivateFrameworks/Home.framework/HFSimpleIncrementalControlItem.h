/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class NSString, NSNumber;

@interface HFSimpleIncrementalControlItem : HFControlItem {

	NSString* _incrementalCharacteristicType;

}

@property (nonatomic,copy,readonly) NSString * incrementalCharacteristicType;              //@synthesize incrementalCharacteristicType=_incrementalCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue; 
@property (nonatomic,readonly) NSNumber * maxValue; 
@property (nonatomic,readonly) NSNumber * stepValue; 
+(Class)valueClass;
-(id)_metadata;
-(NSNumber *)stepValue;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(NSString *)incrementalCharacteristicType;
@end

