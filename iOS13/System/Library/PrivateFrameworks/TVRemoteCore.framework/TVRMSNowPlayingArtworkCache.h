/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class _RMSNowPlayingArtworkCacheItem, NSCache;

@interface TVRMSNowPlayingArtworkCache : NSObject {

	_RMSNowPlayingArtworkCacheItem* _lastItem;
	NSCache* _cache;

}
+(id)sharedArtworkCache;
-(id)init;
-(id)artworkDataForIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)artworkDataForNowPlayingInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2 ;
@end

