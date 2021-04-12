/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADAlarmEngineInterface.h>

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetLocationBasedAlarmsWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(/*^block*/id)arg1 ;
-(BOOL)_hasAccessToAlarmsOnCalendar:(void*)arg1 ;
@end

