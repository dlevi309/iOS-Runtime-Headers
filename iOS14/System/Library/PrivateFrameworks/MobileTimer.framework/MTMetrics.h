/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@interface MTMetrics : NSObject {

	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
+(id)_sharedPublicMetrics;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)init;
-(void)logAlarmAdded:(BOOL)arg1 ;
-(void)logTimerUpdated;
-(void)logTimerRepeated;
-(id<NAScheduler>)serializer;
-(void)logAlarmUpdated:(BOOL)arg1 ;
-(void)logTimerDeleted;
-(void)logSyncFailedWithError:(id)arg1 ;
-(void)logAlarmDeleted:(BOOL)arg1 ;
-(void)logAlarmSnoozeAction:(unsigned long long)arg1 ;
-(void)logTimerAdded;
-(void)logSyncCompleted;
-(void)logAlarmDismissAction:(unsigned long long)arg1 ;
-(void)logTimerDismissed;
@end

