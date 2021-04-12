/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADReminderInterface
@required
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(/*^block*/id)arg1;

@end

