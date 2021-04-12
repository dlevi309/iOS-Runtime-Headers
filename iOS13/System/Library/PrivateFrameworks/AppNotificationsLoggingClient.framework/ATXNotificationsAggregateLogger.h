/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
*/


@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {

	PETScalarEventTracker* _rttSelectionTracker;
	PETScalarEventTracker* _rttFromTracker;

}
+(id)sharedInstance;
+(id)rtFromMapping;
+(id)rtOutcomesMapping;
+(id)stringForRTOutcome:(unsigned long long)arg1 ;
+(id)stringForRTFrom:(unsigned long long)arg1 ;
-(id)init;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 ;
@end

