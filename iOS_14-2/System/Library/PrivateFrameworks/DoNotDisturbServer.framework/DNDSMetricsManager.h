/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSBackingStore;
@class DNDSMutableMetricsRecord, NSCalendar, NSDateFormatter;

@interface DNDSMetricsManager : NSObject {

	id<DNDSBackingStore> _metricsBackingStore;
	DNDSMutableMetricsRecord* _metricsRecord;
	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;

}
-(id)_dateFormatter;
-(id)init;
-(id)_calendar;
-(void)_aggregateMetricsWithEnabled:(BOOL)arg1 manuallyEnabled:(BOOL)arg2 numberOfNewSessions:(int)arg3 numberOfNewManualSessions:(int)arg4 controlCenterPhone:(BOOL)arg5 controlCenterWatch:(BOOL)arg6 type:(id)arg7 mode:(id)arg8 dayOfWeek:(id)arg9 ;
-(void)sendMetricsHeartbeatsIfNeeded;
-(void)_sendDailyHeartbeatIfNeeded;
-(void)_sendWeeklyHeartbeatIfNeeded;
-(void)_sendMonthlyHeartbeatIfNeeded;
-(id)_metricsDayStringForDate:(id)arg1 ;
-(id)_metricsWeekStringForDate:(id)arg1 ;
-(id)_metricsMonthStringForDate:(id)arg1 ;
-(void)_writeMetricsToStore:(id)arg1 ;
-(id)_dateForYesterday;
-(id)_startOfWeekWithDate:(id)arg1 ;
-(id)_startOfLastWeek;
-(id)_startOfMonthWithDate:(id)arg1 ;
-(id)_startOfLastMonth;
-(void)assertionTaken:(id)arg1 withClientDetails:(id)arg2 lockState:(unsigned long long)arg3 ;
@end

