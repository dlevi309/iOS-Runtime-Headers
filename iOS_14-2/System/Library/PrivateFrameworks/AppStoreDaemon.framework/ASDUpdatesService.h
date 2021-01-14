/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue;
@class ASDServiceBroker, NSObject;

@interface ASDUpdatesService : NSObject {

	ASDServiceBroker* _serviceBroker;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _hasUpdatesEntitlement;
	int _storeChangedNotificationToken;

}
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
+(id)badgeCount;
+(id)interface;
+(id)defaultService;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)showApplicationBadgeForPendingUpdates;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)hasEntitlement;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_failedJobResultsForBundleIDs:(id)arg1 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)confirmAgentRequestedUpdateAll;
-(void)getManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadForSettingsFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithJobResultsCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

