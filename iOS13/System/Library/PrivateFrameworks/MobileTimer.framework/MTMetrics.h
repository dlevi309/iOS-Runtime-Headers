/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@interface MTMetrics : NSObject {

	id<NAScheduler> _serializer;
	unsigned long long _operationStartTime;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                         //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic) unsigned long long operationStartTime;              //@synthesize operationStartTime=_operationStartTime - In the implementation block
+(id)_sharedPublicMetrics;
-(id)init;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)logAlarmSnoozeAction:(unsigned long long)arg1 ;
-(void)logAlarmDismissAction:(unsigned long long)arg1 ;
-(void)logTimerDismissed;
-(void)logTimerRepeated;
-(void)logAlarmAdded:(BOOL)arg1 ;
-(void)logAlarmDeleted:(BOOL)arg1 ;
-(void)logAlarmUpdated:(BOOL)arg1 ;
-(void)logTimerAdded;
-(void)logTimerDeleted;
-(void)logTimerUpdated;
-(void)logSyncCompleted;
-(void)logSyncFailedWithError:(id)arg1 ;
-(unsigned long long)operationStartTime;
-(void)setOperationStartTime:(unsigned long long)arg1 ;
@end

