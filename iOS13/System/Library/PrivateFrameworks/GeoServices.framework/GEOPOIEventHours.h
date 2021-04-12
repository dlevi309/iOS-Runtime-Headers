/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)hours;
-(NSDateInterval *)dateInterval;
-(void)setHours:(NSArray *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithDateTimeRange:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 ;
@end

