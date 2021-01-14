/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CTCarrierSpaceDataPlanMetricsItem *)domestic;
-(long long)regStatus;
-(void)setRegStatus:(long long)arg1 ;
-(void)setDomestic:(CTCarrierSpaceDataPlanMetricsItem *)arg1 ;
-(NSNumber *)domesticCapacity;
-(id)init;
-(void)setDomesticCapacity:(NSNumber *)arg1 ;
-(NSDate *)billingCycleEndDate;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

