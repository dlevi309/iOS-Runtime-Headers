/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
*/


@interface AppLaunchStats : NSObject
+(id)log;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAppLaunchStatsPendingHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setDelayLaunchFor:(id)arg1 with:(double)arg2 ;
-(void)setAppLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)setPendingWorkQueue:(id)arg1 ;
@end

