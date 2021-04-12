/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _hasUpdatesEntitlement;
	int _storeChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)_setupConnection;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(BOOL)hasEntitlement;
-(void)_call:(id)arg1 run:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)confirmAgentRequestedUpdateAll;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadForSettingsFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)showApplicationUpdateBulletin;
-(void)updateAllWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithJobResultsCompletionBlock:(/*^block*/id)arg1 ;
@end

