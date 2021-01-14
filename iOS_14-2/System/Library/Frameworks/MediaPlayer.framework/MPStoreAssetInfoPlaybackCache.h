/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface MPStoreAssetInfoPlaybackCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _accessOrderedRequests;
	NSMutableDictionary* _requestToCachedResponse;

}
+(id)sharedCache;
-(void)addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(id)_init;
@end

