/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <CalendarFoundation/CalDateRangeProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3 ;
+(id)rangeWithRange:(id)arg1 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 components:(id)arg3 calendar:(id)arg4 ;
+(id)rangeWithStartDate:(id)arg1 duration:(double)arg2 ;
+(BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3 ;
+(BOOL)range:(id)arg1 intersectsRange:(id)arg2 ;
+(BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 allowSinglePointIntersection:(BOOL)arg4 ;
+(BOOL)range:(id)arg1 intersectsRange:(id)arg2 allowSinglePointIntersection:(BOOL)arg3 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 allowSinglePointIntersection:(BOOL)arg5 ;
+(id)rangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(void)setDuration:(double)arg1 ;
-(id)unionRange:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(BOOL)intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2 ;
-(id)briefDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(id)midpoint;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)containsRange:(id)arg1 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(unsigned long long)hash;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStartDate:(id)arg1 duration:(double)arg2 ;
-(id)midnightsForRangeInTimeZoneString:(id)arg1 ;
-(id)subtractRange:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_calculateMidnightsInCalendar:(id)arg1 ;
@end

