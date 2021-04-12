/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@protocol HFPrimaryStateWriter;
@class HFControlItem, NSString, NSNumber;

@interface HFIncrementalStateControlItem : HFControlItem <HFTogglableControlItem> {

	HFControlItem*<HFPrimaryStateWriter> _primaryStateControlItem;
	NSString* _incrementalCharacteristicType;

}

@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> primaryStateControlItem;              //@synthesize primaryStateControlItem=_primaryStateControlItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * incrementalCharacteristicType;                             //@synthesize incrementalCharacteristicType=_incrementalCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * stepValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
+(id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2 ;
+(id)readOnlyCharacteristicTypes;
-(NSNumber *)stepValue;
-(id)updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)toggleValue;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(NSString *)incrementalCharacteristicType;
-(id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4 ;
-(HFControlItem*<HFPrimaryStateWriter>)primaryStateControlItem;
-(id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)togglePrimaryAndIncrementalState;
@end

