/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, ICMusicSubscriptionStatusCacheKey, NSMutableDictionary;

@interface ICMusicSubscriptionStatusCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	ICMusicSubscriptionStatusCacheKey* _baseCacheKey;
	NSMutableDictionary* _cachedSubscriptionStatusResponses;

}
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(void)updateBaseCacheKey;
-(void)_handlePhoneNumberDidChangeNotification:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1 ;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)_getCacheKeyForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_persistCachePostingGlobalNotification:(BOOL)arg1 ;
-(id)_statusChangeUserInfoForUserIdentity:(id)arg1 oldStatus:(id)arg2 newStatus:(id)arg3 ;
-(void)_postLocalChangeNotificationWithUserInfo:(id)arg1 ;
-(void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

