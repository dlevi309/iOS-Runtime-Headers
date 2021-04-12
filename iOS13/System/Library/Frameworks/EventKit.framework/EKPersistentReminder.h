/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentReminder : EKPersistentCalendarItem
+(Class)meltedClass;
+(id)reminderWithRandomUUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)entityType;
-(id)dueDate;
-(void)setDueDate:(id)arg1 ;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(void)setCompletionDate:(id)arg1 ;
-(id)completionDate;
-(id)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(void)setDueDateTimeZone:(id)arg1 ;
-(void)setDueDateAllDay:(BOOL)arg1 ;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
@end

