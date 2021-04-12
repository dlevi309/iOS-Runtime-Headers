/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest {

	unsigned long long _progressCount;
	unsigned long long _maxProgressCount;
	double _progressRescheduleDelay;

}

@property (assign) unsigned long long progressCount;                 //@synthesize progressCount=_progressCount - In the implementation block
@property (assign) unsigned long long maxProgressCount;              //@synthesize maxProgressCount=_maxProgressCount - In the implementation block
@property (assign) double progressRescheduleDelay;                   //@synthesize progressRescheduleDelay=_progressRescheduleDelay - In the implementation block
-(void)setUp;
-(void)startTest;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(double)progressRescheduleDelay;
-(unsigned long long)progressCount;
-(unsigned long long)maxProgressCount;
-(void)setProgressCount:(unsigned long long)arg1 ;
-(void)setProgressRescheduleDelay:(double)arg1 ;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)setMaxProgressCount:(unsigned long long)arg1 ;
@end

