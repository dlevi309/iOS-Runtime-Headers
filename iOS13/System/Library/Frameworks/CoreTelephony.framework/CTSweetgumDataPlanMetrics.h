/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, CTSweetgumDataPlanMetricsItem, NSNumber;

@interface CTSweetgumDataPlanMetrics : NSObject <NSSecureCoding> {

	NSDate* _billingCycleEndDate;
	CTSweetgumDataPlanMetricsItem* _domestic;
	long long _regStatus;
	NSNumber* _domesticCapacity;

}

@property (nonatomic,retain) NSDate * billingCycleEndDate;                          //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) CTSweetgumDataPlanMetricsItem * domestic;              //@synthesize domestic=_domestic - In the implementation block
@property (assign,nonatomic) long long regStatus;                                   //@synthesize regStatus=_regStatus - In the implementation block
@property (nonatomic,retain) NSNumber * domesticCapacity;                           //@synthesize domesticCapacity=_domesticCapacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTSweetgumDataPlanMetricsItem *)domestic;
-(NSDate *)billingCycleEndDate;
-(long long)regStatus;
-(NSNumber *)domesticCapacity;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(void)setDomestic:(CTSweetgumDataPlanMetricsItem *)arg1 ;
-(void)setRegStatus:(long long)arg1 ;
-(void)setDomesticCapacity:(NSNumber *)arg1 ;
@end

