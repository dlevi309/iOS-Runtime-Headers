/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, EKObjectID, NSTimeZone, NSDate;

@interface EKReminder : EKCalendarItem {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _dueDateComponents;
	EKObjectID* _parentID;

}

@property (nonatomic,readonly) NSTimeZone * dueDateTimeZone; 
@property (nonatomic,retain) EKObjectID * parentID;                             //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;                //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
+(Class)frozenClass;
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
-(id)init;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(void)reset;
-(BOOL)_reset;
-(void)rollback;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)refresh;
-(void)setCompleted:(BOOL)arg1 ;
-(EKObjectID *)parentID;
-(void)setParentID:(EKObjectID *)arg1 ;
-(BOOL)isCompleted;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(id)dueDate;
-(void)setDueDate:(id)arg1 ;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(id)startTimeZone;
-(void)setStartTimeZone:(id)arg1 ;
-(id)startDateForRecurrence;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)dueDateComponents;
-(id)reminderIdentifier;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(void)forceUpdateFrozenCalendar:(id)arg1 ;
-(id)externalURI;
-(NSTimeZone *)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1 ;
-(id)startDateComponentsRaw;
-(id)startDateTimeZone;
-(void)setStartDateTimeZone:(id)arg1 ;
-(BOOL)startDateAllDay;
-(void)setStartDateAllDay:(BOOL)arg1 ;
-(id)_generateNewUniqueID;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(void)clearParentID;
-(id)bestDisplayAlarm;
@end

