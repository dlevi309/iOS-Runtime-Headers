/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicUserTokenCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _cachedUserTokens;

}
+(id)sharedCache;
+(void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_decodeDeveloperTokenPart:(id)arg1 ;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)_persistCache;
-(void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_init;
-(void)_postLocalChangeNotification;
-(void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1 ;
-(void)dealloc;
@end

