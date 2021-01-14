/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKSource;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKSource* _source;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKSource * source;               //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setSource:(HKSource *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
@end

