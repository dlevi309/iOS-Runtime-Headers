/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICMusicSubscriptionStatusRemoteRequestingClient.h>

@protocol OS_dispatch_queue, NSCopying, OS_dispatch_source;
@class NSObject, NSOperationQueue, NSXPCConnection, NSMutableDictionary, NSString;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _numberOfActiveRemoteRequests;
	NSOperationQueue* _operationQueue;
	id<NSCopying> _privacyAcknowledgementObservationToken;
	NSXPCConnection* _remoteRequestingClientConnection;
	NSObject*<OS_dispatch_source> _remoteRequestingClientConnectionInvalidationTimer;
	NSMutableDictionary* _statusHandlersForPendingIdenticalRequests;
	NSMutableDictionary* _statusHandlersForRemoteRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedStatusController;
+(BOOL)_hasEntitlementForMusicSubscriptionStatusService;
-(id)init;
-(void)dealloc;
-(void)getSubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg1 ;
-(void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg1 ;
-(void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)arg1 ;
-(void)_handlePrivacyAcknowledgementRequirementChanged:(BOOL)arg1 ;
-(void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
-(void)_invalidateRemoteRequestingClientConnection;
-(void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(/*^block*/id)arg2 ;
-(BOOL)_willPerformSubscriptionStatusRequest:(id)arg1 withStatusHandler:(/*^block*/id)arg2 ;
-(void)_deliverSubscriptionStatusResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3 ;
-(void)_willBeginRemoteRequestWithUniqueIdentifier:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)_remoteRequestingClientConnection;
-(void)deliverSubscriptionStatusResponse:(id)arg1 forRemoteRequestWithUniqueIdentifier:(id)arg2 error:(id)arg3 ;
-(void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_statusHandlerForRemoteRequestWithUniqueIdentifier:(id)arg1 ;
-(void)_didEndRemoteRequestWithUniqueIdentifier:(id)arg1 ;
-(void)_scheduleInvalidationOfRemoteRequestingClientConnection;
-(void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
-(void)enableSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateCachedSubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enablePeriodicSubscriptionRefresh;
@end

