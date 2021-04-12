/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDActivityCacheManagerObserver <NSObject>
@optional
-(void)activityCacheManager:(id)arg1 changedYesterdayActivityCache:(id)arg2;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3;

@required
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;

@end

