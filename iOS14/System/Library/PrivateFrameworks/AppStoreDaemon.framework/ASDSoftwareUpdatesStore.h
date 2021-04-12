/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDPromise, NSString;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _hasUpdatesEntitlement;
	int _storeChangedNotificationToken;
	ASDPromise* _getUpdatesPromise;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
+(id)interface;
-(void)_setupConnection;
-(void)removeUpdateBulletins;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)showApplicationBadgeForPendingUpdates;
-(id)init;
-(void)_call:(id)arg1 run:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)showApplicationUpdateBulletin;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)hasEntitlement;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
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

