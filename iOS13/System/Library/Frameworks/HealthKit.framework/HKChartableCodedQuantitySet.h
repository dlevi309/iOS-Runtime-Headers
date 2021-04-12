/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDate, HKUnit;

@interface HKChartableCodedQuantitySet : NSObject <NSCopying> {

	NSArray* _codings;
	NSDate* _date;
	NSArray* _quantities;

}

@property (nonatomic,copy,readonly) NSArray * codings;                    //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSArray * quantities;                 //@synthesize quantities=_quantities - In the implementation block
@property (nonatomic,copy,readonly) HKUnit * compatibleUnit; 
+(id)setWithChartableQuantity:(id)arg1 date:(id)arg2 ;
+(id)setWithMedicalCodings:(id)arg1 quantities:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSArray *)codings;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(id)_initWithMedicalCodings:(id)arg1 date:(id)arg2 quantities:(id)arg3 ;
-(HKUnit *)compatibleUnit;
-(id)chartableCodedQuantitySetByChangingDate:(id)arg1 ;
-(void)addChartableCodedQuantities:(id)arg1 ;
-(id)chartableCodedQuantitySetConvertedToUnit:(id)arg1 error:(id*)arg2 ;
-(double)minValueForUnit:(id)arg1 ;
-(double)maxValueForUnit:(id)arg1 ;
-(double)minValueIncludingReferenceRangeForUnit:(id)arg1 ;
-(double)maxValueIncludingReferenceRangeForUnit:(id)arg1 ;
-(NSArray *)quantities;
@end

