/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantitySample *)quantitySample;
-(void)setQuantitySample:(HKQuantitySample *)arg1 ;
-(id)initWithQuantitySample:(id)arg1 ;
@end

