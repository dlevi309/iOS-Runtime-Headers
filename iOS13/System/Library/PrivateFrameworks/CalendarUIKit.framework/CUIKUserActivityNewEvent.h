/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)allDay;
-(id)eventWithEventStore:(id)arg1 ;
@end

