/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultService;
+(id)interface;
+(id)badgeCount;
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEntitlement;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_failedJobResultsForBundleIDs:(id)arg1 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)confirmAgentRequestedUpdateAll;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

