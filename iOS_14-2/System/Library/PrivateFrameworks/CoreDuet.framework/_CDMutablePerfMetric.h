/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_CDPerfMetric.h>

@protocol OS_os_activity;
@class NSObject, _DKEventStatsTimerCounter;

@interface _CDMutablePerfMetric : _CDPerfMetric {

	NSObject*<OS_os_activity> _os_activity;
	os_activity_scope_state_s _os_activity_scope_state;
	_DKEventStatsTimerCounter* _eventStatsTimerCounter;

}
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(void)startTelemetryWithOSActivity:(id)arg1 ;
-(void)endTimingWithEvent:(CDPerfEvent*)arg1 resultCount:(unsigned long long)arg2 incrementErrorCount:(BOOL)arg3 ;
-(id)description;
@end

