/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDActivityCacheManager, NSObject, NSMutableDictionary, NSString;

@interface HDHRDailyHeartRateManager : NSObject <HDHealthDaemonReadyObserver, HDActivityCacheManagerObserver> {

	HDProfile* _profile;
	HDActivityCacheManager* _activityCacheManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _restingHeartRateByActivityCacheIndex;
	NSMutableDictionary* _walkingAverageHeartRateByActivityCacheIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)dealloc;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 ;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3 ;
-(void)_queue_replaceHeartRate:(id)arg1 ofType:(id)arg2 forCacheIndex:(long long)arg3 dateInterval:(id)arg4 heartRateByCacheIndex:(id)arg5 ;
-(void)_queue_cleanupValuesForTodayCacheIndex:(long long)arg1 yesterdayCacheIndex:(long long)arg2 ;
-(void)_queue_deleteHeartRateOfType:(id)arg1 forCacheIndex:(long long)arg2 replacementUUID:(id)arg3 ;
@end

