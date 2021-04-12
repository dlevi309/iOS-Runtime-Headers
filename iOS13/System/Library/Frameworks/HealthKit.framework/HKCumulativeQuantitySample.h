/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (setter=_setSumQuantity:,nonatomic,copy) HKQuantity * sumQuantity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
-(HKQuantity *)sumQuantity;
-(void)_setSumQuantity:(id)arg1 ;
-(id)sum;
@end

