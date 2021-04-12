/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDAppAssertionManager, HDBackgroundTaskScheduler, NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver> {

	BOOL _shouldScheduleLaunches;
	int _backgroundAppRefreshNotifyToken;
	HDProfile* _profile;
	HDAppAssertionManager* _appAssertionManager;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	NSObject*<OS_dispatch_queue> _launchQueue;
	NSMutableDictionary* _pendingTypeCodesToAnchors;
	NSMutableSet* _pendingFirstLaunchBundleIdentifiers;
	NSMutableDictionary* _launchTimers;
	NSMutableDictionary* _launchTimerLaunchTimes;
	NSObject*<OS_dispatch_queue> _launchTimerQueue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDAppAssertionManager * appAssertionManager;                      //@synthesize appAssertionManager=_appAssertionManager - In the implementation block
@property (nonatomic,retain) HDBackgroundTaskScheduler * backgroundTaskScheduler;              //@synthesize backgroundTaskScheduler=_backgroundTaskScheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> launchQueue;                         //@synthesize launchQueue=_launchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingTypeCodesToAnchors;                  //@synthesize pendingTypeCodesToAnchors=_pendingTypeCodesToAnchors - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingFirstLaunchBundleIdentifiers;               //@synthesize pendingFirstLaunchBundleIdentifiers=_pendingFirstLaunchBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * launchTimers;                               //@synthesize launchTimers=_launchTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * launchTimerLaunchTimes;                     //@synthesize launchTimerLaunchTimes=_launchTimerLaunchTimes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> launchTimerQueue;                    //@synthesize launchTimerQueue=_launchTimerQueue - In the implementation block
@property (assign,nonatomic) int backgroundAppRefreshNotifyToken;                              //@synthesize backgroundAppRefreshNotifyToken=_backgroundAppRefreshNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL shouldScheduleLaunches;                                      //@synthesize shouldScheduleLaunches=_shouldScheduleLaunches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)_backgroundTaskFiredWithName:(id)arg1 ;
-(void)setLaunchTimerLaunchTimes:(NSMutableDictionary *)arg1 ;
-(void)setPendingFirstLaunchBundleIdentifiers:(NSMutableSet *)arg1 ;
-(void)setLaunchTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_shouldDoAFirstLaunchForBundleIdentifier:(id)arg1 ;
-(void)setBackgroundTaskScheduler:(HDBackgroundTaskScheduler *)arg1 ;
-(NSMutableSet *)pendingFirstLaunchBundleIdentifiers;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(id)_queue_subscriptionForActivityName:(id)arg1 anchor:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)launchTimerQueue;
-(void)setAppAssertionManager:(HDAppAssertionManager *)arg1 ;
-(void)_removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ;
-(void)removeBundleID:(id)arg1 ;
-(void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3 ;
-(NSMutableDictionary *)pendingTypeCodesToAnchors;
-(BOOL)shouldScheduleLaunches;
-(id)_appSubscriptionsForDataTypeCode:(long long)arg1 lastAppLaunchTimes:(id)arg2 error:(id*)arg3 ;
-(void)setAnchor:(id)arg1 forDataCode:(long long)arg2 ;
-(void)setPendingTypeCodesToAnchors:(NSMutableDictionary *)arg1 ;
-(void)_removeLaunchForSubscription:(id)arg1 anchor:(id)arg2 ;
-(id)_activityNameForSubscription:(id)arg1 anchor:(id)arg2 ;
-(void)setBackgroundAppRefreshNotifyToken:(int)arg1 ;
-(void)updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3 ;
-(void)_queue_scheduleLaunchForSubscription:(id)arg1 anchor:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)launchQueue;
-(void)setLaunchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDProfile *)profile;
-(void)setLaunchTimers:(NSMutableDictionary *)arg1 ;
-(void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 ;
-(void)_queue_subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3 ;
-(void)_queue_scheduleLaunches:(long long)arg1 anchor:(id)arg2 ;
-(void)_removeBundleID:(id)arg1 ;
-(void)_launchTimerFired:(id)arg1 code:(id)arg2 anchor:(id)arg3 ;
-(int)backgroundAppRefreshNotifyToken;
-(void)setShouldScheduleLaunches:(BOOL)arg1 ;
-(void)_queue_ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4 ;
-(void)unitTesting_synchronizeWithQueue;
-(void)_applicationsInstalled:(id)arg1 ;
-(HDAppAssertionManager *)appAssertionManager;
-(void)_queue_launchSubscription:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(BOOL)areSubscriptionsSupportedForDataTypeCode:(long long)arg1 ;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(void)_queue_updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3 ;
-(void)ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4 ;
-(void)dealloc;
-(NSMutableDictionary *)launchTimers;
-(NSMutableDictionary *)launchTimerLaunchTimes;
@end

