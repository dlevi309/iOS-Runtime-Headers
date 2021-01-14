/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSDate, NSTimeZone, NSString, NSURL, SXFormattedText;

@interface SXPresentableCalendarEvent : NSObject {

	BOOL _allDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSString* _location;
	NSURL* _URL;
	SXFormattedText* _notes;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                    //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                            //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) SXFormattedText * notes;                  //@synthesize notes=_notes - In the implementation block
-(SXFormattedText *)notes;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setNotes:(SXFormattedText *)arg1 ;
-(NSDate *)startDate;
-(NSString *)location;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)allDay;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(id)initWithStartDate:(id)arg1 ;
@end

