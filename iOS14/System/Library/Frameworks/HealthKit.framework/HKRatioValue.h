/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKCodedQuantity;

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying> {

	HKCodedQuantity* _numerator;
	HKCodedQuantity* _denominator;

}

@property (nonatomic,copy,readonly) HKCodedQuantity * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,copy,readonly) HKCodedQuantity * denominator;              //@synthesize denominator=_denominator - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(HKCodedQuantity *)numerator;
-(HKCodedQuantity *)denominator;
-(id)_initWithNumerator:(id)arg1 denominator:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

