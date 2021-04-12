/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADReminderInterface.h>

@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1 ;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(/*^block*/id)arg1 ;
@end

