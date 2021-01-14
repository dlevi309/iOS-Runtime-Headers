/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, NSDate, NSArray, NSSet;

@interface EKPredicate : CADPredicate <NSSecureCoding> {

	NSString* _uuid;
	NSTimeZone* _timeZone;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _calendars;
	NSString* _title;
	NSSet* _restrictedCalendarRowIDs;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * calendars;                           //@synthesize calendars=_calendars - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * restrictedCalendarRowIDs;              //@synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCalendars:(NSArray *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)calendars;
-(NSString *)title;
-(NSSet *)restrictedCalendarRowIDs;
-(void)setRestrictedCalendarRowIDs:(NSSet *)arg1 ;
@end

