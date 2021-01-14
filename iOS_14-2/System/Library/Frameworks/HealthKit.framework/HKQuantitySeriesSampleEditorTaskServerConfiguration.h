/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantitySample;

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration {

	HKQuantitySample* _quantitySample;

}

@property (nonatomic,copy) HKQuantitySample * quantitySample;              //@synthesize quantitySample=_quantitySample - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantitySample *)quantitySample;
-(void)setQuantitySample:(HKQuantitySample *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQuantitySample:(id)arg1 ;
@end

