/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQuantityDatum.h>

@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum {

	long long _heartRateContext;

}

@property (nonatomic,readonly) HKQuantity * heartRate; 
@property (nonatomic,readonly) long long heartRateContext;              //@synthesize heartRateContext=_heartRateContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)heartRate;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 heartRateContext:(long long)arg4 resumeContext:(id)arg5 ;
-(long long)heartRateContext;
@end

