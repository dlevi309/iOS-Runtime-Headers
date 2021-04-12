/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithNumerator:(id)arg1 denominator:(id)arg2 ;
-(HKCodedQuantity *)numerator;
-(HKCodedQuantity *)denominator;
@end

