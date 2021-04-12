/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarInterface.h>

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADCalendar:(id)arg1 hasEvents:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 hasReminders:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2 ;
-(int)_tryPerformBlockWithCalendarID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
@end

