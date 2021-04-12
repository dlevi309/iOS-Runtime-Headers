/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol OS_dispatch_queue;
@class NSString, NSDate, EKRecurrenceRule, NSObject;

@interface ADCalendarEvent : NSObject {

	BOOL _allDay;
	NSString* _eventDescription;
	NSString* _location;
	NSString* _summary;
	NSString* _url;
	NSDate* _start;
	NSDate* _end;
	EKRecurrenceRule* _recurrence;
	NSObject*<OS_dispatch_queue> _calendarEventQueue;

}

@property (nonatomic,copy) NSString * eventDescription;                                    //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,copy) NSString * location;                                            //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * summary;                                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDate * start;                                               //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSDate * end;                                                 //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                  //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) EKRecurrenceRule * recurrence;                                //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calendarEventQueue;              //@synthesize calendarEventQueue=_calendarEventQueue - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)start;
-(NSString *)url;
-(NSString *)location;
-(NSDate *)end;
-(void)setUrl:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(EKRecurrenceRule *)recurrence;
-(void)setRecurrence:(EKRecurrenceRule *)arg1 ;
-(id)EKEventInEventStore:(id)arg1 ;
-(void)retrieveEventInEventStore:(id)arg1 byIdentifier:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_recurrenceRuleFromDictionary:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calendarEventQueue;
-(BOOL)_eventIsEqualToCalendarEvent:(id)arg1 ;
-(NSString *)eventDescription;
-(void)setEventDescription:(NSString *)arg1 ;
-(void)setCalendarEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

