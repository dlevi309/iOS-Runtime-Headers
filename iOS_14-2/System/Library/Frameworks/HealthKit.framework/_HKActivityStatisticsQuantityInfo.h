/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKQuantity;

@interface _HKActivityStatisticsQuantityInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _quantityValue;

}

@property (nonatomic,retain) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * quantityValue;              //@synthesize quantityValue=_quantityValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(HKQuantity *)quantityValue;
-(void)setQuantityValue:(HKQuantity *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

