/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarInterface.h>

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 hasEvents:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 hasReminders:(/*^block*/id)arg2 ;
-(int)_tryPerformBlockWithCalendarID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
@end

