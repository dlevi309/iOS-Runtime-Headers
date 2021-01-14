/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKCumulativeQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySeriesSample : HKCumulativeQuantitySample {

	HKQuantity* _sum;

}

@property (copy,readonly) HKQuantity * sum;              //@synthesize sum=_sum - In the implementation block
-(HKQuantity *)sum;
@end

