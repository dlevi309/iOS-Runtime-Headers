/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@class NSDateComponents, NSCalendar, HKActivityCache, HDActivityCacheManager, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {

	NSDateComponents* _statisticsIntervalComponents;
	NSCalendar* _calendar;
	HKActivityCache* _lastActivityCache;
	HDActivityCacheManager* _activityCacheManager;

}

@property (assign,nonatomic,__weak) HDActivityCacheManager * activityCacheManager;              //@synthesize activityCacheManager=_activityCacheManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(HDActivityCacheManager *)activityCacheManager;
-(void)setActivityCacheManager:(HDActivityCacheManager *)arg1 ;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 ;
-(BOOL)shouldObserveActivityCache;
@end

