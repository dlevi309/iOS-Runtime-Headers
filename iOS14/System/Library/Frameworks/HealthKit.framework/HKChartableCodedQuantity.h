/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKQuantity, NSNumber, HKCodedQuantity;

@interface HKChartableCodedQuantity : NSObject <NSCopying> {

	NSArray* _codings;
	HKQuantity* _quantity;
	NSNumber* _rangeLow;
	NSNumber* _rangeHigh;
	HKCodedQuantity* _originalCodedQuantity;
	HKCodedQuantity* _originalRangeLowCodedQuantity;
	HKCodedQuantity* _originalRangeHighCodedQuantity;

}

@property (nonatomic,copy) HKCodedQuantity * originalCodedQuantity;                       //@synthesize originalCodedQuantity=_originalCodedQuantity - In the implementation block
@property (nonatomic,copy) HKCodedQuantity * originalRangeLowCodedQuantity;               //@synthesize originalRangeLowCodedQuantity=_originalRangeLowCodedQuantity - In the implementation block
@property (nonatomic,copy) HKCodedQuantity * originalRangeHighCodedQuantity;              //@synthesize originalRangeHighCodedQuantity=_originalRangeHighCodedQuantity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * codings;                                    //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * quantity;                                //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,readonly) BOOL isInRange; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) NSNumber * rangeLow;                                  //@synthesize rangeLow=_rangeLow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rangeHigh;                                 //@synthesize rangeHigh=_rangeHigh - In the implementation block
+(id)chartableCodedQuantityWithCodings:(id)arg1 originalCodedQuantity:(id)arg2 originalRangeLowCodedQuantity:(id)arg3 originalRangeHighCodedQuantity:(id)arg4 error:(id*)arg5 ;
+(id)_valueFromCodedQuantity:(id)arg1 inUnit:(id)arg2 error:(id*)arg3 ;
+(id)converter;
-(double)doubleValue;
-(id)init;
-(NSNumber *)rangeLow;
-(NSArray *)codings;
-(HKQuantity *)quantity;
-(BOOL)hasRange;
-(id)description;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(BOOL)isInRange;
-(NSNumber *)rangeHigh;
-(HKCodedQuantity *)originalCodedQuantity;
-(id)chartableCodedQuantityInUnit:(id)arg1 error:(id*)arg2 ;
-(id)initWithCodings:(id)arg1 quantity:(id)arg2 rangeLow:(id)arg3 rangeHigh:(id)arg4 ;
-(id)chartableCodedQuantityInUnit:(id)arg1 adoptUnitIfNullUnit:(BOOL)arg2 error:(id*)arg3 ;
-(void)setOriginalCodedQuantity:(HKCodedQuantity *)arg1 ;
-(HKCodedQuantity *)originalRangeLowCodedQuantity;
-(void)setOriginalRangeLowCodedQuantity:(HKCodedQuantity *)arg1 ;
-(HKCodedQuantity *)originalRangeHighCodedQuantity;
-(void)setOriginalRangeHighCodedQuantity:(HKCodedQuantity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleValueForUnit:(id)arg1 ;
@end

