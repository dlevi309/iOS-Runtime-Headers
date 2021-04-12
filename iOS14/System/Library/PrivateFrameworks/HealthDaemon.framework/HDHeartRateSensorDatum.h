/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)heartRateContext;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 heartRateContext:(long long)arg4 resumeContext:(id)arg5 ;
-(HKQuantity *)heartRate;
@end

