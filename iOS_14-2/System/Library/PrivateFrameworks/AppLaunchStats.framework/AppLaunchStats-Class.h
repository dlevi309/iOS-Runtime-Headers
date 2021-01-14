/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
*/


@interface AppLaunchStats : NSObject
+(id)log;
-(void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAppLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setDelayLaunchFor:(id)arg1 with:(double)arg2 ;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)setAppLaunchStatsPendingHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setPendingWorkQueue:(id)arg1 ;
@end

