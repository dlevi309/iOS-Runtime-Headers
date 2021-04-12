/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKSerializableObject.h>

@class NSDate, NSTimeZone, NSMutableArray, NSString, NSURL, EKSerializableStructuredLocation, NSArray;

@interface EKSerializableEvent : EKSerializableObject {

	BOOL _isAllDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	double _travelTime;
	NSMutableArray* _recurrenceRules;
	NSString* _title;
	NSString* _notes;
	NSURL* _url;
	NSString* _calendarIdentifier;
	NSString* _location;
	EKSerializableStructuredLocation* _structuredLocation;
	NSArray* _attendees;
	NSArray* _alarms;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                                //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL isAllDay;                                                      //@synthesize isAllDay=_isAllDay - In the implementation block
@property (assign,nonatomic) double travelTime;                                                  //@synthesize travelTime=_travelTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * recurrenceRules;                                   //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;                                        //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,copy) NSString * location;                                                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) EKSerializableStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                                //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                                   //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                              //@synthesize attachments=_attachments - In the implementation block
+(id)serializedProperties;
+(id)classesForKey;
-(NSString *)calendarIdentifier;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSArray *)attachments;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSURL *)url;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)isAllDay;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(EKSerializableStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKSerializableStructuredLocation *)arg1 ;
-(NSMutableArray *)recurrenceRules;
-(void)setRecurrenceRules:(NSMutableArray *)arg1 ;
-(void)_initAlarms:(id)arg1 ;
-(void)_initAttachments:(id)arg1 ;
-(void)_initAttendees:(id)arg1 ;
-(void)_initRecurrenceRules:(id)arg1 ;
-(id)createEventInEventStore:(id)arg1 ;
-(void)setIsAllDay:(BOOL)arg1 ;
@end

