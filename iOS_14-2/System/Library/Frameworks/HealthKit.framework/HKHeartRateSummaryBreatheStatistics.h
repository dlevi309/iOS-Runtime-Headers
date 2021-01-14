/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics {

	HKHeartRateSummaryReading* _finalReading;

}

@property (setter=_setFinalReading:,nonatomic,retain) HKHeartRateSummaryReading * finalReading;              //@synthesize finalReading=_finalReading - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(HKHeartRateSummaryReading *)finalReading;
-(void)_setFinalReading:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

