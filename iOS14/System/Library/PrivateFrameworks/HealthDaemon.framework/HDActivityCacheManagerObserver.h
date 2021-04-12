/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDActivityCacheManagerObserver <NSObject>
@optional
-(void)activityCacheManager:(id)arg1 changedYesterdayActivityCache:(id)arg2;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3;

@required
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;

@end

