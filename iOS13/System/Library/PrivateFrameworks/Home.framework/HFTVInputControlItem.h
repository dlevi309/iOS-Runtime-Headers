/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class NSArray;

@interface HFTVInputControlItem : HFControlItem {

	NSArray* _inputs;

}

@property (nonatomic,copy,readonly) NSArray * inputs;              //@synthesize inputs=_inputs - In the implementation block
+(Class)valueClass;
+(id)inputCharacteristicTypes;
+(id)readOnlyOptionalInputCharacteristicTypes;
+(/*^block*/id)_inputSourceValueComparatorForTelevisionProfile:(id)arg1 ;
-(NSArray *)inputs;
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)readValueAndPopulateStandardResults;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
-(id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2 ;
@end

