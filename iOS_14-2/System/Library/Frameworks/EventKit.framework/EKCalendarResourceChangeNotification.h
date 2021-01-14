/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSNumber;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {

	BOOL _allDay;
	BOOL _dateChanged;
	BOOL _timeChanged;
	BOOL _locationChanged;
	BOOL _titleChanged;
	unsigned _changeType;
	NSString* _location;
	NSString* _calendarName;
	NSDate* _startDate;
	NSDate* _startDateForNextOccurrence;
	NSDate* _endDate;
	NSString* _eventID;
	NSNumber* _createCount;
	NSNumber* _updateCount;
	NSNumber* _deleteCount;

}

@property (nonatomic,retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                          //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;              //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * eventID;                               //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) unsigned changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                 //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                 //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                             //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL titleChanged;                                //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,retain) NSNumber * createCount;                           //@synthesize createCount=_createCount - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                           //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSNumber * deleteCount;                           //@synthesize deleteCount=_deleteCount - In the implementation block
-(NSString *)eventID;
-(id)initWithType:(long long)arg1 ;
-(void)setChangeType:(unsigned)arg1 ;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(unsigned)changeType;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSString *)location;
-(BOOL)allDay;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSNumber *)deleteCount;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(NSNumber *)createCount;
-(void)setCreateCount:(NSNumber *)arg1 ;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(void)setDeleteCount:(NSNumber *)arg1 ;
-(BOOL)dateChanged;
-(void)setDateChanged:(BOOL)arg1 ;
-(BOOL)timeChanged;
-(void)setTimeChanged:(BOOL)arg1 ;
-(BOOL)locationChanged;
-(void)setLocationChanged:(BOOL)arg1 ;
-(BOOL)titleChanged;
-(void)setTitleChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(BOOL)needsAlert;
-(id)resourceChangeFromEventStore:(id)arg1 ;
-(NSDate *)startDateForNextOccurrence;
-(void)setEventID:(NSString *)arg1 ;
@end

