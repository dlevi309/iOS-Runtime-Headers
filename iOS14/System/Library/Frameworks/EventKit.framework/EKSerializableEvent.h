/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)notes;
-(NSArray *)alarms;
-(NSArray *)attendees;
-(NSMutableArray *)recurrenceRules;
-(double)travelTime;
-(NSTimeZone *)timeZone;
-(void)setTravelTime:(double)arg1 ;
-(NSDate *)endDate;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)createEventInEventStore:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isAllDay;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSArray *)attachments;
-(void)_initAlarms:(id)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)startDate;
-(id)initWithEvent:(id)arg1 ;
-(void)setRecurrenceRules:(NSMutableArray *)arg1 ;
-(NSString *)location;
-(NSString *)calendarIdentifier;
-(void)setIsAllDay:(BOOL)arg1 ;
-(void)_initAttachments:(id)arg1 ;
-(void)_initAttendees:(id)arg1 ;
-(void)_initRecurrenceRules:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSURL *)url;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(EKSerializableStructuredLocation *)structuredLocation;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setStructuredLocation:(EKSerializableStructuredLocation *)arg1 ;
-(NSString *)title;
@end

