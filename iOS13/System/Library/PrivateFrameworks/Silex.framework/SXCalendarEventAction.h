/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAction.h>

@class NSDate, NSTimeZone, NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAction : NSObject <SXAction> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
-(NSString *)type;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(SXFormattedText *)notes;
-(void)setNotes:(SXFormattedText *)arg1 ;
-(BOOL)allDay;
-(id)initWithStartDate:(id)arg1 ;
@end

