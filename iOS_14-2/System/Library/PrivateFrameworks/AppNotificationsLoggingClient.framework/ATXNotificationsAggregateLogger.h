/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
*/


@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {

	PETScalarEventTracker* _rttSelectionTracker;
	PETScalarEventTracker* _rttFromTracker;

}
+(id)sharedInstance;
+(id)rtOutcomesMapping;
+(id)rtFromMapping;
+(id)stringForRTOutcome:(unsigned long long)arg1 ;
+(id)stringForRTFrom:(unsigned long long)arg1 ;
-(id)init;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 ;
@end

