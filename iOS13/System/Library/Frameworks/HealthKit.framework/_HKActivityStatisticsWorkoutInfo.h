/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3 ;
@end

