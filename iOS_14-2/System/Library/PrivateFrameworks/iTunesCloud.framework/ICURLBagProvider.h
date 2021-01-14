/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICURLBagProvider : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _pendingOperationsForCacheKey;

}
+(id)sharedBagProvider;
-(void)invalidateCache;
-(id)init;
-(void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_saveCache;
-(void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(id)_cacheFilePath;
-(void)_loadCache;
-(void)getBagForRequestContext:(id)arg1 forceRefetch:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

