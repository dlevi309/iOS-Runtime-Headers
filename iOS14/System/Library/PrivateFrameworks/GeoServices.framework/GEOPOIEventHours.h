/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSArray;

@interface GEOPOIEventHours : NSObject <NSSecureCoding> {

	NSDateInterval* _dateInterval;
	NSArray* _hours;

}

@property (nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSArray * hours;                            //@synthesize hours=_hours - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventHoursForDateTimeRanges:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHours:(NSArray *)arg1 ;
-(NSArray *)hours;
-(id)initWithDateTimeRange:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 ;
@end

