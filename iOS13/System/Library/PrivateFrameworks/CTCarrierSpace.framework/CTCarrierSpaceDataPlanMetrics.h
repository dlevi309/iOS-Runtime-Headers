/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, CTCarrierSpaceDataPlanMetricsItem, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding> {

	NSDate* _billingCycleEndDate;
	CTCarrierSpaceDataPlanMetricsItem* _domestic;
	long long _regStatus;
	NSNumber* _domesticCapacity;

}

@property (nonatomic,retain) NSDate * billingCycleEndDate;                              //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceDataPlanMetricsItem * domestic;              //@synthesize domestic=_domestic - In the implementation block
@property (assign,nonatomic) long long regStatus;                                       //@synthesize regStatus=_regStatus - In the implementation block
@property (nonatomic,retain) NSNumber * domesticCapacity;                               //@synthesize domesticCapacity=_domesticCapacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTCarrierSpaceDataPlanMetricsItem *)domestic;
-(NSDate *)billingCycleEndDate;
-(long long)regStatus;
-(NSNumber *)domesticCapacity;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(void)setDomestic:(CTCarrierSpaceDataPlanMetricsItem *)arg1 ;
-(void)setRegStatus:(long long)arg1 ;
-(void)setDomesticCapacity:(NSNumber *)arg1 ;
@end

