/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HKReferenceRangeViewData : NSObject <NSCopying> {

	BOOL _useOutOfRangeValueColor;
	NSString* _valueString;
	NSString* _unitString;
	NSString* _rangeLowString;
	NSString* _rangeHighString;
	NSNumber* _value;
	NSNumber* _rangeLow;
	NSNumber* _rangeHigh;

}

@property (nonatomic,copy) NSString * valueString;                      //@synthesize valueString=_valueString - In the implementation block
@property (nonatomic,copy) NSString * unitString;                       //@synthesize unitString=_unitString - In the implementation block
@property (nonatomic,copy) NSString * rangeLowString;                   //@synthesize rangeLowString=_rangeLowString - In the implementation block
@property (nonatomic,copy) NSString * rangeHighString;                  //@synthesize rangeHighString=_rangeHighString - In the implementation block
@property (nonatomic,copy) NSNumber * value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSNumber * rangeLow;                         //@synthesize rangeLow=_rangeLow - In the implementation block
@property (nonatomic,copy) NSNumber * rangeHigh;                        //@synthesize rangeHigh=_rangeHigh - In the implementation block
@property (assign,nonatomic) BOOL useOutOfRangeValueColor;              //@synthesize useOutOfRangeValueColor=_useOutOfRangeValueColor - In the implementation block
+(id)referenceRangeViewDataFromInspectableValueInRange:(id)arg1 ;
+(id)_codedQuantityForValueCollection:(id)arg1 ;
+(id)_codedQuantityForValue:(id)arg1 ;
-(NSString *)valueString;
-(NSString *)unitString;
-(void)setUnitString:(NSString *)arg1 ;
-(NSNumber *)rangeLow;
-(void)setValueString:(NSString *)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)rangeHigh;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseOutOfRangeValueColor:(BOOL)arg1 ;
-(void)setRangeLow:(NSNumber *)arg1 ;
-(void)setRangeLowString:(NSString *)arg1 ;
-(void)setRangeHigh:(NSNumber *)arg1 ;
-(void)setRangeHighString:(NSString *)arg1 ;
-(NSNumber *)value;
-(NSString *)rangeLowString;
-(NSString *)rangeHighString;
-(BOOL)useOutOfRangeValueColor;
@end

