/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@class HKHeartRateSummary, HDActivityCacheManager, NSString;

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {

	HKHeartRateSummary* _latestSummary;
	HDActivityCacheManager* _activityCacheManager;

}

@property (assign,nonatomic,__weak) HDActivityCacheManager * activityCacheManager;              //@synthesize activityCacheManager=_activityCacheManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(Class)queryClass;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_queue_start;
-(HDActivityCacheManager *)activityCacheManager;
-(void)_queue_stop;
-(void)setActivityCacheManager:(HDActivityCacheManager *)arg1 ;
-(id)heartRateSummaryQueryClientProxy;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 ;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3 ;
@end

