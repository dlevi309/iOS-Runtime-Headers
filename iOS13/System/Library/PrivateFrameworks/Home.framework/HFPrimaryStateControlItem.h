/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFPrimaryStateWriter.h>

@class NSString, HFValueTransformer;

@interface HFPrimaryStateControlItem : HFControlItem <HFPrimaryStateWriter> {

	NSString* _primaryStateCharacteristicType;
	HFValueTransformer* _valueTransformer;

}

@property (nonatomic,copy,readonly) NSString * primaryStateCharacteristicType;              //@synthesize primaryStateCharacteristicType=_primaryStateCharacteristicType - In the implementation block
@property (nonatomic,readonly) HFValueTransformer * valueTransformer;                       //@synthesize valueTransformer=_valueTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(HFValueTransformer *)valueTransformer;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)toggleValue;
-(id)writePrimaryState:(long long)arg1 ;
-(id)togglePrimaryState;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4 ;
-(NSString *)primaryStateCharacteristicType;
@end

