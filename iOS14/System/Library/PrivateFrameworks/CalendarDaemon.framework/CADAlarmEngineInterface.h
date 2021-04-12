/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADAlarmEngineInterface
@required
-(void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(/*^block*/id)arg4;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetLocationBasedAlarmsWithReply:(/*^block*/id)arg1;

@end

