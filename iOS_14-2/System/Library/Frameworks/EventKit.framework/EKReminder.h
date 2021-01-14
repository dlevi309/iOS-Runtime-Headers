/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(unsigned long long)entityType;
-(id)timeZone;
-(BOOL)refresh;
-(void)setAllDay:(BOOL)arg1 ;
-(id)externalURI;
-(void)setTimeZone:(id)arg1 ;
-(BOOL)isAllDay;
-(id)init;
-(id)dueDate;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(NSTimeZone *)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1 ;
-(id)startDateComponentsRaw;
-(id)startDateTimeZone;
-(void)setStartDateTimeZone:(id)arg1 ;
-(BOOL)startDateAllDay;
-(void)setStartDateAllDay:(BOOL)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(void)forceUpdateFrozenCalendar:(id)arg1 ;
-(unsigned long long)displayOrder;
-(BOOL)isCompleted;
-(id)initWithPersistentObject:(id)arg1 ;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)startDateComponents;
-(EKObjectID *)parentID;
-(void)reset;
-(void)setParentID:(EKObjectID *)arg1 ;
-(BOOL)_reset;
-(void)setStartTimeZone:(id)arg1 ;
-(id)startTimeZone;
-(id)_generateNewUniqueID;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)startDateForRecurrence;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)rollback;
-(NSDate *)completionDate;
-(void)clearParentID;
-(id)reminderIdentifier;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(id)bestDisplayAlarm;
@end

