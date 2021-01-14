/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {

	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _contentItemForIdentifierFuture;
	MPCFuture* _contentItemArtworkForIdentifierFuture;

}
+(BOOL)_shouldRegisterForNotifications;
-(id)contentItemForIdentifier:(id)arg1 ;
-(long long)playingIdentifierCacheState;
-(id)playbackState;
-(id)playingIdentifier;
-(long long)contentItemCacheStateForIdentifier:(id)arg1 ;
-(long long)playbackStateCacheState;
-(id)supportedCommands;
-(long long)supportedCommandsCacheState;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(CGSize)arg3 ;
-(id)playQueueIdentifiersForRange:(MSVSignedRange)arg1 ;
-(void)invalidateAllTokens;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(long long)playQueueIdentifiersCacheStateForRange:(MSVSignedRange)arg1 ;
-(id)_init;
-(id)playQueueIdentifiersForRequest:(void*)arg1 ;
@end

