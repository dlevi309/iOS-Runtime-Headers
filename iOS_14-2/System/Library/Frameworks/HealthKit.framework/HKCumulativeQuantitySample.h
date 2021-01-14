/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (setter=_setSumQuantity:,nonatomic,copy) HKQuantity * sumQuantity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
-(id)sum;
-(void)_setSumQuantity:(id)arg1 ;
-(HKQuantity *)sumQuantity;
@end

