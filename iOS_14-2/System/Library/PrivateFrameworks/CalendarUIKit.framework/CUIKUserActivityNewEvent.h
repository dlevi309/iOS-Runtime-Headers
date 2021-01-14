/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate, NSTimeZone, NSString, NSURL;

@interface CUIKUserActivityNewEvent : CUIKUserActivity {

	BOOL _allDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSURL* _url;
	NSString* _notes;
	NSString* _location;

}

@property (retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) BOOL allDay;                        //@synthesize allDay=_allDay - In the implementation block
@property (retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (retain) NSString * notes;                   //@synthesize notes=_notes - In the implementation block
@property (retain) NSString * location;                //@synthesize location=_location - In the implementation block
-(NSString *)notes;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSString *)location;
-(BOOL)allDay;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(id)dictionary;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)title;
-(id)eventWithEventStore:(id)arg1 ;
@end

