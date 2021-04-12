/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicUserTokenCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _cachedMusicUserTokens;

}
+(id)sharedCache;
+(void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_decodeDeveloperTokenPart:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)_persistCache;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)getCachedMusicUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedMusicUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1 ;
-(void)_postLocalChangeNotification;
@end

