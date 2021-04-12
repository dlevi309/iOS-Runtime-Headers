/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics {

	HKHeartRateSummaryReading* _finalReading;

}

@property (setter=_setFinalReading:,nonatomic,retain) HKHeartRateSummaryReading * finalReading;              //@synthesize finalReading=_finalReading - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKHeartRateSummaryReading *)finalReading;
-(void)_setFinalReading:(id)arg1 ;
@end

